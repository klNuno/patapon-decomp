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
    u8 unk_12C[0x14C];
    S8_089A60FC unk_278;
    u8 pad_294[0xC];
    u8 unk_2A0[4];
} Obj_088AC398;

void func_0880416C(void *);
void func_08810258(void *, s32);
void func_0885DE4C(S8_089A60FC *);
void func_088857D0(void *, s32);
void func_088AF070(void *, s32);
extern u8 D_08A44AD8[];

Obj_088AC398 *func_088AC398(Obj_088AC398 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088AF070(arg0->unk_2A0, -1);
        if (&arg0->unk_278 != NULL) {
            arg0->unk_278.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_278);
            arg0->unk_278.unk_0C = 0;
            arg0->unk_278.unk_14 = 0;
        }
        func_088857D0(arg0->unk_12C, -1);
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
