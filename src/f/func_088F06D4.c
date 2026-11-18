#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} Obj_088F06D4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
Obj_088F06D4 *func_0892E80C(void *, s32);
s32 func_0892E940(void *);
extern void *D_08AD8DD8[];

void func_088F06D4(void *arg0, void *arg1) {
    s32 *temp;
    void *temp2;
    Obj_088F06D4 *temp3;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
    *temp = func_0892E940(temp2);
    temp2 = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
    temp3 = func_0892E80C(temp2, *temp);
    temp3->unk_8D0 = 1;
    func_08852F00(arg1, 0);
}
