#include "common.h"

extern "C" {

class C_0889C96C {
public:
    u8 pad_00[0x10];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual u32 v20();
};

class B_0889C96C {
public:
    u8 pad_00[0x40];
    C_0889C96C *unk_40;
    u8 pad_44[0x8];
    s32 unk_4C;
    u8 pad_50[0x30];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32, s32);
};

struct A_0889C96C {
    u8 pad_00[0x50];
    s32 unk_50;
    f32 unk_54;
    u8 pad_58[0x4];
    f32 unk_5C;
    u8 pad_60[0x80];
    s32 unk_E0;
    u8 pad_E4[0x328];
    s32 unk_40C;
    u8 pad_410[0x1AC];
    u8 unk_5BC;
    bool ready() {
        return unk_5C <= unk_54 && !unk_50;
    }
};

s32 func_0885A680(void);
s32 func_0889DAA8(A_0889C96C *, s32, s32);

s32 func_0889C96C(A_0889C96C *arg0, B_0889C96C *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 x;

    x = arg1->unk_4C;
    if (arg5 != 0 || arg0->ready() || (func_0889DAA8(arg0, arg0->unk_40C, arg3) != 0 && x != arg2)) {
        if (arg3 == 3) {
            arg0->unk_E0 = func_0885A680();
        }
        arg0->unk_5BC = 1;
        if (arg1->unk_40 != NULL) {
            if (arg2 < 0 || !((u32)arg2 < arg1->unk_40->v20())) {
                return 0;
            }
        }
        arg1->v14(arg2, arg4);
        return 1;
    }
    return 0;
}

}
