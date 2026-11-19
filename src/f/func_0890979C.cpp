#include "common.h"

struct V {
    f32 unk_00;
    f32 unk_04;
};

class T {
public:
    V unk_00;
    u8 pad_08[8];
    T *unk_10;
    s32 unk_14;
    u8 pad_18[8];
    s32 unk_20;
    s32 unk_24;
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual V *func_28();
};

struct T2 {
    V unk_00;
    u8 pad_08[8];
    T *unk_10;
    s32 unk_14;
    u8 pad_18[8];
    s32 unk_20;
    s32 unk_24;
    void *unk_28;
};

extern "C" {
extern u8 D_08A468AC[];

T2 *func_0890979C(T2 *arg0, T *arg1) {
    V *temp;

    arg0->unk_28 = D_08A468AC;
    arg0->unk_10 = arg1;
    arg0->unk_14 = 0;
    arg0->unk_20 = -1;
    arg0->unk_24 = 0;
    ((T *)arg0)->func_0C();
    temp = arg1->func_28();
    arg0->unk_00 = *temp;
    return arg0;
}
}
