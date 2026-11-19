#include "common.h"
extern "C" {
extern u8 D_08A493E8[];
void func_08806D08(void *);
void func_08806D54(void (*)(void *), void *);
void func_08806C60(void);

void func_08806D24(void) {
    func_08806D54(func_08806D08, D_08A493E8 + 1);
    func_08806C60();
}
}
