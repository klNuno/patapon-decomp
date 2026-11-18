#include "common.h"

typedef struct B_088EB9EC {
    u8 pad_00[0x36B18];
    u8 *unk_36B18;
} B_088EB9EC;

typedef struct T_088EB9EC {
    u8 pad_00[0x14];
    B_088EB9EC *unk_14;
} T_088EB9EC;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_088EB9EC(T_088EB9EC *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 0, 4);
    (*(s32 **)(arg0->unk_14->unk_36B18 + *a * 0x8C + 0x44C))[*b] = *c;
    func_08852F00(arg1, 0);
}
