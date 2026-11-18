#include "common.h"

typedef struct {
    u8 pad_00[0x84];
    void *unk_84;
    u8 unk_88[0x14];
    void *unk_9C;
    u8 pad_A0[0x4];
    void *unk_A4;
} S0896C7E4;

void func_0880416C(void *);
void func_088694F8(void *, s32);
void func_0886A0DC(void *);
extern u8 D_08A44BA4[];
extern u8 D_08A44CF8[];
extern u8 D_08A47EC0[];

S0896C7E4 *func_0896C7E4(S0896C7E4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_A4 = D_08A47EC0;
        if (arg0->unk_88 != NULL) {
            arg0->unk_9C = D_08A44BA4;
            func_0886A0DC(arg0->unk_88);
            func_088694F8(arg0->unk_88, -1);
        }
        if (arg0 != NULL) {
            arg0->unk_84 = D_08A44CF8;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
