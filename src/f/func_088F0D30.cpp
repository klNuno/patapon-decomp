#include "common.h"

extern "C" {

typedef struct T088F0D30_E {
    u8 pad_00[0x40];
} T088F0D30_E;

typedef struct T088F0D30_V {
    T088F0D30_E *unk_00;
    s32 unk_04;
} T088F0D30_V;

typedef struct T088F0D30_M {
    u8 pad_00[0x804];
    T088F0D30_V unk_804;
} T088F0D30_M;

class T088F0D30_C {
public:
    T088F0D30_M unk_00;
    u8 pad_80C[0x4];
    u8 unk_810[0x10C];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

extern u8 D_08A4664C[];
void func_0880416C(void *);
void func_088AF070(void *, s32);

T088F0D30_C *func_088F0D30(T088F0D30_C *arg0, s16 arg1) {
    T088F0D30_E *p;
    T088F0D30_V *v;

    if (arg0 != NULL) {
        *(void **)&arg0->unk_810[0x10C] = D_08A4664C;
        arg0->vfunc_0C();
        func_088AF070(arg0->unk_810, -1);
        if (&arg0->unk_00 != NULL) {
            v = &arg0->unk_00.unk_804;
            p = arg0->unk_00.unk_804.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_00.unk_804.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_00.unk_804.unk_04);
            }
            arg0->unk_00.unk_804.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
