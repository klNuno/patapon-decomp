#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
typedef struct {
    s32 unk_00;
} Obj_0891A7B0;

s32 func_0891A7B0(Obj_0891A7B0 *);
s32 func_0891C1BC(s32);

typedef struct {
    u8 pad_00[0x55428];
    s32 unk_55428;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} S;

void func_088EAEC0(S *arg0, void *arg1) {
    void *temp = arg1;
    S *obj = arg0;
    s32 *out = func_0885356C(temp, 0, 1, 4);
    *out = func_0891A7B0((Obj_0891A7B0 *)func_0891C1BC(obj->unk_14->unk_55428));
    func_08852F00(temp, 0);
}
}
