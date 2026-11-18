#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    s32 unk_04;
    u8 unk_08;
} V;

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    V unk_08;
} Node;

void func_088B7770(V *);

struct It {
    Node *unk_00;
};

struct L {
    Node *unk_00;
    u8 pad_04[4];
    Node *unk_08;
    s32 unk_0C;
    It begin() { It i; i.unk_00 = unk_00; return i; }
    void erase(It pos) {
        unk_0C--;
        func_088B7770(&pos.unk_00->unk_08);
        Node *f = unk_08;
        Node *nx = pos.unk_00->unk_00;
        pos.unk_00->unk_04->unk_00 = nx;
        Node *t = nx->unk_04;
        nx->unk_04 = pos.unk_00->unk_04;
        pos.unk_00->unk_04 = f->unk_04;
        f->unk_04->unk_00 = pos.unk_00;
        f->unk_04 = t;
        t->unk_00 = f;
    }
};

typedef struct {
    u8 pad_00[0x1A4];
    u8 unk_1A4;
    u8 unk_1A5;
    u8 unk_1A6;
    u8 pad_1A7;
    s32 unk_1A8;
    u8 unk_1AC;
    u8 pad_1AD[0x304 - 0x1AD];
    L unk_304;
    u8 pad_314[0x10];
    u8 unk_324;
    u8 pad_325[3];
    s32 unk_328;
    f32 unk_32C;
} S;

u8 func_088B7324(S *, s32, u8);

void func_088B75B0(S *arg0) {
    arg0->unk_1A8 = arg0->unk_304.unk_00->unk_08.unk_04;
    arg0->unk_1AC = arg0->unk_304.unk_00->unk_08.unk_08;
    if (func_088B7324(arg0, arg0->unk_1A8, arg0->unk_1AC) == 0) {
        return;
    }
    arg0->unk_1A4 = 1;
    arg0->unk_1A6 = 0;
    arg0->unk_1A5 = 0;
    arg0->unk_304.erase(arg0->unk_304.begin());
    if (arg0->unk_304.unk_0C != 0) {
        f32 f = arg0->unk_304.unk_00->unk_08.unk_00;
        arg0->unk_328 = 0;
        arg0->unk_32C = f;
    } else {
        arg0->unk_324 = 0;
    }
}

}
