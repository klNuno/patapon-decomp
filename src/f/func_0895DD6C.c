#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    char unk_08[0x40];
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
} T;

void func_08822B3C(char *, char *);
extern void func_0895B1D8(void *, s32, T *, s32);

s32 func_0895DD6C(u8 *arg0, char *arg1, s32 arg2, s32 arg3, s32 arg4) {
    T temp;
    temp.unk_00 = 1;
    temp.unk_04 = 1;
    func_08822B3C(temp.unk_08, arg1);
    temp.unk_48 = arg2;
    temp.unk_4C = arg3;
    temp.unk_50 = arg4;
    func_0895B1D8(arg0 + 0x184, 1, &temp, sizeof(temp));
    return 1;
}
