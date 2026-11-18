#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
} T1;

class T2 {
public:
    u8 pad_00[0x16C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual T1 *unk_10();
};

typedef struct {
    T2 *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[4];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
} T3;

struct T4 {};


extern "C" {

void func_0892C7B8(s32, s32);
void func_089334D4(void *, s32);
void func_0892C130(T2 *);
void func_0892C1C4(T2 *);
void func_0892C14C(s32, f32, f32);

static inline void func_089D46FC_inline(T3 *arg0, const T4 &) {
    arg0->unk_0C = 0;
    arg0->unk_08 = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    func_0892C7B8((s32)arg0->unk_00, 0);
    func_089334D4(arg0->unk_00 + 1, 0);
    func_0892C130(arg0->unk_00);
    func_0892C1C4(arg0->unk_00);
    func_0892C14C((s32)arg0->unk_00, 0.8f, 0.8f);
    arg0->unk_28 = 1;
    arg0->unk_08 = arg0->unk_00->unk_10()->unk_30;
    arg0->unk_0C = arg0->unk_00->unk_10()->unk_34;
}

void func_089D46FC(T3 *arg0) {
    func_089D46FC_inline(arg0, T4());
}


}
