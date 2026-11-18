#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x30];
    V4 unk_30;
} M_088E5458;

typedef struct {
    u8 pad_00[0x18];
} S1;

typedef struct {
    u8 pad_00[8];
} V_088EECE0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    V4 unk_10;
    V4 unk_20;
    u8 *unk_30;
    V4 *unk_34;
    void *unk_38;
    s32 unk_3C;
} S0;

void func_08854CD8(V4 *, V4 *, V4 *);
void func_088664DC(M_088E5458 *, void *, s32);
void func_0892DFA0(s32, V_088EECE0 *);
extern void func_0893C7A4(char *, s32);
void func_0885A870(V_088EECE0 *, S1 *);

void func_0893C604(S0 *arg0) {
    V_088EECE0 a;
    S1 b;
    M_088E5458 c;
    u8 *p;
    void *q;
    V4 *r;

    if ((s32)(arg0->unk_04 == 0) != 1) {
        p = arg0->unk_30;
        if (p != NULL && *p != 0) {
            func_0893C7A4((char *)arg0, 1);
        }
        q = arg0->unk_38;
        if (q != NULL) {
            func_088664DC(&c, q, arg0->unk_3C);
            arg0->unk_10.unk_00 = c.unk_30.unk_00;
            arg0->unk_10.unk_04 = c.unk_30.unk_04;
            arg0->unk_10.unk_08 = c.unk_30.unk_08;
            arg0->unk_10.unk_0C = c.unk_30.unk_0C;
        } else {
            r = arg0->unk_34;
            if (r != NULL) {
                arg0->unk_10.unk_00 = r->unk_00;
                arg0->unk_10.unk_04 = r->unk_04;
                arg0->unk_10.unk_08 = r->unk_08;
                arg0->unk_10.unk_0C = r->unk_0C;
            }
        }
        func_08854CD8((V4 *)&b, &arg0->unk_10, &arg0->unk_20);
        func_0885A870(&a, &b);
        func_0892DFA0(arg0->unk_04, &a);
    }
}
