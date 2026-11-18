#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u32 unk_10;
    u8 *unk_14;
} S_088EA2C0;

void func_08852C5C(void *, s32, s32);
void func_08852D00(void *);
void func_08852F00(void *, s32);
void func_0885303C(void *, s32, s32);
s32 func_08852FB4(void *);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08895BC4(s32, s32);
s32 func_08899E18(s32, s32);
s32 func_0893F2BC(s32, s32);
u32 func_0893F2F4(s32);

void func_088EA2C0(S_088EA2C0 *arg0, void *arg1) {
    s32 a;
    s32 b;
    s32 c;
    s32 *d;
    s32 l;
    u32 i;

    a = *func_0885356C(arg1, 0, 1, 4);
    b = *func_0885356C(arg1, 1, 1, 4);
    c = *func_0885356C(arg1, 2, 0, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    func_08852F00(arg1, 0);
    l = func_08895BC4(func_08899E18(*(s32 *)(arg0->unk_14 + 0x36B10), 1), a);
    if (b < 0) {
        for (i = 0; i < func_0893F2F4(l); i++) {
            *d = func_0893F2BC(l, i);
            func_08852D00(arg1);
            func_08852C5C(arg1, c, 0);
            func_0885303C(arg1, 0xA0, 1);
            if (func_08852FB4(arg1) != 0) {
                arg0->unk_10 |= 1;
            } else {
                arg0->unk_10 |= 0x10;
            }
        }
        if (!(arg0->unk_10 & 0x10)) {
            arg0->unk_10 |= 0x100;
        } else if (!(arg0->unk_10 & 1)) {
            arg0->unk_10 |= 0x1000;
        }
    } else {
        *d = func_0893F2BC(l, b);
        func_08852D00(arg1);
        func_08852C5C(arg1, c, 0);
        func_0885303C(arg1, 0xA0, 1);
        if (func_08852FB4(arg1) != 0) {
            arg0->unk_10 = 0x101;
        } else {
            arg0->unk_10 = 0x1010;
        }
    }
}
