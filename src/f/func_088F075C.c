#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} Obj_088F06D4;

extern void *D_08AD8DD8[];
s32 *func_0885356C(void *, s32, s32, s32);
Obj_088F06D4 *func_0892E80C(void *, s32);
void func_08852F00(void *, s32);

void func_088F075C(void *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    void *p = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
    Obj_088F06D4 *q = func_0892E80C(p, *temp);

    q->unk_8D0 = 0;
    func_08852F00(arg1, 0);
}
