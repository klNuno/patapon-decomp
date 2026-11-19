#include "common.h"

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0;
} T;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
void func_088F8418(s32, s32);

void func_088FF990(S *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 temp2 = func_088C6464(&arg0->unk_10->unk_506F0);
    func_088F8418(temp2, *temp);
    func_08852F00(arg1, 0);
}
