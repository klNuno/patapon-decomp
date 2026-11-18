#include "common.h"

extern "C" {

class C_089913F8 {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    u8 pad_04[0x3FC];
};

typedef struct {
    f32 unk_00[3];
} V_089913F8;

struct S_089913F8;

struct T_089913F8 {
    S_089913F8 *unk_00;
    V_089913F8 unk_04;

    void init(S_089913F8 *o, const V_089913F8 &v) { unk_00 = o; unk_04 = v; }
};

typedef struct S_089913F8 {
    s32 unk_00;
    u8 unk_04[0x4];
    u8 unk_08[0x8];
    s32 unk_10;
    u8 pad_14[0xC];
    C_089913F8 unk_20;
    u8 unk_420;
    u8 pad_421[0x3];
    T_089913F8 unk_424;
    u8 unk_434;
    u8 pad_435[0x3];
    s32 unk_438;
    s32 unk_43C;
    s32 unk_440;
    s32 unk_444;
    s32 unk_448;
    s32 unk_44C;
    s32 unk_450;
    u8 unk_454;
} S_089913F8;

extern f32 D_08A06728[];
extern f32 D_08A06730[];
extern f32 D_08A06734[];

s32 func_08979434(void *);
void func_0893F380(void *);
void func_0898C4D8(void *, void *, s32);
void func_0881F5C0(void *, s32, s32);

S_089913F8 *func_089913F8(S_089913F8 *arg0, void *arg1) {
    V_089913F8 temp;

    arg0->unk_00 = func_08979434(arg1);
    func_0893F380(arg0->unk_04);
    arg0->unk_10 = 0;
    func_0898C4D8(&arg0->unk_20, arg1, 0x20);
    arg0->unk_420 = 0;
    temp.unk_00[0] = D_08A06728[1];
    temp.unk_00[1] = D_08A06730[0];
    temp.unk_00[2] = D_08A06734[0];
    arg0->unk_424.init(arg0, temp);
    arg0->unk_434 = 0;
    arg0->unk_438 = 0;
    arg0->unk_43C = 0;
    arg0->unk_440 = 0;
    arg0->unk_444 = 0;
    arg0->unk_448 = 0;
    arg0->unk_44C = 0;
    arg0->unk_450 = 0;
    arg0->unk_454 = 1;
    func_0881F5C0(arg0->unk_08, 0, 8);
    arg0->unk_20.v11();
    arg0->unk_20.v17();
    return arg0;
}

}
