#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    u8 *unk_24;
} B_0895F660;

typedef struct {
    u8 pad_00[0x1C];
    u8 *unk_1C;
    u8 pad_20[0x4];
    B_0895F660 unk_24;
} A_0895F660;

void func_0880416C(void *);
void func_0895F6F4(A_0895F660 *);
void func_0895FC58(B_0895F660 *, s32);
void func_0895FCC8(B_0895F660 *);
extern u8 D_08A47AD4[];
extern u8 D_08A47AE0[];
extern u8 D_08A47AF0[];

A_0895F660 *func_0895F660(A_0895F660 *arg0, s16 arg1) {
    B_0895F660 *p;

    if (arg0 != NULL) {
        arg0->unk_1C = D_08A47AF0;
        p = &arg0->unk_24;
        if (p != NULL) {
            arg0->unk_24.unk_24 = D_08A47AD4;
            func_0895FCC8(p);
            func_0895FC58(&arg0->unk_24, -1);
        }
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A47AE0;
            func_0895F6F4(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
