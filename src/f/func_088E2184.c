#include "common.h"

void func_088E1964(s32 *, void *);
void func_088E195C(s32 *, void *);
void func_088E19E4(s32 *, void *, s32, s32);

void func_088E2184(u8 *arg0) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;

    func_088E1964(&sp18, arg0 + 0x2024);
    func_088E195C(&sp14, arg0 + 0x2024);
    func_088E19E4(&sp1C, arg0 + 0x2024, sp18, sp14);
}
