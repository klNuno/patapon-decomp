#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Struct_08853914_C;

typedef struct {
    Struct_08853914_C unk_00[15];
    s32 unk_78;
    u8 pad_7C[0x9C];
} Struct_08853914_B;

typedef struct {
    u8 pad_00[0x8];
    Struct_08853914_C *unk_08;
    u8 pad_0C[0xC];
    Struct_08853914_B unk_18[3];
    s32 unk_360;
} Struct_08853914;

void func_0881F5C0(void *, s32, s32);

void func_08853914(Struct_08853914 *arg0) {
    s32 temp;

    temp = arg0->unk_08->unk_00;
    arg0->unk_360++;
    func_0881F5C0(&arg0->unk_18[arg0->unk_360], 0, sizeof(Struct_08853914_B));
    arg0->unk_08 = &arg0->unk_18[arg0->unk_360].unk_00[arg0->unk_18[arg0->unk_360].unk_78];
    arg0->unk_08->unk_00 = temp;
}
