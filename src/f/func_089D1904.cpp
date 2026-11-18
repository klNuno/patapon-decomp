#include "common.h"

extern "C" {

struct A_089D1904 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

typedef struct O_089D1904 {
    u8 pad_00[0x968];
    u8 unk_968;
    u8 unk_969;
    u8 pad_96A[0x82];
    struct O_089D1904 *unk_9EC;
} O_089D1904;

typedef struct {
    u8 pad_00[0x424];
} E_089D1904;

typedef struct {
    E_089D1904 *unk_00;
    u32 unk_04;
} V_089D1904;

struct H_089D1904 {
    s32 unk_00;
    A_089D1904 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

typedef struct {
    u8 pad_00[0x8484];
    V_089D1904 unk_8484;
    s32 unk_848C;
    s32 unk_8490;
    O_089D1904 *unk_8494;
    u8 pad_8498[0x8598];
    s32 unk_10A30;
    u8 pad_10A34[4];
    u8 unk_10A38;
} P_089D1904;

extern O_089D1904 *D_08AD8134[];

void func_08874714(s32, s32);
void func_088F1980(O_089D1904 *);
void func_088F1A78(s32, s32);
void func_088F1C7C(O_089D1904 *, s32);
void func_089D0A5C(H_089D1904 *, P_089D1904 *);

void func_089D1904(P_089D1904 *arg0, s32 arg1, s32 arg2) {
    H_089D1904 h;
    s32 n;
    E_089D1904 *e;
    V_089D1904 *v;
    u32 *sz;
    O_089D1904 *o;
    s32 *q;

    if (arg1 == 0) {
        e = *(E_089D1904 *volatile *)&arg0->unk_8484.unk_00;
        v = &arg0->unk_8484;
        if (e != *(E_089D1904 **)v + arg0->unk_8484.unk_04) {
            sz = &arg0->unk_8484.unk_04;
            do {
                e++;
            } while (e != v->unk_00 + *sz);
        }
        arg0->unk_8484.unk_04 = 0;
        if (arg0->unk_8494 != NULL) {
            func_088F1C7C(arg0->unk_8494, (s32)e);
        }
        func_088F1980(arg0->unk_8494);
        arg0->unk_10A30 = 0;
        arg0->unk_10A38 = 0;
        return;
    }
    n = -1;
    if (arg2 < arg0->unk_10A30) {
        n = arg2 + 2;
    }
    arg0->unk_10A38 = 1;
    func_089D0A5C(&h, arg0);
    func_088F1A78(h.unk_08, n);
    o = arg0->unk_8494;
    if (D_08AD8134[0] != o) {
        o->unk_9EC = D_08AD8134[0];
        D_08AD8134[0] = o;
    }
    o->unk_969 = 0;
    o->unk_968 = 0;
    if (h.unk_08 != 0) {
        *(s32 *)*(s32 *volatile *)&h.unk_0C -= 1;
        q = *(s32 *volatile *)&h.unk_0C;
        if ((q != NULL ? *q : 0) == 0) {
            h.unk_04->v0C(h.unk_08, h.unk_0C, h.unk_00);
            func_08874714(h.unk_08, h.unk_00);
        }
    }
}

}
