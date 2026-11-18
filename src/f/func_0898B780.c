#include "common.h"

typedef struct Unk_0898B780 {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x10];
    u8 unk_1C[8];
    u8 unk_24[4];
} Unk_0898B780;

void func_0880416C(void *);
void func_089458C8(void *, s32);
void func_08980154(Unk_0898B780 *, s32);
void func_0898C0C4(void *, s32);
extern u8 D_08A483EC[];
extern u8 D_08A48298[];

Unk_0898B780 *func_0898B780(Unk_0898B780 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A483EC;
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A48298;
            func_0898C0C4(arg0->unk_24, -1);
            func_089458C8(arg0->unk_1C, -1);
            func_08980154(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
