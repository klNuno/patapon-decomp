#include "common.h"

extern "C" {
typedef struct Obj2_089991B0 {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} Obj2_089991B0;

typedef struct {
    u8 pad_00[0x18];
    Obj2_089991B0 *unk_18;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
Obj2_089991B0 *func_0892E894(void *);
void func_088D46FC(Obj2_089991B0 *, f32, f32, f32, f32);
void func_0892DFB4(Obj2_089991B0 *, s32);
extern void *D_08AD8DD8[];

void func_088EEBA0(T *arg0, void *arg1) {
    Obj2_089991B0 *temp;
    func_0885356C(arg1, 0, 1, 4);
    temp = func_0892E894(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL);
    arg0->unk_18 = temp;
    temp->unk_8D0 = 1;
    func_088D46FC(arg0->unk_18, 1.0f, 1.0f, 1.0f, 1.0f);
    func_0892DFB4(arg0->unk_18, 1);
    func_08852F00(arg1, 0);
}
}
