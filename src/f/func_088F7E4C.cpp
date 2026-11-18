#include "common.h"

extern "C" {

class Del_088F7E4C {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_088F5328(s32, s32);
void func_0880416C(void *);

class Ptr_088F7E4C {
public:
    s32 unk_00;
    Del_088F7E4C *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_088F5328(p, unk_00);
            }
        }
    }
};

typedef struct {
    Ptr_088F7E4C *unk_00;
    s32 unk_04;
} V_088F7E4C;

typedef struct {
    u8 pad_00[0x404];
    V_088F7E4C unk_404;
} M_088F7E4C;

typedef struct {
    u8 pad_00[4];
    M_088F7E4C unk_04;
} Obj_088F7E4C;

Obj_088F7E4C *func_088F7E4C(Obj_088F7E4C *arg0, s16 arg1) {
    Ptr_088F7E4C *p;
    Ptr_088F7E4C **d;
    s32 *n;

    if (arg0 != NULL) {
        if (&arg0->unk_04 != NULL) {
            p = arg0->unk_04.unk_404.unk_00;
            d = &arg0->unk_04.unk_404.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_04.unk_404.unk_04)) {
                n = &arg0->unk_04.unk_404.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->release();
                        }
                    }
                    p++;
                } while (p != *d + *n);
            }
            arg0->unk_04.unk_404.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
