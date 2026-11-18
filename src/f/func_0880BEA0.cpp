#include "common.h"

extern "C" {

class V {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2(s32, s32);
};

typedef struct {
    void *unk_00;
    u8 pad_04[0x20];
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[0xC];
    s32 unk_38;
    u8 pad_3C[0xC];
    u8 unk_48;
    u8 pad_49[1];
    u8 unk_4A;
    u8 unk_4B;
    u8 unk_4C;
} S0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} S1;

extern u8 D_08A445D8[];

void func_0880644C(S1 *, s32);
void func_08809BB4(S0 *);
void func_0880AE84(S1 *, S0 *);
void func_0880AEA0(S0 *);
void func_0880BF44(S0 *, S1 *);

S0 *func_0880BEA0(S0 *arg0, s32 arg1) {
    S1 sp18;

    func_0880AEA0(arg0);
    arg0->unk_00 = D_08A445D8;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_38 = 0;
    arg0->unk_48 = 0;
    arg0->unk_4A = arg1 != 0;
    arg0->unk_4B = 0;
    arg0->unk_4C = 0;
    func_08809BB4(arg0);
    func_0880AE84(&sp18, arg0);
    func_0880BF44(arg0, &sp18);
    func_0880644C(&sp18, -1);
    ((V *)arg0)->f2(0, arg1);
    return arg0;
}

}
