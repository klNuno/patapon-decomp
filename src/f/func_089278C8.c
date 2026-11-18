#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} A_089278C8;

typedef struct {
    u8 pad_00[0x10];
} B_089278C8;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x10];
    B_089278C8 unk_20[8];
    A_089278C8 unk_A0[8];
    u8 unk_1A0[0x28];
} C_089278C8;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0xC];
    u8 unk_24;
    u8 pad_25[0xB];
    C_089278C8 unk_30;
    u8 unk_1F8[0x58];
    s32 unk_250;
} S_089278C8;

void func_08926DAC(void *, A_089278C8 *);
void func_08926E04(A_089278C8 *, B_089278C8 *);
void func_08926E0C(A_089278C8 *);
void func_089271A0(void *);
void func_089272C0(void *);
void func_089272D0(void *);

void func_089278C8(S_089278C8 *arg0) {
    s32 i;
    A_089278C8 *a;
    C_089278C8 *c;

    arg0->unk_250 = 0;
    arg0->unk_24 = 0;
    arg0->unk_14 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    func_089272D0(arg0->unk_1F8);
    func_089272D0(arg0->unk_30.unk_1A0);
    func_089272C0(arg0->unk_30.unk_10);
    func_089271A0(arg0->unk_30.unk_1A0);
    func_089271A0(arg0->unk_1F8);
    c = &arg0->unk_30;
    for (i = 0; i < 8; i++) {
        a = &c->unk_A0[i];
        func_08926E0C(a);
        func_08926E04(a, &c->unk_20[i]);
        func_08926DAC(arg0->unk_1F8, a);
    }
    func_089272D0(arg0->unk_1F8);
}
