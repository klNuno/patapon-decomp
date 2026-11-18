#include "common.h"

typedef struct {
    f32 unk_00;
    s32 unk_04;
} E_088AB6A8;

typedef struct {
    u8 pad_00[4];
    E_088AB6A8 *unk_04;
} T_088AB6A8;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj_088AB6A8;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
T_088AB6A8 *func_088BCF50(s32);

void func_088AB6A8(Obj_088AB6A8 *arg0, void *arg1) {
    s32 *a;
    f32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    *b = func_088BCF50(arg0->unk_10)->unk_04[*a].unk_00;
    func_08852F00(arg1, 0);
}
