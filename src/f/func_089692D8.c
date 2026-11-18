#include "common.h"

void func_0880416C(void *);
void func_089676CC(void *, s32);
void func_089693C8(void *);
extern u8 D_08A47DF4[];
extern u8 D_08A47E10[];
extern u8 D_08A47E28[];
extern u8 D_08A47E38[];
extern u8 D_08A47E84[];

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
} T089692D8;

T089692D8 *func_089692D8(T089692D8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47DF4;
        arg0->unk_58 = D_08A47E10;
        arg0->unk_7C = D_08A47E28;
        arg0->unk_CC = D_08A47E38;
        arg0->unk_370 = D_08A47E84;
        func_089693C8(arg0);
        func_089676CC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
