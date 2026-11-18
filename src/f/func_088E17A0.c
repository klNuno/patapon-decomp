#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T58;

typedef struct {
    u8 pad_00[0x58];
    T58 *unk_58;
    u8 pad_5C[0x4];
} E;

typedef struct {
    u8 pad_00[0xC008];
    E *unk_C008;
} T;

void func_08813E98(s32);
void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_088157E8(s32, s32);
void func_08815814(s32, s32);
s32 func_088CB0F8(s32, s32, s32);

void func_088E17A0(T *arg0, s32 arg1, s32 arg2) {
    if (arg1 < 0) {
        func_08814C0C(9);
        return;
    }
    func_08814BB4(9);
    func_08815814(0, 1);
    func_088157E8(7, 1);
    func_08813E98(func_088CB0F8(((E *)((u8 *)arg0->unk_C008 + arg1 * 0x60))->unk_58->unk_10, 0, arg2));
}
