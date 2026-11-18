#include "common.h"

void func_0880416C(void *);
void func_0885DE4C(void *);
void func_0887FD48(void *, s32);
void func_088852E8(void *, s32);
void func_088857D0(void *, s32);
extern u8 D_08A44AD8[];

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x4];
    s32 unk_14;
    void *unk_18;
    u8 pad_1C[0x4];
    u8 unk_20[0xEA0 - 0x20];
    u8 unk_EA0[0xFB4 - 0xEA0];
    u8 unk_FB4[0x4];
} S_088878C0;

S_088878C0 *func_088878C0(S_088878C0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088857D0(arg0->unk_FB4, -1);
        func_088852E8(arg0->unk_EA0, -1);
        func_0887FD48(arg0->unk_20, -1);
        if (arg0 != NULL) {
            arg0->unk_18 = D_08A44AD8;
            func_0885DE4C(arg0);
            arg0->unk_0C = 0;
            arg0->unk_14 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
