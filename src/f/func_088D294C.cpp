#include "common.h"

extern "C" {

class Obj_088D294C {
public:
    u8 pad_00[0x90];
    virtual void vf_08(s32);
};

class Alloc_088D294C {
public:
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10(Obj_088D294C *);
};

class Del_088D294C {
public:
    virtual void vf_08();
    virtual void vf_0C(Obj_088D294C *, s32 *, Alloc_088D294C *);
};

inline void destroy_088D294C(Obj_088D294C *p, Alloc_088D294C *a) {
    if (p != NULL) {
        p->vf_08(-1);
        a->vf_10(p);
    }
}

class Ptr_088D294C {
public:
    Alloc_088D294C *unk_00;
    Del_088D294C *unk_04;
    Obj_088D294C *unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        Obj_088D294C *&p = unk_08;
        if (p != NULL) {
            s32 *&c = unk_0C;
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                destroy_088D294C(p, unk_00);
            }
        }
    }
};

void func_088D294C(Ptr_088D294C *arg0) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->release();
        }
    }
}

}
