#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj_088AA620;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08889044(s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

void func_088AA620(Obj_088AA620 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 temp;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    if ((temp = func_0888A5A0(func_088BCF58(arg0->unk_10), *a)) == 0) {
        func_08852F00(arg1, 0);
        return;
    }
    func_08889044(temp, *b == 1);
    func_08852F00(arg1, 0);
}
