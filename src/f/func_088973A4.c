#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    s32 unk_3C;
    u8 pad_40[0xC4];
} E;

typedef struct {
    u8 pad_00[0x880];
    E unk_880[18];
} M;

typedef struct {
    u8 pad_00[0x14A0];
    M *unk_14A0;
} G;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[5];
    u8 unk_0D;
    u8 unk_0E;
} Sub;

typedef struct R R;
struct R {
    u8 pad_00[0x3A0];
    R *unk_3A0;
    u8 pad_3A4[0x92E0 - 0x3A4];
    Sub unk_92E0;
};

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x1B0 - 0x118];
    u8 unk_1B0[0x3A0 - 0x1B0];
    R *unk_3A0;
    u8 pad_3A4[8];
    u8 unk_3AC;
    u8 pad_3AD[0x910 - 0x3AD];
    u8 unk_910[0xA20 - 0x910];
    u8 unk_A20[0xD44 - 0xA20];
    f32 unk_D44;
    u8 pad_D48[4];
    f32 unk_D4C;
    u8 pad_D50[0x30];
    V4 unk_D80;
    u8 pad_D90[0x10F4 - 0xD90];
    s32 unk_10F4;
    u8 pad_10F8[4];
    s32 unk_10FC;
    u8 pad_1100[0x12C0 - 0x1100];
    u8 unk_12C0[0xB0];
    u8 unk_1370;
    u8 pad_1371[0xF];
    u8 unk_1380[0x74];
    s32 unk_13F4;
} S;

extern G *D_08AD1F14[];
void func_088975BC(S *, s32);
u8 func_08897970(S *);
void func_088A024C(void *, s32);
V4 *func_088A039C(void *);
s32 func_088F5BA0(s32);
void func_0893C604(void *, s32);
void func_08942524(void *, s32);
void func_08965B88(s32, s32, s32);
void func_089693B8(S *, s32);
void func_0897640C(void *, s32);
void func_089773C8(void *);

void func_088973A4(S *arg0, s32 arg1) {
    func_089773C8(arg0->unk_A20);
    if (arg0->unk_10FC != 3) {
        func_0897640C(arg0->unk_910, arg1);
    } else if (arg0->unk_D4C <= arg0->unk_D44 || arg0->unk_D44 == 0.0f) {
        func_0897640C(arg0->unk_910, arg1);
    }
    func_08942524(arg0->unk_1B0, arg1);
    func_089693B8(arg0, arg1);
    if (arg0->unk_3AC != 0) {
        func_088A024C(arg0->unk_12C0, arg1);
    }
    func_088975BC(arg0, arg1);
    if (arg0->unk_3A0->unk_3A0->unk_92E0.unk_04 == 0) {
        s32 i = arg0->unk_13F4;
        if (i < 18 && i >= 0) {
            G *g = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
            M *m = g->unk_14A0;
            s32 b = func_08897970(arg0);
            E *e = &m->unk_880[i];
            if (e->unk_38 != 0 && b != 0) {
                if (e->unk_38 != 0 && b != 0) {
                    e->unk_3C++;
                }
                e->unk_38 = 0;
            }
        }
    }
    {
        Sub *s = &arg0->unk_3A0->unk_3A0->unk_92E0;
        if (s->unk_0D != 0 || s->unk_0E != 0) {
            V4 *v = func_088A039C(arg0->unk_12C0);
            if (v != NULL) {
                arg0->unk_D80.unk_00 = v->unk_00;
                arg0->unk_D80.unk_04 = v->unk_04;
                arg0->unk_D80.unk_08 = v->unk_08;
                arg0->unk_D80.unk_0C = v->unk_0C;
            }
        }
    }
    if (func_088F5BA0(arg0->unk_114) != 0) {
        s32 t = arg0->unk_10F4;
        func_08965B88(t, 0, !(func_088F5BA0(arg0->unk_114) != 0));
    }
    func_0893C604(arg0->unk_1380, arg1);
    arg0->unk_1370 = 1;
}
