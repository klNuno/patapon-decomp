#include "common.h"

typedef struct Unk_088EC3A4_B {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} Unk_088EC3A4_B;

typedef struct Unk_088EC3A4 {
    u8 pad_00[0x14];
    Unk_088EC3A4_B *unk_14;
} Unk_088EC3A4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08895BE4(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088EC3A4(Unk_088EC3A4 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 temp;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_14 != NULL) {
        if ((temp = func_08899E18(arg0->unk_14->unk_36B10, *a)) != 0) {
            func_08895BE4(temp, *b, *c);
        }
    }
    func_08852F00(arg1, 0);
}
