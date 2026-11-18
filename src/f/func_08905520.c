#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    char unk_30[0x506C0];
    u8 unk_506F0[0x61AFC];
    s32 unk_B21EC;
    u8 unk_B21F0[4];
} T_08905520;

typedef struct {
    u8 pad_00[0x10];
    T_08905520 *unk_10;
    u8 pad_14[0x14];
    u32 unk_28;
    s32 unk_2C;
} S_08905520;

typedef struct {
    u8 pad_00[0x10850];
    u8 unk_10850;
} C_08905520;

typedef struct {
    u8 pad_00[0x42820];
    void *unk_42820;
} G_08905520;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08876B88(void *);
s32 func_088C6464(void *);
void func_088DDFA0(s32, u32);
s32 func_088DE128(s32);
void func_088DE490(void *);
void func_089139A4(void *, s32, void *, s32);
s32 func_08913AE0(char *);
void func_0892E9D4(void *, s32);
void func_08997830(void *);
s32 func_08997A68(void *);
s32 func_089985E4(void *);
void func_089985EC(void *, s32 *);
extern void *D_08AD1E28[];
extern f32 D_08AD83F0[];
extern void *D_08AD8DD8[];

void func_08905520(S_08905520 *arg0, void *arg1) {
    s32 n = func_08852EB8(arg1);
    switch (n) {
    case 0:
        func_089985EC(arg0->unk_10->unk_B21F0, func_0885356C(arg1, 0, 1, 4));
        D_08AD83F0[0] = 0.5f;
        func_089139A4(arg0->unk_10->unk_30, 0, D_08AD83F0, 1);
        func_08852EDC(arg1, n + 1);
        arg0->unk_28 = 3;
        arg0->unk_2C = func_088DE128((s32)arg0->unk_10);
        break;
    case 1:
        if (func_08913AE0(arg0->unk_10->unk_30) != 0) {
            func_08852EDC(arg1, n + 1);
            if (arg0->unk_10->unk_B21EC != 0) {
                func_088DE490(arg0->unk_10);
            }
            func_088DDFA0((s32)arg0->unk_10, 3);
            func_0892E9D4(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, 0);
            ((C_08905520 *)func_088C6464(arg0->unk_10->unk_506F0))->unk_10850 = 0;
        }
        break;
    case 2:
        if (func_08997A68(arg0->unk_10->unk_B21F0) != 0) {
            func_08852EDC(arg1, n + 1);
        }
        break;
    case 3:
        D_08AD83F0[0] = 0.5f;
        func_089139A4(arg0->unk_10->unk_30, 1, D_08AD83F0, 1);
        func_08852EDC(arg1, n + 1);
        break;
    case 4:
        if (func_08913AE0(arg0->unk_10->unk_30) != 0) {
            func_08852EDC(arg1, n + 1);
        }
        break;
    case 5:
        switch (func_089985E4(arg0->unk_10->unk_B21F0)) {
        case 3:
            D_08AD83F0[0] = 0.5f;
            func_089139A4(arg0->unk_10->unk_30, 0, D_08AD83F0, 1);
            func_08852EDC(arg1, 0x12);
            arg0->unk_2C = 1;
            arg0->unk_28 = 1;
            func_08876B88(((G_08905520 *)(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL))->unk_42820);
            break;
        case 5:
            D_08AD83F0[0] = 0.5f;
            func_089139A4(arg0->unk_10->unk_30, 0, D_08AD83F0, 1);
            func_08852EDC(arg1, 0x12);
            arg0->unk_2C = 1;
            arg0->unk_28 = 1;
            break;
        }
        break;
    case 0x12:
        if (func_08913AE0(arg0->unk_10->unk_30) != 0) {
            func_08997830(arg0->unk_10->unk_B21F0);
            func_0892E9D4(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, 1);
            {
                C_08905520 *c = (C_08905520 *)func_088C6464(arg0->unk_10->unk_506F0);
                s32 t;
                c->unk_10850 = 1;
                t = *(volatile s32 *)&arg0->unk_10;
                func_088DDFA0(t, *(volatile u32 *)&arg0->unk_28);
            }
            func_08852EDC(arg1, 0x13);
        }
        break;
    case 0x13:
        func_08852F00(arg1, 0);
        break;
    }
}
