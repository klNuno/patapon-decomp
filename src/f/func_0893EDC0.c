#include "common.h"

u32 *func_088147A4(s32 *arg0);
void func_088147E0(u32 *arg0);
void func_08814BB4(s32);
s32 func_08814C0C(s32);
s32 func_0882C250(s32);
void func_0882BCA0(s32, u32 **, s32 *, s32);

void func_0893EDC0(s32 *arg0) {
    s32 sp1C;
    u32 *sp18;

    if (*arg0 != 0) {
        if (func_0882C250(*arg0) > 0) {
            func_08814BB4(9);
        } else {
            func_08814C0C(9);
        }
        func_08814BB4(4);
        sp18 = func_088147A4(&sp1C);
        func_0882BCA0(*arg0, &sp18, &sp1C, 0xFFFF);
        func_088147E0(sp18);
        func_08814C0C(4);
        func_08814C0C(9);
    }
}
