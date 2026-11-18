#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} A_08806860;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} B_08806860;

typedef struct {
    s8 unk_00;
} C_08806860;

void *func_08804338(s32);
void func_088068F4(A_08806860 *, s32, s32);
void func_088068FC(B_08806860 *);
void func_0880693C(void *, s32, C_08806860 *);
void func_08806A3C(B_08806860 *, s32, C_08806860 *);
void func_08806AF8(B_08806860 *, s32);

A_08806860 *func_08806860(A_08806860 *arg0, s32 arg1, C_08806860 arg2) {
    B_08806860 sp18;
    void *temp;

    arg0->unk_00 = arg1;
    func_08806A3C(&sp18, arg1, &arg2);
    if ((temp = func_08804338(0x10)) != NULL) {
        func_0880693C(temp, arg1, &arg2);
    }
    arg0->unk_04 = (s32)temp;
    func_088068FC(&sp18);
    func_088068F4(arg0, arg1, arg1);
    func_08806AF8(&sp18, -1);
    return arg0;
}
