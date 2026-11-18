#include "common.h"

typedef struct {
    u8 pad_00[0x92E4];
    s32 unk_92E4;
} C_088EE248;

typedef struct {
    u8 pad_00[0x3A0];
    C_088EE248 *unk_3A0;
    u8 pad_3A4[0x14C0 - 0x3A4];
    s32 unk_14C0;
    u8 pad_14C4[0x4];
    s32 unk_14C8;
} B_088EE248;

typedef struct {
    u8 pad_00[0x14];
    B_088EE248 *unk_14;
} S_088EE248;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_088EE248(S_088EE248 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;
    s32 *temp3;
    B_088EE248 *b;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    temp3 = func_0885356C(arg1, 2, 1, 4);
    b = arg0->unk_14;
    *temp = b->unk_14C8;
    *temp2 = b->unk_14C0;
    *temp3 = arg0->unk_14->unk_3A0->unk_92E4;
    func_08852F00(arg1, 0);
}
