#include "common.h"

typedef struct {
    f32 unk_00[3];
} V;

typedef struct {
    u8 *unk_00;
    V unk_04;
    void *unk_10;
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
    E unk_08;
    u8 pad_1C[4];
} H;

typedef struct {
    u8 pad_00[0x5C34];
    H unk_5C34;
    H unk_5C54;
} S;

extern f32 D_089F97A8[];
extern f32 D_089F97B0[];
extern f32 D_089F97B8[];
extern f32 D_089F97BC[];
extern f32 D_089F97C0[];
extern f32 D_089F97C8[];
extern f32 D_089F97D0[];
extern f32 D_089F97D4[];
extern u8 D_08A451DC[];
extern u8 D_08A451E8[];
extern u8 D_08A451F4[];
extern u8 D_08A45200[];
extern u8 D_08A4520C[];
extern u8 D_08A45218[];
void func_0881F120(void *, void *, s32);

void func_0887BFD4(S *arg0, H *arg1, H *arg2)
{
    volatile V a;
    volatile V b;
    volatile V c;
    volatile V d;
    E *p;
    s32 x;

    if (arg2 == NULL) {
        p = &arg0->unk_5C54.unk_08;
        a.unk_00[0] = D_089F97A8[0];
        a.unk_00[1] = D_089F97A8[1];
        a.unk_00[2] = D_089F97B0[0];
        arg0->unk_5C54.unk_04 = 0;
        if (p != NULL) {
            *(u8 *volatile *)&p->unk_00 = D_08A45218;
            p->unk_00 = D_08A4520C;
            p->unk_04 = *(V *)&a;
            p->unk_10 = arg0;
        }
        arg0->unk_5C54.unk_00 = p;
    } else if (arg2 != &arg0->unk_5C54) {
        if (arg2->unk_00 != NULL) {
            x = arg2->unk_04;
            if (x != 0) {
                p = &arg0->unk_5C54.unk_08;
                arg0->unk_5C54.unk_04 = x;
                if (p != NULL) {
                    c.unk_00[0] = D_089F97C0[0];
                    c.unk_00[1] = D_089F97C0[1];
                    c.unk_00[2] = D_089F97C8[0];
                    *(u8 *volatile *)&p->unk_00 = D_08A45218;
                    p->unk_00 = D_08A45200;
                    p->unk_04 = *(V *)&c;
                    p->unk_10 = &arg0->unk_5C54.unk_04;
                }
                arg0->unk_5C54.unk_00 = p;
            } else {
                func_0881F120(&arg0->unk_5C54.unk_08, &arg2->unk_08, 0x14);
                arg0->unk_5C54.unk_00 = &arg0->unk_5C54.unk_08;
            }
        } else {
            arg0->unk_5C54.unk_00 = NULL;
            arg0->unk_5C54.unk_04 = 0;
        }
    }

    if (arg1 == NULL) {
        p = &arg0->unk_5C34.unk_08;
        b.unk_00[0] = D_089F97B0[1];
        b.unk_00[1] = D_089F97B8[0];
        b.unk_00[2] = D_089F97BC[0];
        arg0->unk_5C34.unk_04 = 0;
        if (p != NULL) {
            *(u8 *volatile *)&p->unk_00 = D_08A451F4;
            p->unk_00 = D_08A451E8;
            p->unk_04 = *(V *)&b;
            p->unk_10 = arg0;
        }
        arg0->unk_5C34.unk_00 = p;
    } else if (arg1 != &arg0->unk_5C34) {
        if (arg1->unk_00 != NULL) {
            x = arg1->unk_04;
            if (x != 0) {
                p = &arg0->unk_5C34.unk_08;
                arg0->unk_5C34.unk_04 = x;
                if (p != NULL) {
                    d.unk_00[0] = D_089F97C8[1];
                    d.unk_00[1] = D_089F97D0[0];
                    d.unk_00[2] = D_089F97D4[0];
                    *(u8 *volatile *)&p->unk_00 = D_08A451F4;
                    p->unk_00 = D_08A451DC;
                    p->unk_04 = *(V *)&d;
                    p->unk_10 = &arg0->unk_5C34.unk_04;
                }
                arg0->unk_5C34.unk_00 = p;
            } else {
                func_0881F120(&arg0->unk_5C34.unk_08, &arg1->unk_08, 0x14);
                arg0->unk_5C34.unk_00 = &arg0->unk_5C34.unk_08;
            }
        } else {
            arg0->unk_5C34.unk_00 = NULL;
            arg0->unk_5C34.unk_04 = 0;
        }
    }
}
