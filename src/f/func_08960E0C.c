#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_08960438;

typedef struct {
    u8 pad_00[0x120];
    s32 unk_120;
    u8 pad_124[0x40];
    u8 unk_164[0x10];
} T08960E0C;

void func_0895F2B4(T_08960438 *, s32);
void func_0896050C(T_08960438 *, void *);
char *func_08960E70(char *, s32, s32);

void func_08960E0C(T08960E0C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    T_08960438 temp;

    func_08960E70((char *)&temp, arg1, arg2);
    func_0896050C(&temp, arg0->unk_164);
    func_0895F2B4(&temp, -1);
    if (arg3 != 0) {
        arg0->unk_120 = arg1;
    }
}
