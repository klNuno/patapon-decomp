#include "common.h"

extern s32 func_0881F5C0(s32, s32, s32);
s32 *func_08868E8C(void *, s32, s32);
extern void *D_08AD1E28[];
extern s32 D_08A0043C[];
extern u8 D_08A00490[];

typedef struct {
    u8 pad_00[0x5C4];
    void *unk_5C4;
} T089144C0_S;

typedef struct {
    u8 pad_00[0x1C];
    T089144C0_S unk_1C;
    u8 pad_5E4[0x38];
    s32 unk_61C;
    s32 unk_620;
    s32 unk_624;
    u8 pad_628[0x4];
    void *unk_62C;
} T089144C0;

void func_089144C0(T089144C0 *arg0) {
    T089144C0_S *sub;
    s32 *temp_v0;
    void *temp;
    s32 temp_a0;
    s32 temp_v1;

    sub = &arg0->unk_1C;
    func_0881F5C0((s32)&arg0->unk_61C, 0, 0x14);
    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    temp_v0 = func_08868E8C(temp, 2, D_08A0043C[0]);
    if (temp_v0 != NULL) {
        temp_a0 = temp_v0[0];
        if (temp_a0 != 0) {
            temp_v1 = temp_v0[1];
            arg0->unk_61C = temp_a0;
            arg0->unk_620 = temp_v1;
            arg0->unk_624 = temp_v1;
        }
    }
    arg0->unk_62C = D_08A00490;
    sub->unk_5C4 = &arg0->unk_61C;
}
