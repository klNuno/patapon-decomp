#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_08960438;

void func_0895F4E8(T_08960438 *, s32);
void func_08960620(T_08960438 *, void *);
char *func_08960CE0(char *arg0, s32 arg1, s32 arg2);

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x1C];
    u8 unk_134[0x10];
} T;

void func_08960C7C(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    T_08960438 temp;

    func_08960CE0((char *)&temp, arg1, arg2);
    func_08960620(&temp, arg0->unk_134);
    func_0895F4E8(&temp, -1);
    if (arg3 != 0) {
        arg0->unk_114 = arg1;
    }
}
