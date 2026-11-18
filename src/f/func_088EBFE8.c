#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088EBFE8;

typedef struct {
    u8 pad_00[0x14];
    W_088EBFE8 *unk_14;
} Obj_088EBFE8;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08899E18(s32, s32);
void func_0889DA40(u8 *, s32, s32, s32);

void func_088EBFE8(Obj_088EBFE8 *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    s32 *c = func_0885356C(arg1, 2, 1, 4);
    s32 *d = func_0885356C(arg1, 3, 1, 4);

    if (arg0->unk_14 != NULL) {
        if (*a == 0 || *a == 1U) {
            func_0889DA40(func_08899E18(arg0->unk_14->unk_36B10, *a) + 0x8100, *b, *c != 0, *d != 0);
        }
    }
    func_08852F00(arg1, 0);
}
