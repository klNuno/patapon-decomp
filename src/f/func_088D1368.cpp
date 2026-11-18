#include "common.h"

extern "C" {

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    void *unk_08;

    int eq2(struct Node *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct Node *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct Node *o) {
        return !(bool)eq(o);
    }
} Node;

typedef struct It {
    Node *unk_00;
} It;

typedef struct S0 {
    u8 pad_00[0x84];
    Node unk_84;

    It begin() { It r; r.unk_00 = unk_84.unk_04; return r; }
} S0;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} L088D1368;

typedef struct {
    u8 pad_00[0x10];
    L088D1368 unk_10;
} W088D1368;

void func_08864A30(L088D1368 *);
void func_08864A68(L088D1368 *, s32);
void func_08814BB4(s32);
void func_088D088C(void *);

void func_088D1368(S0 *arg0) {
    W088D1368 sp18;
    It it;
    Node *e;

    func_08864A30(&sp18.unk_10);
    func_08814BB4(4);
    it = arg0->begin();
    e = &arg0->unk_84;
    while (it.unk_00->ne(e)) {
        func_088D088C(*(void **)&it.unk_00->unk_08);
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    func_08864A68(&sp18.unk_10, -1);
}

}
