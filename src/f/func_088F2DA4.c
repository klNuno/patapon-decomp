#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0x8];
    f32 unk_20;
    f32 unk_24;
    u8 pad_28[0x8];
    u8 unk_30[0x150 - 0x30];
    u8 unk_150[0x20];
} S_088F2DA4;

void func_0880406C(void *, void *, void *, s32, s32);
void func_08865EE0(void *);
void func_08865F78(void *, s32);
char *func_088844EC(char *);
void func_0887432C(void *, s32);
void func_088F2F40(S_088F2DA4 *);

S_088F2DA4 *func_088F2DA4(S_088F2DA4 *arg0, s32 arg1) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_20 = 700000.0f;
    arg0->unk_24 = -700000.0f;
    func_0880406C(arg0->unk_30, func_08865EE0, func_08865F78, 0x90, 2);
    func_0880406C(arg0->unk_150, func_088844EC, func_0887432C, 0x10, 2);
    func_088F2F40(arg0);
    return arg0;
}
