#include "common.h"

extern "C" {

s32 func_08808980(void);
s32 func_08808A80(s32 *, s32 *);
u16 func_08808D40(s32 *);
s32 func_0880A0C8(void *);
s32 func_0880A0F0(void *);
u16 *func_0880A110(void *);
s32 func_0880A28C(void *);
void func_0880A58C(void *, s32, s32, s32);
s32 func_0880A6B8(s32 *);
void func_0880A700(void *, s32);
void func_0880B728(void *);
s32 func_0880BC30(void *);
s32 func_0880D0F0(void *);

inline bool ne_0880A59C(s32 *a, s32 *b) {
    return !(bool)func_08808A80(a, b);
}

s32 func_0880A59C(void *arg0, s32 arg1) {
    s32 sp1C;

    if (func_0880A28C(arg0) == 0) {
        return func_08808980();
    }
    if (func_0880A0C8(arg0) != 0) {
        if (func_0880BC30(arg0) < 0) {
            return func_08808980();
        }
        func_0880A58C(arg0, 0, 0, 0);
    }
    if (func_0880A0F0(arg0) == 0) {
        func_0880B728(arg0);
    }
    sp1C = func_08808980();
    if (ne_0880A59C(&arg1, &sp1C)) {
        *func_0880A110(arg0) = func_08808D40(&arg1);
        func_0880A700(arg0, 1);
    }
    if (func_0880D0F0(arg0) < 0) {
        return func_08808980();
    }
    return func_0880A6B8(&arg1);
}

}
