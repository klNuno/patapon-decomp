#include "common.h"

void func_0880416C(void *);
s32 func_089458C8(s32, s16);
void func_08980154(void *, s32);
s32 func_0898C0C4(s32, s16);
extern u8 D_08A48298[];

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x10];
    u8 unk_1C[8];
    u8 unk_24;
} S;

void *func_08987048(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48298;
        func_0898C0C4((s32)&arg0->unk_24, -1);
        func_089458C8((s32)arg0->unk_1C, -1);
        func_08980154(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
