#include "common.h"

extern "C" {

struct A {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct C {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP {
    s32 unk_00;
    C unk_04;
};

struct H {
    s32 unk_00;
    A *unk_04;
    SP unk_08;
};

class B {
public:
    u8 pad_00[0x28];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32);
};

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[0x1212D0 - 0x506F0];
    u8 unk_1212D0[4];
} W;

class O : public B {
public:
    u8 pad_2C[0x20];
    W *unk_4C;
    s32 unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x90];
    f32 unk_F0;
    f32 unk_F4;
    s32 unk_F8;
    s32 unk_FC;
    f32 unk_100;
};

void func_089912C8(H *, s32, u8 *);
void func_0886A45C(s32, s32);
void func_08865FEC(void *, s32, s32);
s32 func_088BCF94(s32);
s32 func_088C6484(void *);
void func_088CE1EC(s32, O *);
s32 func_0898583C(char *);
char *func_0898A324(void *);

void func_0898DC20(O *arg0, u8 *arg1, f32 *arg2) {
    H h;
    SP *s;
    C *c;

    func_088CE1EC(func_0898583C(func_0898A324(arg0->unk_4C->unk_1212D0)), arg0);
    arg0->v14(-2);
    arg0->unk_50 = 0;
    arg0->unk_FC = 0;
    arg0->unk_F0 = arg2[0];
    arg0->unk_F4 = arg2[1];
    arg0->unk_F8 = 0;
    arg0->unk_100 = 1.0f;
    func_089912C8(&h, func_088BCF94(func_088C6484(arg0->unk_4C->unk_506F0)), arg1 + 0x28);
    func_08865FEC(arg0->unk_60, h.unk_08.unk_00, 1);
    s = &h.unk_08;
    if (h.unk_08.unk_00 != 0) {
        c = &h.unk_08.unk_04;
        if (c->release() == 0) {
            h.unk_04->v0C(s->unk_00, *(s32 **)c, h.unk_00);
            func_0886A45C(s->unk_00, h.unk_00);
        }
    }
}

}
