#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    f32 unk_14;
} P;

typedef struct {
    u8 pad_00[0x20];
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x20];
    u8 unk_20;
} H;

typedef struct {
    H *unk_00;
    u8 pad_04[0x14];
    s32 unk_18;
    u8 unk_1C[0x2F0 - 0x1C];
    V unk_2F0;
    u8 pad_2F8[0x14];
    u8 unk_30C[0x25C4 - 0x30C];
    s32 unk_25C4;
    u8 pad_25C8[4];
    u8 unk_25CC[0x25EC - 0x25CC];
    s32 unk_25EC;
    s32 unk_25F0;
    u8 unk_25F4;
} S;

void func_08879610(void *, s32);
P *func_0888AA78(P *, s32, s32, s32, s32, s32, f32);
void func_088A39FC(void *, P *);
void func_0894BD6C(s32);
void func_0894CF90(f32, void *);
void func_0894D050(void *);

void func_08951AF8(S *arg0) {
    P p;
    E *e;
    V *v;
    s32 n;

    if (arg0->unk_00->unk_20 == 0) {
        arg0->unk_25F0 = -1;
        n = arg0->unk_2F0.unk_04;
        e = arg0->unk_2F0.unk_00;
        v = &arg0->unk_2F0;
        if ((u32)e != (u32)(e + n)) {
            do {
                e++;
            } while (e != v->unk_00 + n);
        }
        arg0->unk_2F0.unk_04 = 0;
        arg0->unk_25EC = 0;
        arg0->unk_25C4 = 0;
        func_0894CF90(0.2f, arg0->unk_1C);
        func_0894BD6C(arg0->unk_18);
        func_08879610(arg0->unk_30C, 0);
        func_088A39FC(arg0->unk_25CC, func_0888AA78(&p, 0, 2, 0, -1, -1, 0.0f));
        func_0894D050(arg0->unk_1C);
        arg0->unk_25F4 = 0;
    }
}
