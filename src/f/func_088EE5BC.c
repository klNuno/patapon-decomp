#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x50];
    s32 unk_58;
} D_088EE5BC_C;

typedef struct {
    u8 pad_00[0xDA0];
    D_088EE5BC_C *unk_DA0;
} D_088EE5BC_B;

typedef struct {
    u8 pad_00[0x14];
    D_088EE5BC_B *unk_14;
} D_088EE5BC_A;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888F98C(char *arg0);

void func_088EE5BC(D_088EE5BC_A *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    D_088EE5BC_C *p;

    func_0885356C(arg1, 0, 1, 4);
    a = func_0885356C(arg1, 1, 1, 4);
    b = func_0885356C(arg1, 2, 1, 4);
    c = func_0885356C(arg1, 3, 1, 4);
    *a = func_0888F98C((char *)arg0->unk_14) != 0;
    *b = -1;
    *c = 0;
    p = arg0->unk_14->unk_DA0;
    if (p != NULL) {
        *b = p->unk_04;
        *c = p->unk_58;
    }
    func_08852F00(arg1, 0);
}
