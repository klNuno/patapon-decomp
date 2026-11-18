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

class B {
public:
    u8 pad_00[0x90];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

typedef struct S0 {
    u8 pad_00[0x30];
    Node unk_30;

    Node *end() { return &unk_30; }
    It begin() { It r; r.unk_00 = unk_30.unk_04; return r; }
} S0;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} L;

typedef struct {
    u8 pad_00[0x10];
    L unk_10;
} W;

void func_08864A30(L *);
void func_08864A68(L *, s32);
void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_088577AC(void);
void func_08858024(s32);
void func_0885807C(void);
void func_088576F8(void);

void func_088828D4(S0 *arg0) {
    W sp18;
    It it;
    Node *e;

    func_08864A30(&sp18.unk_10);
    func_08814C0C(9);
    func_08814C0C(0xA);
    func_08814C0C(0xB);
    func_08814C0C(1);
    func_08814C0C(0);
    func_08814C0C(1);
    func_08814BB4(4);
    func_08858024(2);
    func_0885807C();
    func_088576F8();
    func_088577AC();
    it = arg0->begin();
    e = arg0->end();
    while (it.unk_00->ne(e)) {
        (*(B **)&it.unk_00->unk_08)->v14();
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    func_08864A68(&sp18.unk_10, -1);
}

}
