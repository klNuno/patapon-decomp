#include "common.h"

extern s32 func_089B22B0(s32);
extern s32 func_089B23BC(s32, s32);
extern void func_089B170C(s32, s32);

void func_0897EF74(s32 arg0, s32 arg1) {
    s32 temp;
    func_089B22B0(arg0 + 0x2780);
    temp = func_089B23BC(arg0 + 0x2780, arg1);
    if (temp >= 0) {
        func_089B170C(arg0 + 0x2954, temp);
    }
}
