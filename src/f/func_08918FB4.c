#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    u8 unk_00[0x10];
} E;

typedef struct {
    void *unk_00;
    u8 unk_04[0x220];
    u8 unk_224[0x10];
    s32 unk_234;
} B;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    B unk_08;
    u8 unk_240[0x410];
    void *unk_650;
    s32 unk_654;
    f32 unk_658;
    void *unk_65C;
    V unk_660;
    u8 unk_66C;
    u8 pad_66D[3];
    s32 unk_670;
    s32 unk_674;
    u8 unk_678[0x1058];
    u8 unk_16D0[0x1058];
    u8 unk_2728;
    u8 unk_2729;
    u8 unk_272A;
    u8 unk_272B;
    u8 unk_272C;
    u8 pad_272D[3];
    s32 unk_2730;
} S;

extern E D_089E5B78[];
extern f32 D_08A490BC[];
extern f32 D_08A00920[];
extern f32 D_08A00928[];
extern f32 D_08A0092C[];
extern f32 D_08A00930[];
extern f32 D_08A00938[];
extern f32 D_08A00940[];
extern f32 D_08A00948[];
extern f32 D_08A0094C[];
extern f32 D_08A00950[];
extern f32 D_08A00958[];
extern f32 D_08A00960[];

void func_08919450(void *, void *);
void func_089194E8(void *, E *, s32);
void func_089194F4(void *);
void func_08925AB0(void *);
void func_08925F04(void *, s32, s32);

S *func_08918FB4(S *arg0, s32 arg1, s32 arg2) {
    f32 a[3];
    f32 b[5];
    f32 c[3];
    f32 d[5];
    u8 e[8];
    B *p;
    u32 i;
    E *q;
    V *temp;
    f32 x, y, z;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08.unk_00 = arg0;
    p = &arg0->unk_08;
    func_089194F4(p->unk_04);
    p->unk_234 = 0;
    i = 0;
    q = D_089E5B78;
    do {
        func_089194E8(e, q, 0);
        func_08919450(p->unk_224, e);
        ++i;
        ++q;
    } while (i < 3);
    arg0->unk_650 = (u8 *)(((u32)arg0->unk_240 & 0xF) + (u32)arg0 + 0x240);
    arg0->unk_654 = 0;
    arg0->unk_658 = 125.0f;
    arg0->unk_65C = arg0;
    temp = (V *)(u32)D_08A490BC;
    x = *(volatile f32 *)D_08A490BC;
    y = temp->unk_04;
    z = temp->unk_08;
    arg0->unk_660.unk_00 = x;
    arg0->unk_660.unk_04 = y;
    arg0->unk_660.unk_08 = z;
    arg0->unk_66C = 0;
    arg0->unk_670 = 0;
    arg0->unk_674 = 0;
    func_08925AB0(arg0->unk_678);
    func_08925AB0(arg0->unk_16D0);
    arg0->unk_2728 = 0;
    arg0->unk_2729 = 0;
    arg0->unk_272A = 0;
    arg0->unk_272B = 0;
    arg0->unk_272C = 0;
    arg0->unk_2730 = -1;
    a[0] = D_08A00920[1];
    a[1] = D_08A00928[0];
    a[2] = D_08A0092C[0];
    func_08925F04(arg0->unk_678, (s32)a, 3);
    b[0] = D_08A00930[0];
    b[1] = D_08A00930[1];
    b[2] = D_08A00938[0];
    b[3] = D_08A00938[1];
    b[4] = D_08A00940[0];
    func_08925F04(arg0->unk_678, (s32)b, 5);
    c[0] = D_08A00940[1];
    c[1] = D_08A00948[0];
    c[2] = D_08A0094C[0];
    func_08925F04(arg0->unk_16D0, (s32)c, 3);
    d[0] = D_08A00950[0];
    d[1] = D_08A00950[1];
    d[2] = D_08A00958[0];
    d[3] = D_08A00958[1];
    d[4] = D_08A00960[0];
    func_08925F04(arg0->unk_16D0, (s32)d, 5);
    return arg0;
}
