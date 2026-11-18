#include "common.h"

extern "C" {
typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    s32 unk_08;
} N;

extern N D_08ADB460[];
extern N *D_08ADB468[];
extern s32 D_08ADB46C[];

typedef union {
    N *unk_00;
    f32 unk_00_f;
} I;

static inline s32 func_08988394_eq(N *arg0, N *arg1) {
    return arg0 == arg1;
}

static inline bool func_08988394_ne(N *arg0, N *arg1) {
    return !(bool)func_08988394_eq(arg0, arg1);
}

void func_08988394(s32 arg0) {
    struct {
        volatile I unk_00;
        u8 pad_04[8];
        volatile I unk_0C;
        u8 pad_10[4];
    } temp;
    N *p;
    N *q;
    N *r;
    s32 *t;

    p = D_08ADB460[0].unk_00;
    r = D_08ADB460;
    if (func_08988394_ne(p, r)) {
        do {
            if (p->unk_08 == arg0) {
                return;
            }
            p = p->unk_00;
        } while (func_08988394_ne(p, r));
    }
    temp.unk_0C.unk_00 = D_08ADB460;
    r = D_08ADB468[0];
    p = r->unk_00;
    temp.unk_00.unk_00_f = temp.unk_0C.unk_00_f;
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
    r = temp.unk_00.unk_00;
    q = r->unk_04;
    D_08ADB46C[0]++;
    q->unk_00 = p;
    r->unk_04 = p;
    p->unk_00 = r;
    p->unk_04 = q;
    t = &p->unk_08;
    if (t != NULL) {
        *t = arg0;
    }
}
}
