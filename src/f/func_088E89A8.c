#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088E89A8;

typedef struct {
    u8 pad_00[0x14];
    W_088E89A8 *unk_14;
} Obj_088E89A8;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08899E18(s32, u32);
s32 func_08894FBC(s32, s32, s32);
void func_08890760(s32);

void func_088E89A8(Obj_088E89A8 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 temp;
    W_088E89A8 *w;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    w = arg0->unk_14;
    if (w != NULL) {
        temp = func_08894FBC(func_08899E18(w->unk_36B10, *b), *a, 0);
        if (temp != 0) {
            func_08890760(temp);
        }
    }
    func_08852F00(arg1, 0);
}
