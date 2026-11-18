#include "common.h"

extern "C" {

s32 func_08808980(void);
s32 func_08808A80(s32 *, s32 *);
u16 func_08808D40(s32 *);
u16 *func_0880A0E8(void *);
s32 func_0880A28C(void *);
s32 func_0880A6B8(s32 *);
void func_0880A7E0(void *, s32);
u16 *func_0880A7F4(void *);

inline bool ne_0880A714(s32 *a, s32 *b) {
    return !(bool)func_08808A80(a, b);
}

s32 func_0880A714(void *arg0, s32 arg1) {
    u16 *temp;
    s32 sp1C;

    if (func_0880A28C(arg0) == 0) {
        return func_08808980();
    }
    temp = func_0880A0E8(arg0);
    if (temp <= func_0880A7F4(arg0)) {
        return func_08808980();
    }
    func_0880A7E0(arg0, -1);
    sp1C = func_08808980();
    if (ne_0880A714(&arg1, &sp1C)) {
        *func_0880A0E8(arg0) = func_08808D40(&arg1);
    }
    return func_0880A6B8(&arg1);
}

}
