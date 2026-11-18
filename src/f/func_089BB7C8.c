#include "common.h"

typedef struct {
    s32 unk_00, unk_04;
    f32 *unk_08;
    u8 pad_0C[0xC];
    f32 unk_18, unk_1C;
    u8 pad_20[0x6B0];
} T1;
typedef struct {
    s32 unk_00, unk_04;
    u8 unk_08, unk_09;
    u8 pad_0A[2];
    s32 unk_0C, unk_10, unk_14, unk_18, unk_1C, unk_20;
    u8 pad_24[0xC];
    u8 unk_30[16][0x90];
    T1 unk_930, unk_1000;
    s32 unk_16D0;
    u8 pad_16D4[0xC];
    u8 unk_16E0[0x130];
    u8 unk_1810[0x404];
    u8 *unk_1C14;
    s32 unk_1C18;
    u8 unk_1C1C[0x404];
    u8 *unk_2020;
    s32 unk_2024, unk_2028;
} T;
void func_0880406C(void *, void *, void *, s32, s32);
void func_08865EE0(void *);
void func_08865F78(void *, s32);
void func_088F232C(void *, s32);
void func_089A56E8(void *);
void func_088AF260(void *, s32);

T *func_089BB7C8(T *arg0, s32 arg1, s32 arg2) {
    f32 *temp;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = 0;
    arg0->unk_09 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = -1;
    arg0->unk_14 = -1;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    func_08865EE0(arg0->unk_30[0]);
    func_08865EE0(arg0->unk_30[1]);
    func_08865EE0(arg0->unk_30[2]);
    func_08865EE0(arg0->unk_30[3]);
    func_08865EE0(arg0->unk_30[4]);
    func_08865EE0(arg0->unk_30[5]);
    func_0880406C(arg0->unk_30[6], func_08865EE0, func_08865F78, 0x90, 10);
    func_088F232C(&arg0->unk_930, 1);
    func_088F232C(&arg0->unk_1000, 1);
    arg0->unk_16D0 = -1;
    func_089A56E8(arg0->unk_16E0);
    arg0->unk_1C14 = (u8 *)(((u32)arg0->unk_1810 & 3) + (u32)arg0 + 0x1810);
    arg0->unk_1C18 = 0;
    arg0->unk_2020 = (u8 *)(((u32)arg0->unk_1C1C & 3) + (u32)arg0 + 0x1C1C);
    arg0->unk_2024 = 0;
    arg0->unk_2028 = 0;
    func_088AF260(&arg0->unk_930, 1);
    arg0->unk_930.unk_04 = 1;
    temp = arg0->unk_930.unk_08;
    arg0->unk_930.unk_18 = 13.3f - temp[0];
    arg0->unk_930.unk_1C = 13.3f - temp[1];
    func_088AF260(&arg0->unk_1000, 1);
    arg0->unk_1000.unk_04 = 0;
    temp = arg0->unk_1000.unk_08;
    arg0->unk_1000.unk_18 = 13.3f - temp[0];
    arg0->unk_1000.unk_1C = 13.3f - temp[1];
    return arg0;
}
