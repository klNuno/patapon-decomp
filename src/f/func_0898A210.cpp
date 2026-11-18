#include "common.h"

extern "C" {

struct A0898A210_Base {
    u8 pad_00[0x15C];
};

struct A0898A210 : A0898A210_Base {
    virtual void v0();
    virtual s32 v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct B0898A210_Base {
    u8 pad_00[0x8100];
};

struct B0898A210 : B0898A210_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} C0898A210;

typedef struct {
    C0898A210 *unk_00;
    u8 pad_04[0x1C];
    A0898A210 *unk_20;
} T0898A210;

B0898A210 *func_088C6484(void *);

void func_0898A210(T0898A210 *arg0) {
    u8 ok;
    void *p;

    ok = arg0->unk_20 == NULL ? 0 : arg0->unk_20->v1();
    if (ok) {
        p = arg0->unk_00->unk_506F0;
        func_088C6484(p)->v3();
        arg0->unk_20->v6();
        func_088C6484(p)->v4();
    }
}

}
