#include "common.h"

extern "C" {

class B_088F9418 {
public:
    u8 pad_00[0x28];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32);
};

class D_088F9418 : public B_088F9418 {
public:
    u8 pad_2C[0x3E0 - 0x2C];
    s32 unk_3E0;
    u8 pad_3E4[0x3F0 - 0x3E4];
    u8 unk_3F0[0x500 - 0x3F0];
    s32 unk_500;
    u8 unk_504[0x548 - 0x504];
    u8 *unk_548;
    s32 unk_54C;
    u8 unk_550[0x5D4 - 0x550];
    u8 *unk_5D4;
    s32 unk_5D8;
    s32 unk_5DC;
    u8 unk_5E0;
    u8 pad_5E1[0x5E8 - 0x5E1];
    s32 unk_5E8;
    s32 unk_5EC;
};

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} A_088F9418;

void func_088E4894(D_088F9418 *, s32, A_088F9418 *);
void func_0890A09C(void *, D_088F9418 *);
extern u8 D_08A46744[];

struct T {};
static inline void func_088F9418_1(D_088F9418 *arg0, s32 arg1, A_088F9418 *arg2, const T &) {
    func_088E4894(arg0, arg1, arg2);
}

D_088F9418 *func_088F9418(D_088F9418 *arg0, s32 arg1, A_088F9418 *arg2) {
    func_088F9418_1(arg0, arg1, arg2, T());
    *(void **)&arg0->pad_00[0x28] = D_08A46744;
    arg0->unk_3E0 = -1;
    func_0890A09C(arg0->unk_3F0, arg0);
    arg0->unk_500 = -1;
    arg0->unk_548 = (u8 *)((((u32)arg0 + 0x504) & 3) + (u32)arg0 + 0x504);
    arg0->unk_54C = 0;
    arg0->unk_5D4 = (u8 *)((((u32)arg0 + 0x550) & 3) + (u32)arg0 + 0x550);
    arg0->unk_5D8 = 0;
    arg0->unk_5DC = -1;
    arg0->unk_5E0 = 0;
    arg0->unk_5E8 = 0;
    arg0->unk_5EC = 0;
    arg0->v3(arg2->unk_68);
    return arg0;
}

}
