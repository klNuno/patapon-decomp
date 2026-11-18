#include "common.h"

extern "C" {

struct V0_088E5150 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct RC_088E5150 {
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

typedef struct {
    s32 unk_00;
    V0_088E5150 *unk_04;
    s32 unk_08;
    RC_088E5150 unk_0C;
} H_088E5150;

typedef struct {
    u8 pad_00[0x90];
} C_088E5150;

typedef struct {
    u8 pad_00[0x20];
    s8 unk_20[0x20];
    s8 unk_40[0x10];
    s8 unk_50[0x10];
    s16 unk_60;
} E_088E5150;

class S_088E5150 {
public:
    u8 pad_00[0x28];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    u8 pad_2C[0xB8];
    s32 unk_E4;
    s32 unk_E8;
    u8 unk_EC;
    u8 pad_ED[0x3];
    C_088E5150 unk_F0[3];
    E_088E5150 *unk_2A0[3];
    s32 unk_2AC;
    u8 pad_2B0[0x10];
    u8 unk_2C0[0xC];
    s32 unk_2CC;
};

void func_088E21D0(H_088E5150 *, s32, s8 *);
s32 func_0893AF70(s32, s8 *);
void func_08865FE4(C_088E5150 *, s32);
void func_0886A45C(s32, s32);
void func_0890AA84(void *, C_088E5150 *);
void func_0890AA8C(void *, s32, s32, s32);

void func_088E5150(S_088E5150 *arg0, s32 arg1) {
    H_088E5150 h;
    s8 *s;
    s32 idx;
    s32 old;

    if (arg0->unk_EC) {
        s = NULL;
        switch (arg1) {
        case 0:
            s = arg0->unk_2A0[arg0->unk_2AC]->unk_20;
            break;
        case 1:
            s = arg0->unk_2A0[arg0->unk_2AC]->unk_40;
            break;
        case 2:
            s = arg0->unk_2A0[arg0->unk_2AC]->unk_50;
            break;
        }
        if (*s == 0) {
            s = arg0->unk_2A0[arg0->unk_2AC]->unk_20;
        }
        idx = arg0->unk_2AC;
        if (arg0->unk_2A0[idx]->unk_60 != 0) {
            func_08865FE4(&arg0->unk_F0[idx], func_0893AF70(arg0->unk_E8, s));
        } else {
            func_088E21D0(&h, arg0->unk_E4, s);
            func_08865FE4(&arg0->unk_F0[arg0->unk_2AC], h.unk_08);
            if (h.unk_08 != 0) {
                RC_088E5150 *c = &h.unk_0C;
                if (c->release() == 0) {
                    h.unk_04->v0C(h.unk_08, *(s32 **)c, h.unk_00);
                    func_0886A45C(h.unk_08, h.unk_00);
                }
            }
        }
        func_0890AA84(arg0->unk_2C0, &arg0->unk_F0[arg0->unk_2AC]);
        if (arg1 == 0) {
            func_0890AA8C(arg0->unk_2C0, 0, 1, 1);
        } else {
            func_0890AA8C(arg0->unk_2C0, 0, 0, 0);
        }
    }
    old = arg0->unk_2CC;
    arg0->unk_2CC = arg1;
    if (arg1 != old) {
        arg0->v34();
    }
}

}
