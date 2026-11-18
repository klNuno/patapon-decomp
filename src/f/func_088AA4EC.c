#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
s32 func_0888903C(s32);

void func_088AA4EC(Obj *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    s32 temp = func_0888A5A0(func_088BCF58(arg0->unk_10), *a);

    if (temp == 0) {
        func_08852F00(arg1, 0);
        return;
    }
    *b = func_0888903C(temp);
    func_08852F00(arg1, 0);
}
