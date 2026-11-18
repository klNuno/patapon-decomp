#include "common.h"

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_088E23E8(void *, s32);
void func_0890AA44(void *, s32);
void func_08930214(void *, s32);
void func_08865F78(void *, s32);
extern u8 D_08A46530[];

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 pad_2C[0xC4];
    u8 unk_F0[0x2C0 - 0xF0];
    u8 unk_2C0[0x10];
    u8 unk_2D0[0x4];
} S_088E4AD0;

S_088E4AD0 *func_088E4AD0(S_088E4AD0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A46530;
        func_08930214(arg0->unk_2D0, -1);
        func_0890AA44(arg0->unk_2C0, -1);
        func_08804000(arg0->unk_F0, func_08865F78, 0x90, 3);
        func_088E23E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
