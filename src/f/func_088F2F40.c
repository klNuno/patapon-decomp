#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_088F2F40;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 unk_08[0x10];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[8];
    u8 unk_28;
    u8 pad_29[7];
    u8 unk_30[2][0x90];
    u8 pad_150[0];
} S_088F2F40;

void func_08866028(void *);
void func_0887432C(T_088F2F40 *, s32);
void func_088844EC(T_088F2F40 *);
void func_088E46C8(T_088F2F40 *, s32);
void func_088F2FE4(T_088F2F40 *, void *);
void func_088F3028(T_088F2F40 *, void *);
void func_088F306C(T_088F2F40 *);

void func_088F2F40(S_088F2F40 *arg0) {
    T_088F2F40 sp20;
    T_088F2F40 sp10;
    u32 i;

    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_04 = 0;
    arg0->unk_28 = 0;
    func_088F306C(&sp20);
    func_088F3028(&sp20, arg0->unk_08);
    func_088E46C8(&sp20, -1);
    for (i = 0; i < 2; i++) {
        func_08866028(arg0->unk_30[i]);
        func_088844EC(&sp10);
        func_088F2FE4(&sp10, (u8 *)arg0 + 0x150 + i * 0x10);
        func_0887432C(&sp10, -1);
    }
}
