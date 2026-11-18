#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S_14;

typedef struct {
    u8 pad_00[0x14];
    S_14 *unk_14;
} S;

typedef struct {
    u8 pad_00[0x1100];
    f32 unk_1100;
    u8 unk_1104;
} V;

typedef struct {
    u8 pad_00[0x7810];
    V unk_7810;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
T *func_08899E18(s32, s32);

void func_088EB77C(S *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    f32 *c;
    f32 f;
    u8 flag;
    V *v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_14 != NULL) {
        f = *c;
        flag = *b != 0;
        v = &func_08899E18(arg0->unk_14->unk_36B10, *a)->unk_7810;
        v->unk_1104 = flag;
        v->unk_1100 = f;
    }
    func_08852F00(arg1, 0);
}
