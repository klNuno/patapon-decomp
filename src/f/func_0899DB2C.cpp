#include "common.h"

extern "C" {

class B {
public:
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1(s32);
};

class E : public B {
public:
    u8 pad_84[0xC];
    s32 unk_90;
    s32 unk_94;
    u8 pad_98[0x8];
};

class M {
public:
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1();
};

typedef struct {
    u8 pad_00[0x10];
    E unk_10[3];
    s32 unk_1F0;
    u8 pad_1F4[0x2C];
} G;

typedef struct {
    G unk_00[3];
    u8 pad_660[0x20];
    M unk_680;
} Obj;

void func_0899D9BC(Obj *, u32);

void func_0899DB2C(Obj *arg0, s32 arg1) {
    u32 i;
    u32 j;
    E *e;

    arg0->unk_680.v1();
    for (i = 0; i < 3; i++) {
        if (arg0->unk_00[i].unk_1F0 != 0) {
            for (j = 0; j < 3; j++) {
                e = &arg0->unk_00[i].unk_10[j];
                if (e->unk_90 != -1 || e->unk_94 != -1) {
                    e->v1(arg1);
                }
            }
        } else {
            func_0899D9BC(arg0, i);
        }
    }
}

}
