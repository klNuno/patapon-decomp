#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W088EC470;

typedef struct {
    u8 pad_00[0x14];
    W088EC470 *unk_14;
} T088EC470;

typedef struct {
    u8 pad_00[0x14CF];
    u8 unk_14CF;
} R088EC470;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
R088EC470 *func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088EC470(T088EC470 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    R088EC470 *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_14 != NULL) {
        r = func_08894FBC(func_08899E18(arg0->unk_14->unk_36B10, *a), *b, 0);
        if (r != NULL) {
            r->unk_14CF = *c != 0;
        }
    }
    func_08852F00(arg1, 0);
}
