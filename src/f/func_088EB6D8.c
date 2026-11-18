#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x92F0];
    f32 unk_92F0;
} R;

R *func_08899E18(s32, s32);

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} U;

typedef struct {
    u8 pad_00[0x14];
    U *unk_14;
} T;

void func_088EB6D8(T *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    f32 *b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        f32 f = *b;
        func_08899E18(arg0->unk_14->unk_36B10, *a)->unk_92F0 = f;
    }
    func_08852F00(arg1, 0);
}
