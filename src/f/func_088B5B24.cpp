#include "common.h"

extern "C" {

class Del_088B5B24 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_088899D8(s32, s32);
void func_0880416C(void *);

class Ptr_088B5B24 {
public:
    s32 unk_00;
    Del_088B5B24 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_088899D8(p, unk_00);
            }
        }
    }
};

typedef struct {
    Ptr_088B5B24 *unk_00;
    s32 unk_04;
} V_088B5B24;

typedef struct {
    u8 pad_00[0x24];
    V_088B5B24 unk_24;
} Obj_088B5B24;

Obj_088B5B24 *func_088B5B24(Obj_088B5B24 *arg0, s16 arg1) {
    Ptr_088B5B24 *p;
    Ptr_088B5B24 **d;
    s32 *n;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            p = arg0->unk_24.unk_00;
            d = &arg0->unk_24.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_24.unk_04)) {
                n = &arg0->unk_24.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->release();
                        }
                    }
                    p++;
                } while (p != *d + *n);
            }
            arg0->unk_24.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
