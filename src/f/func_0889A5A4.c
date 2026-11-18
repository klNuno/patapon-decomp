#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    void *unk_18;
} S8_089A60FC;

typedef struct {
    u8 pad_00[0x104];
    u8 unk_104[0xC];
    S8_089A60FC unk_110;
    S8_089A60FC unk_12C;
    u8 unk_148[0xA4];
    u8 unk_1EC[0x580];
    u8 unk_76C[4];
} Obj_0889A5A4;

void func_0880416C(void *);
void func_08810258(void *, s32);
void func_0885DE4C(S8_089A60FC *);
void func_088857D0(void *, s32);
void func_0889B528(void *, s32);
void func_088A3FE4(void *, s32);
extern u8 D_08A44AD8[];

Obj_0889A5A4 *func_0889A5A4(Obj_0889A5A4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088857D0(arg0->unk_76C, -1);
        func_088A3FE4(arg0->unk_1EC, -1);
        func_0889B528(arg0->unk_148, -1);
        if (&arg0->unk_12C != NULL) {
            arg0->unk_12C.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_12C);
            arg0->unk_12C.unk_0C = 0;
            arg0->unk_12C.unk_14 = 0;
        }
        if (&arg0->unk_110 != NULL) {
            arg0->unk_110.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_110);
            arg0->unk_110.unk_0C = 0;
            arg0->unk_110.unk_14 = 0;
        }
        func_08810258(arg0->unk_104, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
