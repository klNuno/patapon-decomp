#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_089940E4;

typedef struct {
    u8 pad_00[0x404];
    V_089940E4 unk_404;
} I_089940E4;

typedef struct {
    u8 pad_00[0x1058];
    void *unk_1058;
    u8 pad_105C[0x1C];
    I_089940E4 unk_1078;
} S_089940E4;

extern u8 D_08A485A8[];
extern u8 D_08A485BC[];
void func_08925D14(void *, s32);
void func_0880416C(void *);

S_089940E4 *func_089940E4(S_089940E4 *arg0, s16 arg1) {
    s32 *p;
    V_089940E4 *v;

    if (arg0 != NULL) {
        arg0->unk_1058 = D_08A485A8;
        if (&arg0->unk_1078 != NULL) {
            p = arg0->unk_1078.unk_404.unk_00;
            v = &arg0->unk_1078.unk_404;
            if ((u32)p != (u32)(p + arg0->unk_1078.unk_404.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_1078.unk_404.unk_04);
            }
            arg0->unk_1078.unk_404.unk_04 = 0;
        }
        if (arg0 != NULL) {
            arg0->unk_1058 = D_08A485BC;
            func_08925D14(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
