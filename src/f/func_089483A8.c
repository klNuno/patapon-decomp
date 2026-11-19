#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04[0x404];
} T;

typedef struct {
    u8 pad_00[0x1620];
    u8 unk_1620[0x1DC0];
    s32 unk_33E0;
    u8 pad_33E4[0x2C];
    u8 unk_3410[1];
} S;

extern u8 D_08A03F8C[];
s32 func_0894A1F4(void *);
void func_0894828C(T *, s32);
void func_089481D4(void *, T *, const void *);
s32 func_0894A1E4(void *);
s32 func_08959D94(void *, void *);
void func_0894A1EC(void *);

s32 func_089483A8(S *arg0) {
    T temp;
    u8 temp2[0x408];
    u8 temp3[0x408];
    s32 temp4 = func_0894A1F4(arg0->unk_3410);

    temp.unk_00 = 0;
    func_0894828C(&temp, temp4);
    func_089481D4(temp2, &temp, D_08A03F8C);
    func_089481D4(temp3, &temp, (u8 *)func_0894A1E4(arg0->unk_3410) + 0x58);
    arg0->unk_33E0 = func_08959D94(arg0->unk_1620, temp.unk_04);
    func_0894A1EC(arg0->unk_3410);
    return 1;
}
