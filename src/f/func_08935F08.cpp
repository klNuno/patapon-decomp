#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089421BC(void *, s32, s32, s32, s32, s32, s32);

typedef struct {
    u8 pad_00[0x1B0];
    u8 unk_1B0;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} S;

void func_08935F08(S *arg0, void *arg1) {
    void *temp = arg1;
    S *obj = arg0;
    s32 *p = func_0885356C(temp, 0, 0, 4);
    T *q = obj->unk_14;
    if (q != NULL) {
        s32 value = *p;
        func_089421BC(&q->unk_1B0, 6, value, 0, 0, 1, 0);
    }
    func_08852F00(temp, 0);
}
}
