#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L_0888BBE8;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0xC];
    s32 unk_1C[16];
    u8 unk_5C[16][0x20];
    L_0888BBE8 unk_25C;
    L_0888BBE8 unk_284;
} S_0888BBE8;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0888C270(void *);
void func_0888C260(void *);
void func_0888C140(void *);
void func_0888BDAC(void *);
void func_0888BDA4(void *, s32 *);
void func_0888BD4C(void *, void *);
void func_0888CA58(void *, s32);
extern u8 D_08A45580[];
extern u8 D_08A45574[];
extern u8 D_08A449F4[];

S_0888BBE8 *func_0888BBE8(S_0888BBE8 *arg0, s16 arg1) {
    s32 i;
    u8 *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A45580;
        func_0888C270(&arg0->unk_284);
        func_0888C270(&arg0->unk_25C);
        func_0888C260(arg0->unk_10);
        func_0888C140(&arg0->unk_25C);
        func_0888C140(&arg0->unk_284);
        for (i = 0; i < 16; i++) {
            e = arg0->unk_5C[i];
            func_0888BDAC(e);
            func_0888BDA4(e, &arg0->unk_1C[i]);
            func_0888BD4C(&arg0->unk_284, e);
        }
        func_0888C270(&arg0->unk_284);
        if (&arg0->unk_284 != NULL) {
            arg0->unk_284.unk_24 = D_08A45574;
            func_0888C140(&arg0->unk_284);
            func_0888CA58(&arg0->unk_284, -1);
        }
        if (&arg0->unk_25C != NULL) {
            arg0->unk_25C.unk_24 = D_08A45574;
            func_0888C140(&arg0->unk_25C);
            func_0888CA58(&arg0->unk_25C, -1);
        }
        func_08804000(arg0->unk_5C, func_0888CA58, 0x20, 0x10);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
