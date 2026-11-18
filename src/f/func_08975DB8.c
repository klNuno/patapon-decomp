#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 unk_0C[0x30];
    s32 unk_3C;
    void *unk_40;
    u8 pad_44[0x8];
    u8 unk_4C[0x8];
    s32 unk_54;
    u8 pad_58[0x4];
    s32 unk_5C;
    s32 unk_60;
    u8 pad_64[0x8];
    void *unk_6C;
    s32 unk_70;
    void *unk_74;
    u8 pad_78[0x4];
    s32 unk_7C;
    u8 unk_80[0x800];
    s32 unk_880;
} S_08975DB8;

void func_0881F5C0(void *, s32, s32);
void func_0882687C(void *, void *);
void func_08914C0C(s32, void *);
s32 sceUtilityOskInitStart(void *);
void func_0885A274(s32, void *);

s32 func_08975DB8(S_08975DB8 *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    if (arg0->unk_880 != 0) {
        return 0;
    }
    func_0881F5C0(arg0->unk_0C, 0, 0x40);
    func_0881F5C0(arg0->unk_4C, 0, 0x34);
    if (arg4 != NULL && arg0->unk_80 != arg4) {
        func_0882687C(arg0->unk_80, arg4);
    }
    func_08914C0C(0x40, arg0->unk_0C);
    arg0->unk_3C = 1;
    arg0->unk_40 = arg0->unk_4C;
    arg0->unk_5C = arg2;
    arg0->unk_54 = arg3;
    arg0->unk_60 = 1;
    arg0->unk_70 = 0x400;
    arg0->unk_74 = arg0->unk_80;
    arg0->unk_6C = arg0->unk_80;
    arg0->unk_7C = arg1;
    if (sceUtilityOskInitStart(arg0->unk_0C) != 0) {
        return 0;
    }
    func_0885A274(arg0->unk_08, arg0);
    arg0->unk_880 = 1;
    return 1;
}
