#include "common.h"

extern s8 D_08A493D8[];
extern u8 D_08A493DC[];
extern u8 D_08A493E8[];
void func_08806CC0(void);
void func_08806D00(u8 *);
void func_08804690(u8 *, void (*)(void), u8 *);

u8 *func_08806C60(void) {
    if (D_08A493D8[0] == 0) {
        func_08806D00(D_08A493E8);
        func_08804690(D_08A493E8, func_08806CC0, D_08A493DC);
        D_08A493D8[0] = 1;
    }
    return D_08A493E8;
}
