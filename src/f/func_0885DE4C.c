#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
} T;

extern char D_089F8A60[];
void func_0885E06C(s32 arg0, s32 arg1, char *arg2, s32 arg3);

s32 func_0885DE4C(T *arg0)
{
    if (arg0->unk_08 != 0) {
        s32 temp = arg0->unk_0C;
        s32 temp1;

        if (temp == 0 && arg0->unk_00 != 0) {
            return 0;
        }
        temp1 = *(volatile s32 *)&arg0->unk_00;
        if (temp1 != 0) {
            func_0885E06C(temp, temp1, D_089F8A60, 0x4C);
            *(volatile s32 *)&arg0->unk_00 = 0;
        } else {
            *(volatile s32 *)&arg0->unk_00 = 0;
        }
        arg0->unk_08 = 0;
    }
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_10 = 0;
    return 1;
}
