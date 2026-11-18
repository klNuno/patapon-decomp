#include "common.h"

extern "C" {

s8 *func_08809754(void *);
u8 func_08809928(void *);
void func_08809E34(void *, s32);
s8 *func_08809E44(void *);
s32 func_0880AD60(s32 *);
s8 func_0880AD9C(s32 *);
s32 func_0880ADA4(s32 *, s32 *);
s32 func_0880ADB8(void);

inline bool func_08809D68_0(s32 *a, s32 *b) { return !(bool)func_0880ADA4(a, b); }

s32 func_08809D68(void *arg0, s32 arg1) {
    s8 *temp;
    s32 eof;

    if (!func_08809928(arg0)) {
        return func_0880ADB8();
    }
    temp = func_08809754(arg0);
    if (temp <= func_08809E44(arg0)) {
        return func_0880ADB8();
    }
    func_08809E34(arg0, -1);
    eof = func_0880ADB8();
    if (func_08809D68_0(&arg1, &eof)) {
        *func_08809754(arg0) = func_0880AD9C(&arg1);
    }
    return func_0880AD60(&arg1);
}

}
