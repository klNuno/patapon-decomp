#include "common.h"

extern s8 D_08A88178[];
extern u8 *D_08A88154[];
extern u8 D_08A8817C[];
extern u8 D_08A88188[];

extern void func_08860AE0(u8 *, s32, s32);
extern void func_0886135C(void);
void func_08804690(u8 *, void (*)(void), u8 *);

void func_088608F0(s32 arg0)
{
    if (D_08A88178[0] == 0) {
        func_08860AE0(D_08A88188, arg0, 0x40);
        func_08804690(D_08A88188, func_0886135C, D_08A8817C);
        D_08A88178[0] = 1;
    }
    D_08A88154[0] = D_08A88188;
}
