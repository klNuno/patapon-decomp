#include "common.h"

extern "C" {

class C {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

class B {
public:
    u8 pad_00[0x28];
};

class O : public B {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual s32 v5();
};

void func_088E1204(void *, s32);
void func_088F5328(void *, s32);

class P1 {
public:
    s32 unk_00;
    C *unk_04;
    O *unk_08;
    s32 *unk_0C;

    void release() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->v1(unk_08, unk_0C, unk_00);
                func_088E1204(unk_08, unk_00);
            }
        }
    }
};

class P2 {
public:
    s32 unk_00;
    C *unk_04;
    void *unk_08;
    s32 *unk_0C;

    void release() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->v1(unk_08, unk_0C, unk_00);
                func_088F5328(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} A;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 func_088DDF90(u8 *);
void func_088E24AC(void *, s32);
void func_088F31AC(P1 *, u8 *);
void func_088F4040(u8 *);
void func_088F537C(P2 *, P1 *);

void func_088FDFA8(A *arg0, void *arg1) {
    switch (func_08852EB8(arg1)) {
    case 14: {
        P1 h;
        func_088F31AC(&h, arg0->unk_10 + 0x50560);
        if (h.unk_08 != NULL && h.unk_08->v5() == 1) {
            P2 h2;
            func_088F537C(&h2, &h);
            func_088E24AC(h2.unk_08, 1);
            h2.release();
        }
        func_08852EDC(arg1, 15);
        h.release();
        break;
    }
    case 15:
        if (func_088DDF90(arg0->unk_10) != 0) {
            func_08852F00(arg1, 0);
        }
        break;
    case 16:
        func_088F4040(arg0->unk_10 + 0x50560);
        func_08852EDC(arg1, 17);
        break;
    case 17:
        if (func_088DDF90(arg0->unk_10) != 0) {
            func_08852F00(arg1, 0);
        }
        break;
    }
}

}
