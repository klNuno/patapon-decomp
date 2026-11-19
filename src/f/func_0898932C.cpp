#include "common.h"

extern "C" {

struct E {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
};

struct Obj {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x14];
    s32 unk_2C;
    E unk_30[2];
    s32 unk_50;
};

struct R {
    u8 pad_00[0x6C];
    s32 unk_6C;
};

struct Node {
    Node *unk_00;
    Node *unk_04;
    Obj *unk_08;
};

struct I {
    Node *unk_00;
    I(Node *n) : unk_00(n) {}
    I &operator--() { unk_00 = unk_00->unk_04; return *this; }
    Obj *&operator*() const { return unk_00->unk_08; }
};

struct G {
    Node *unk_00;
    Node *unk_04;
    Node *unk_08;
    s32 unk_0C;
    I end() { return I((Node *)this); }
    Obj *&back() { I it = end(); --it; return *it; }
};

typedef G List;
typedef R R_08986CC8;

extern List D_08ADB460[];
extern s32 D_08ADB470[];

void func_08988008(Obj *, s32, s32, s32, s32, s32);
R_08986CC8 *func_08988634(char *, s32, s32 *);
s32 func_08989694(s32);

void func_0898932C(Obj *arg0) {
    s32 sp48[2];
    u32 i;
    R *r;
    s32 index = arg0->unk_50;
    u32 temp2 = index * sizeof(E);
    Obj *p = (Obj *)(temp2 + (u32)arg0);
    s32 *temp = &p->unk_30[0].unk_00;
    s32 id = p->unk_30[0].unk_00;
    if (id >= 0 && p->unk_30[0].unk_0C != 0) {
        func_08988008(D_08ADB460[0].back(), index, *temp, p->unk_30[0].unk_08, 1, 0);
    } else if (id >= 0) {
        func_08988008(D_08ADB460[0].back(), index, *temp, arg0->unk_30[index].unk_08, 0, 0);
    }
    for (i = 0; i < 2; i++) {
        sp48[i] = func_08989694(D_08ADB470[i]);
    }
    r = func_08988634((char *)arg0, D_08ADB460[0].back()->unk_14, sp48);
    if (r != NULL) {
        D_08ADB460[0].back()->unk_2C = r->unk_6C;
    }
}

}
