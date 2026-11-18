#include "common.h"

typedef struct {
    u8 pad_00[0x90];
} E_088E5458;

typedef struct {
    u8 pad_00[0x40];
} M_088E5458;

s32 func_088E557C(void *, s32);
void func_088664DC(M_088E5458 *, void *, s32);
s32 func_08866B80(M_088E5458 *, s32);
void func_08866B54(void *, s32, s32);

void func_088E5458(u8 *arg0, s32 arg1, void *arg2) {
    M_088E5458 m;
    s32 i;

    i = *(s32 *)(arg0 + 0x2AC);
    func_088664DC(&m, arg0 + i * 0x90 + 0xF0, func_088E557C(arg0, arg1));
    func_08866B54(arg2, 0, func_08866B80(&m, 0));
    func_08866B54(arg2, 1, func_08866B80(&m, 1));
    func_08866B54(arg2, 2, func_08866B80(&m, 2));
    func_08866B54(arg2, 3, func_08866B80(&m, 3));
}
