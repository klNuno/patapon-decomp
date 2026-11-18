#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    u8 *unk_30;
    u8 pad_34[0x1C];
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    u8 unk_5C;
    u8 pad_5D[0x3];
    s32 unk_60;
    u8 *unk_64;
    u8 *unk_68;
    u8 pad_6C[0x4];
    u8 unk_70[0x130];
    u8 unk_1A0[0x120];
} T088B91C0;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} U088B91C0;

extern u8 D_08A45DC8[];

void func_088BA1A0(T088B91C0 *);
void func_08865EE0(void *);
void func_08865F78(void *, s32);
void func_0880406C(void *, void *, void *, s32, s32);
void func_088B9E0C(T088B91C0 *, u8 *, s32);

T088B91C0 *func_088B91C0(T088B91C0 *arg0, U088B91C0 *arg1, s32 arg2) {
    func_088BA1A0(arg0);
    arg0->unk_30 = D_08A45DC8;
    arg0->unk_50 = arg2;
    arg0->unk_54 = 0;
    arg0->unk_58 = 0;
    arg0->unk_5C = 0;
    arg0->unk_60 = 0;
    func_0880406C(arg0->unk_70, func_08865EE0, func_08865F78, 0x90, 2);
    func_0880406C(arg0->unk_1A0, func_08865EE0, func_08865F78, 0x90, 2);
    arg0->unk_64 = (u8 *)arg1 + arg1->unk_10 + 4;
    arg0->unk_68 = (u8 *)arg1 + arg1->unk_0C + 4;
    func_088B9E0C(arg0, arg0->unk_70, arg0->unk_54);
    return arg0;
}
