#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x10];
    u8 unk_1C[8];
    u8 unk_24[4];
} Struct_089896B8;

extern u8 D_08A48298[];
extern u8 D_08A482F8[];

void func_0880416C(void *);
void func_089458C8(void *, s32);
void func_08980154(void *, s32);
void func_0898C0C4(void *, s32);

Struct_089896B8 *func_089896B8(Struct_089896B8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A482F8;
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
