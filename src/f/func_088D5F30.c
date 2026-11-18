#include "common.h"

extern s32 D_089FBB90[];
extern s8 D_089FBB9C[][2];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    s8 unk_0C[32][2];
} T;

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    T unk_08;
} N;

typedef struct {
    u8 pad_00[0xC24];
    N *unk_C24;
    N *unk_C28;
    N *unk_C2C;
    s32 unk_C30;
} S;

typedef union {
    N *unk_00;
    f32 unk_00_f;
} I;

void func_088D5F30(S *arg0, s32 arg1, f32 arg2) {
    T temp;
    volatile I temp2;
    volatile I temp3;
    N *p;
    N *q;
    N *r;
    T *t;
    s8 *a;
    s8 *b;
    s32 *c;
    s32 *d;
    s32 i;

    temp2.unk_00 = (N *)&arg0->unk_C24;
    r = arg0->unk_C2C;
    temp.unk_04 = arg1;
    p = r->unk_00;
    temp.unk_08 = arg2;
    temp3.unk_00_f = temp2.unk_00_f;
    if (p != r) {
        q = p->unk_00;
        if (q != NULL) {
            q->unk_04 = p->unk_04;
        }
        q = p->unk_04;
        if (q != NULL) {
            q->unk_00 = p->unk_00;
        }
        p->unk_00 = NULL;
        p->unk_04 = NULL;
    } else {
        p = NULL;
    }
    r = temp3.unk_00;
    t = &p->unk_08;
    q = r->unk_04;
    arg0->unk_C30++;
    q->unk_00 = p;
    r->unk_04 = p;
    p->unk_00 = r;
    p->unk_04 = q;
    if (t != NULL) {
        a = &D_089FBB9C[0][0];
        b = &temp.unk_0C[0][0];
        i = 32;
        do {
            s8 x = *a++;
            s8 y = *a++;
            --i;
            b[0] = x;
            b[1] = y;
            b += 2;
        } while (i > 0);
        temp.unk_00 = D_089FBB90[0];
        c = (s32 *)&temp;
        d = (s32 *)t;
        i = 19;
        do {
            s32 x = *c;
            --i;
            *d = x;
            c++;
            d++;
        } while (i > 0);
    }
}
