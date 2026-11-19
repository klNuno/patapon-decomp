#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    u8 pad_00[0x30];
    char unk_30[0x28610 - 0x30];
    u8 unk_28610;
    u8 pad_28611[0x2E3C0 - 0x28611];
    u8 unk_2E3C0[0x50560 - 0x2E3C0];
    u8 unk_50560[0x190];
    u8 unk_506F0[0x1212D0 - 0x506F0];
    char unk_1212D0[1];
} T;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
    u8 pad_14[0x2C];
    V2 unk_40;
} S;

typedef struct {
    u8 pad_00[0x50];
    u8 unk_50;
} R;

typedef struct U U;

s32 func_08852BA8(void *);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
void func_088792C0(s32, f32);
s32 func_088C648C(void *);
void func_088DDF80(u8 *);
void func_088DDFA0(u8 *, u32);
V2 *func_088F32E0(void *);
void func_088F333C(void *, V2 *);
void func_089139A4(void *, s32, void *, s32);
s32 func_08913AE0(char *);
void func_0892E9D4(void *, s32);
void func_089578A8(f32, U *, s32, s32);
void func_08989974(char *);
s32 func_08989F90(char *);
void func_08989FC4(char *, s32, s32);
void func_08989FD0(char *);
s32 func_0898A31C(char *);
s32 func_089B53D8(s32);
extern f32 D_08AD83F0[];
extern void *D_08AD8DD8[];

void func_089058FC(S *arg0, void *arg1) {
    s32 n = func_08852EB8(arg1);

    switch (n) {
    case 0: {
        s32 *p = func_0885356C(arg1, 0, 0, 4);
        char *q = arg0->unk_10->unk_1212D0;
        func_08989FC4(q, *p, func_08852BA8(arg1));
        D_08AD83F0[0] = 0.5f;
        func_089139A4(arg0->unk_10->unk_30, 0, D_08AD83F0, 1);
        func_08852EDC(arg1, n + 1);
        break;
    }
    case 1:
        if (func_08913AE0(arg0->unk_10->unk_30) != 0) {
            V2 *p;
            ((R *)func_088C648C(arg0->unk_10->unk_506F0))->unk_50 = 0;
            func_088DDF80((u8 *)arg0->unk_10);
            {
                R *p = (R *)func_088C648C(arg0->unk_10->unk_506F0);
                *(volatile u8 *)&p->unk_50 = 1;
            }
            p = func_088F32E0(arg0->unk_10->unk_50560);
            arg0->unk_40.unk_00 = p->unk_00;
            arg0->unk_40.unk_04 = p->unk_04;
            func_08852EDC(arg1, n + 1);
            func_088DDFA0((u8 *)arg0->unk_10, 4);
            arg0->unk_10->unk_28610 = 1;
            func_0892E9D4(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, 0);
        }
        break;
    case 2:
        if (func_08989F90(arg0->unk_10->unk_1212D0) != 0) {
            func_08852EDC(arg1, n + 1);
        }
        break;
    case 3:
        D_08AD83F0[0] = 0.5f;
        func_089139A4(arg0->unk_10->unk_30, 1, D_08AD83F0, 1);
        func_08989FD0(arg0->unk_10->unk_1212D0);
        func_08852EDC(arg1, n + 1);
        break;
    case 4:
        if (func_08913AE0(arg0->unk_10->unk_30) != 0) {
            func_08852EDC(arg1, n + 1);
        }
        break;
    case 5:
        if (func_0898A31C(arg0->unk_10->unk_1212D0) != 0) {
            D_08AD83F0[0] = 0.5f;
            func_089139A4(arg0->unk_10->unk_30, 0, D_08AD83F0, 1);
            func_08852EDC(arg1, 0x14);
            {
                T *p = *(T *volatile *)&arg0->unk_10;
                func_089578A8(2.0f, (U *)p->unk_2E3C0, 0, 3);
            }
        }
        break;
    case 0x14:
        if (func_08913AE0(arg0->unk_10->unk_30) != 0) {
            func_088792C0(func_089B53D8(func_088586E8()), -1.0f);
            D_08AD83F0[0] = 0.5f;
            func_089139A4(arg0->unk_10->unk_30, 1, D_08AD83F0, 1);
            func_088DDFA0((u8 *)arg0->unk_10, 1);
            func_08852EDC(arg1, 0x15);
            arg0->unk_10->unk_28610 = 0;
            func_0892E9D4(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, 1);
            func_088F333C(arg0->unk_10->unk_50560, &arg0->unk_40);
            ((R *)func_088C648C(arg0->unk_10->unk_506F0))->unk_50 = 0;
            func_088DDF80((u8 *)arg0->unk_10);
            {
                R *p = (R *)func_088C648C(arg0->unk_10->unk_506F0);
                *(volatile u8 *)&p->unk_50 = 1;
            }
        }
        break;
    case 0x15:
        if (func_08913AE0(arg0->unk_10->unk_30) != 0) {
            func_08989974(arg0->unk_10->unk_1212D0);
            func_08852F00(arg1, 0);
        }
        break;
    }
}
