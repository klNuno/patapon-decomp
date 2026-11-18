#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} E_088AB738;

typedef struct {
    u8 pad_00[4];
    E_088AB738 *unk_04;
} T_088AB738;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj_088AB738;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
T_088AB738 *func_088BCF50(s32);

void func_088AB738(Obj_088AB738 *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    E_088AB738 *e;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    e = &func_088BCF50(arg0->unk_10)->unk_04[*a];
    *b = e->unk_00;
    *c = e->unk_04;
    func_08852F00(arg1, 0);
}
