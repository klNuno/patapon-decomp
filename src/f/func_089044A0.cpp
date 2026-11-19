#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
f32 func_08990B14(char *);

typedef struct {
    u8 pad_00[0x506D0];
    char unk_506D0;
} T;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} S;

void func_089044A0(S *arg0, void *arg1) {
    void *temp = arg1;
    S *obj = arg0;
    f32 *out = (f32 *)func_0885356C(temp, 0, 1, 4);
    *out = func_08990B14(&obj->unk_10->unk_506D0);
    func_08852F00(temp, 0);
}
}
