#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} Unk1;

typedef struct {
    u8 pad_00[0x14];
    Unk1 *unk_14;
} Unk;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0888FF98(s32, s32, f32);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088E7B10(Unk *arg0, void *arg1)
{
    s32 *a;
    f32 *b;
    Unk1 *p;
    s32 temp;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    p = arg0->unk_14;
    if (p != NULL) {
        temp = func_08894FBC(func_08899E18(p->unk_36B10, 1), *a, 1);
        if (temp != 0) {
            func_0888FF98(temp, 1, *b);
        }
    }
    func_08852F00(arg1, 0);
}
