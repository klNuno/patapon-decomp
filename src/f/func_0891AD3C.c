#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_0891AD3C;

typedef struct {
    u8 unk_00[0x10];
} E_0891AD3C;

typedef struct {
    void *unk_00;
    u8 unk_04[0x220];
    u8 unk_224[0x10];
    s32 unk_234;
} Sub_0891AD3C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[0x84];
    Sub_0891AD3C unk_90;
    Sub_0891AD3C unk_2C8;
    Sub_0891AD3C unk_500;
    u8 unk_738[0x2E70 - 0x738];
    u8 unk_2E70[0x3160 - 0x2E70];
    u8 unk_3160[0x3430 - 0x3160];
    u8 unk_3430[0x37C0 - 0x3430];
    u8 unk_37C0[0x3810 - 0x37C0];
    u8 unk_3810[0x4C00 - 0x3810];
    s32 unk_4C00;
    u8 unk_4C04;
    u8 unk_4C05;
    u8 unk_4C06;
    u8 pad_4C07;
    s32 unk_4C08;
} S_0891AD3C;

void func_08913614(void *);
void func_08918FB4(void *, s32, s32);
void func_0891B138(void *, P_0891AD3C *);
void func_0891B1D0(P_0891AD3C *, s32, s32);
void func_0891B1DC(void *);
void func_0891C1DC(void *);
void func_0891C6E0(void *);
void func_0891D240(void *);
void func_0891F278(void *, s32);
void func_08920BB4(void *);
extern E_0891AD3C D_089E5E90[];
extern E_0891AD3C D_089E5F00[];
extern E_0891AD3C D_089E5F10[];

S_0891AD3C *func_0891AD3C(S_0891AD3C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    P_0891AD3C p1;
    P_0891AD3C p2;
    P_0891AD3C p3;
    Sub_0891AD3C *s;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg3;
    func_08920BB4(arg0->unk_0C);
    s = &arg0->unk_90;
    s->unk_00 = arg0;
    func_0891B1DC(s->unk_04);
    s->unk_234 = 0;
    for (i = 0; i < 7; i++) {
        func_0891B1D0(&p1, (s32)&D_089E5E90[i], 0);
        func_0891B138(s->unk_224, &p1);
    }
    s = &arg0->unk_2C8;
    s->unk_00 = arg0;
    func_0891B1DC(s->unk_04);
    s->unk_234 = 0;
    func_0891B1D0(&p2, (s32)D_089E5F00, 0);
    func_0891B138(s->unk_224, &p2);
    s = &arg0->unk_500;
    s->unk_00 = arg0;
    func_0891B1DC(s->unk_04);
    s->unk_234 = 0;
    func_0891B1D0(&p3, (s32)D_089E5F10, 0);
    func_0891B138(s->unk_224, &p3);
    func_08918FB4(arg0->unk_738, arg1, arg2);
    func_0891C6E0(arg0->unk_2E70);
    func_0891D240(arg0->unk_3160);
    func_0891F278(arg0->unk_3430, arg1);
    func_08913614(arg0->unk_37C0);
    func_0891C1DC(arg0->unk_3810);
    arg0->unk_4C00 = 0;
    arg0->unk_4C04 = 0;
    arg0->unk_4C05 = 0;
    arg0->unk_4C06 = 0;
    arg0->unk_4C08 = 2;
    return arg0;
}
