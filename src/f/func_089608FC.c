#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
} P;

typedef struct {
    u8 pad_00[0x108];
    P *unk_108;
} N;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x1C];
    s32 unk_20;
    u8 pad_24[0xAC];
    P *unk_D0;
} A;

typedef struct {
    u8 pad_00[0x1F4];
    void *unk_1F4;
    s32 unk_1F8;
    void *unk_1FC;
} O;

void *func_08827A50(s32, s32);
void func_088F5864(void *);
void func_08960BB4(A *, void *, s32, s32);
void func_08960C7C(A *, void *, s32, s32);
void func_08960D44(A *, void *, s32, s32);
void func_08960E0C(A *, void *, s32, s32);
void *func_08963074(void *, s32);
void *func_08966FC4(void *, s32, s32, A *);
void *func_0896728C(void *);
N *func_0896CE18(void *, s32, s32, s32);
extern s32 D_08A04DB0[];
extern u8 D_08A47A20[];
extern u8 D_08A47A2C[];
extern u8 D_08A47A38[];

s32 func_089608FC(A *arg0, void *arg1) {
    N *n;
    P *p;
    P *q;
    s32 a;
    void *v;
    O *o;

    n = func_0896CE18(arg1, D_08A04DB0[0], 0, 1);
    if (n == NULL) {
        return 0;
    }
    q = n->unk_108;
    arg0->unk_D0 = q;
    if (q != NULL) {
        p = q;
    } else {
        p = NULL;
    }
    if (p->unk_4C != 0) {
        a = arg0->unk_00;
        v = func_08827A50(0x3F0, a);
        if (v != NULL) {
            v = func_0896728C(v);
        }
        func_08960BB4(arg0, v, a, 1);
    }
    if (p->unk_50 != 0) {
        if ((o = func_08827A50(0x200, arg0->unk_00)) != NULL) {
            func_088F5864(o);
            o->unk_1FC = D_08A47A38;
            o->unk_1F8 = 0;
            o->unk_1F4 = D_08A47A20;
            o->unk_1FC = D_08A47A2C;
        }
        func_08960C7C(arg0, o, arg0->unk_00, 1);
    }
    if (p->unk_54 != 0) {
        a = arg0->unk_00;
        v = func_08827A50(0x2A0, a);
        if (v != NULL) {
            v = func_08963074(v, arg0->unk_00);
        }
        func_08960D44(arg0, v, a, 1);
    }
    if (p->unk_58 != 0) {
        v = func_08827A50(0x1F0, arg0->unk_00);
        if (v != NULL) {
            v = func_08966FC4(v, arg0->unk_00, arg0->unk_20, arg0);
        }
        func_08960E0C(arg0, v, arg0->unk_00, 1);
    }
    return 1;
}
