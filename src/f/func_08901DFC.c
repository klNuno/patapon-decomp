#include "common.h"

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0;
} S;

typedef struct {
    u8 pad_00[0x10];
    S *unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C648C(void *);
void func_088DDF80(u8 *);

void func_08901DFC(T *arg0, void *arg1) {
    u8 temp = *func_0885356C(arg1, 0, 1, 4) != 0;
    ((u8 *)func_088C648C(&arg0->unk_10->unk_506F0))[0x50] = temp;
    func_088DDF80((u8 *)arg0->unk_10);
    func_08852F00(arg1, 0);
}
