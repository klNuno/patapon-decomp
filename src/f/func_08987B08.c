#include "common.h"

typedef struct Unk_08987B08 {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x10];
    u8 unk_1C[8];
    u8 unk_24[4];
} Unk_08987B08;

void func_0880416C(void *);
void func_089458C8(void *, s32);
void func_08980154(Unk_08987B08 *, s32);
void func_0898C0C4(void *, s32);
extern u8 D_08A48234[];
extern u8 D_08A48298[];

Unk_08987B08 *func_08987B08(Unk_08987B08 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48234;
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
