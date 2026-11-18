#include "common.h"
extern "C" {
typedef struct {
    u32 unk_00;
    u8 pad_04[0x20];
    s32 unk_24;
} E;

struct V {
    u8 pad_00[0xFB0];
    E *unk_FB0;
    u32 unk_FB4;
    E *unk_00(u32 arg0) {
        s32 a;
        s32 b;
        if (unk_FB4 == 0) {
            return unk_FB0 + unk_FB4;
        }
        a = 0;
        b = unk_FB4;
        while (a <= b) {
            E *&p = unk_FB0;
            s32 k = a + (b - a) / 2;
            E *e;
            if ((u32)k >= unk_FB4) {
                break;
            }
            e = p + k;
            if (arg0 < e->unk_00) {
                b = k - 1;
            } else if (e->unk_00 < arg0) {
                a = k + 1;
            } else {
                return e;
            }
        }
        return unk_FB0 + *(volatile u32 *)&unk_FB4;
    }
};

typedef struct {
    u8 pad_00[0x14A8];
    V unk_14A8;
} M;

typedef struct {
    u8 pad_00[0x24];
    u32 unk_24;
} R;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
} Q;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C;
    u8 pad_0D[0xF17];
    s32 unk_F24;
    u8 unk_F28;
    u8 unk_F29;
    u8 pad_F2A[0x66];
    Q * unk_F90;
    u8 pad_F94[0x4];
    u32 unk_F98;
    u8 pad_F9C[0x4C];
    char unk_FE8[0x40];
    u32 unk_1028;
} S;

extern M *D_08AD1F14[];
extern char *D_08A06B4C[];
extern char D_08A06BCC[];
void func_08822B3C(char *, char *);
void func_08822918(char *, char *);
s32 func_0888AFAC(char *);
s32 func_0893D94C(void *, char *);
R *func_08998B34(s32, char *);
s32 func_0899E1DC(s32, u32);
void func_0899E1FC(s32);
void func_089A0AB8(void *, char *);
char *func_089A1250(void *);

static inline M *temp_00() {
    M *m = D_08AD1F14[0];
    return m != NULL ? m : NULL;
}

void func_08999BC0(S *arg0, char *arg1)
{
    char temp[0x100];
    u32 i;
    u32 j;
    u32 off;
    V *v;
    R *r;
    Q **p;

    if (func_089A1250(&arg0->unk_0C) != NULL &&
        func_0893D94C(arg1, func_089A1250(&arg0->unk_0C)) == 0) {
        return;
    }

    i = 0;
    if (arg0->unk_F98 != 0) {
        off = 0;
        p = &arg0->unk_F90;
        do {
            for (j = 0; j < 3U; j++) {
                if (((func_0899E1DC(((Q *)((u8 *)*p + off))->unk_08, j) != 0) ^ 1) == 0)
                    return;
            }
            off += 0x10;
        } while (++i < arg0->unk_F98);
    }

    func_08822B3C(arg0->unk_FE8, arg1);
    v = &temp_00()->unk_14A8;
    arg0->unk_F98 = v->unk_00(func_0888AFAC(arg1))->unk_24;
    i = 0;
    if (arg0->unk_F98 != 0) {
        off = 0;
        p = &arg0->unk_F90;
        do {
            func_0899E1FC(((Q *)((u8 *)*p + off))->unk_08);
            off += 0x10;
        } while (++i < arg0->unk_F98);
    }
    func_08822B3C(temp, D_08A06B4C[0]);
    func_08822918(temp, arg1);
    func_08822918(temp, D_08A06BCC);
    arg0->unk_F28 = 0;
    arg0->unk_F29 = 1;
    func_089A0AB8(&arg0->unk_0C, temp);
    r = func_08998B34(arg0->unk_F24, arg1);
    if (r != NULL)
        arg0->unk_1028 = r->unk_24;
}
}
