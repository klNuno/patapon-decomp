#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} Sub;

typedef struct {
    u8 pad_00[0x10];
    Sub *unk_10;
} Obj;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6484(void *);
s32 func_088BCF70(s32);
void func_088CF594(s32, s32, s32);

void func_08902758(Obj *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 result = func_088BCF70(func_088C6484(arg0->unk_10->unk_506F0));
    func_088CF594(result, *temp, 0);
    func_08852F00(arg1, 0);
}
}
