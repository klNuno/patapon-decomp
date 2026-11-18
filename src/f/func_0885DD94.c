#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[0x3];
    s32 unk_0C;
} T;

extern char D_089F8A60[];
s32 func_0885E020(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0885E06C(s32 arg0, s32 arg1, char *arg2, s32 arg3);

s32 func_0885DD94(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0->unk_08 != 0) {
        if (arg0->unk_0C == 0) {
            return 0;
        }
        if (arg0->unk_00 != 0) {
            func_0885E06C(arg0->unk_0C, arg0->unk_00, D_089F8A60, 0x24);
        }
        arg0->unk_00 = 0;
    }
    if (arg1 <= 0) {
        return 0;
    }
    arg0->unk_00 = func_0885E020(arg0->unk_0C, arg1, 0x40, arg2, arg3);
    if (arg0->unk_00 != 0) {
        arg0->unk_04 = arg1;
        arg0->unk_08 = 1;
    }
    return arg0->unk_00;
}
