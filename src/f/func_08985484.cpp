#include "common.h"

extern "C" {

class Del {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_089853B4(s32, s32);
void func_0880416C(void *);
void func_088CE0C0(void *);
void func_088CE04C(void *, s16);
extern char D_08A481C4[];

class Ptr {
public:
    s32 unk_00;
    Del *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_089853B4(p, unk_00);
            }
        }
    }
};

typedef struct {
    Ptr *unk_00;
    s32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x104];
    V unk_104;
} Sub;

typedef struct {
    u8 pad_00[0x10];
    Sub unk_10;
    u8 unk_11C[0x40];
    void *unk_15C;
} Obj;

Obj *func_08985484(Obj *arg0, s16 arg1) {
    Ptr *p;
    Ptr **d;
    s32 *n;

    if (arg0 != NULL) {
        arg0->unk_15C = D_08A481C4;
        func_088CE0C0(arg0->unk_11C);
        func_088CE04C(arg0->unk_11C, -1);
        if (&arg0->unk_10 != NULL) {
            p = arg0->unk_10.unk_104.unk_00;
            d = &arg0->unk_10.unk_104.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_10.unk_104.unk_04)) {
                n = &arg0->unk_10.unk_104.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->release();
                        }
                    }
                    p++;
                } while (p != *d + *n);
            }
            arg0->unk_10.unk_104.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
