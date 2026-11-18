#include "common.h"

extern "C" {

struct A088DE2E4_Base {
    u8 pad_00[0x28];
};

struct A088DE2E4 : A088DE2E4_Base {
    virtual void v0();
    virtual void v1();
};

struct B088DE2E4_Base {
    u8 pad_00[0x91C];
};

struct B088DE2E4 : B088DE2E4_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

struct C088DE2E4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

typedef struct {
    u8 pad_00[0x8494];
    B088DE2E4 *unk_8494;
} P088DE2E4;

typedef struct N088DE2E4 {
    struct N088DE2E4 *unk_00;
    u8 pad_04[0x8];
    P088DE2E4 *unk_0C;
} N088DE2E4;

struct It088DE2E4 {
    N088DE2E4 *unk_00;
    int eq(N088DE2E4 *o) const { return unk_00 == o; }
    bool ne(N088DE2E4 *o) const { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0x1040];
    A088DE2E4 unk_1040;
    u8 pad_106C[0x28C60 - 0x106C];
    C088DE2E4 unk_28C60;
    u8 pad_28C64[0x2DAC0 - 0x28C64];
    C088DE2E4 unk_2DAC0;
    u8 pad_2DAC4[0x506F0 - 0x2DAC4];
    u8 unk_506F0[0x87280 - 0x506F0];
    u8 unk_87280[0x13A16C - 0x87280];
    B088DE2E4 *unk_13A16C;
    u8 pad_13A170[0x1C7504 - 0x13A170];
    N088DE2E4 unk_1C7504;
} T088DE2E4;

s32 func_088C6494(void *);
void func_08864FC0(s32);
void func_088C63DC(void *);
void func_088DDE78(T088DE2E4 *);
void func_089AE514(void *);
void func_088DEC6C(T088DE2E4 *);

void func_088DE2E4(T088DE2E4 *arg0) {
    It088DE2E4 it;
    N088DE2E4 *end;

    func_08864FC0(func_088C6494(arg0->unk_506F0));
    func_088C63DC(arg0->unk_506F0);
    arg0->unk_1040.v1();
    func_088DDE78(arg0);
    arg0->unk_13A16C->v4();
    it.unk_00 = arg0->unk_1C7504.unk_00;
    end = &arg0->unk_1C7504;
    while (it.ne(end)) {
        it.unk_00->unk_0C->unk_8494->v4();
        it.unk_00 = it.unk_00->unk_00;
    }
    func_089AE514(arg0->unk_87280);
    arg0->unk_28C60.v3();
    arg0->unk_2DAC0.v3();
    func_088DEC6C(arg0);
}

}
