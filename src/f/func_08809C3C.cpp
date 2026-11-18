#include "common.h"

extern "C" {

u8 func_08809928(void *);
s32 func_08809734(void *);
s32 func_0880C3F0(void *);
void func_08809C10(void *, s32, s32, s32);
s32 func_0880975C(void *);
void func_0880BF94(void *);
s8 *func_0880977C(void *);
void func_08809D58(void *, s32);
s32 func_0880CDE8(void *);
s32 func_0880AD60(s32 *);
s8 func_0880AD9C(s32 *);
s32 func_0880ADA4(s32 *, s32 *);
s32 func_0880ADB8(void);

inline bool func_08809C3C_0(s32 *a, s32 *b) { return !(bool)func_0880ADA4(a, b); }

s32 func_08809C3C(void *arg0, s32 arg1) {
    s32 eof;

    if (!func_08809928(arg0)) {
        return func_0880ADB8();
    }
    if (func_08809734(arg0)) {
        if (func_0880C3F0(arg0) < 0) {
            return func_0880ADB8();
        }
        func_08809C10(arg0, 0, 0, 0);
    }
    if (!func_0880975C(arg0)) {
        func_0880BF94(arg0);
    }
    eof = func_0880ADB8();
    if (func_08809C3C_0(&arg1, &eof)) {
        *func_0880977C(arg0) = func_0880AD9C(&arg1);
        func_08809D58(arg0, 1);
    }
    if (func_0880CDE8(arg0) < 0) {
        return func_0880ADB8();
    }
    return func_0880AD60(&arg1);
}

}
