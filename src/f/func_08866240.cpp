#include "common.h"

extern "C" {

class C {
public:
    u8 pad_00[0x10];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual u32 v6();
    virtual f32 v7(u32);
    virtual void v8();
    virtual void v9();
    virtual void v10(u32);
};

typedef struct {
    u8 pad_00[0x40];
    C *unk_40;
    u8 pad_44[8];
    u32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
} T;

void func_08866240(T *arg0, u32 arg1, u8 arg2) {
    if (arg0->unk_40 != NULL && arg1 < arg0->unk_40->v6()) {
        arg0->unk_4C = arg1;
        arg0->unk_50 = arg2;
        arg0->unk_40->v10(arg1);
        arg0->unk_5C = arg0->unk_40->v7(arg1);
        arg0->unk_54 = 0;
    }
}

}
