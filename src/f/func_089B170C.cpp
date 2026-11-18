#include "common.h"

#pragma divbyzerocheck on

extern "C" {

class C089B170C_O {
public:
    u8 pad_00[0x58];
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
    virtual void v34(s32);
};

typedef struct {
    C089B170C_O *unk_00;
    u8 pad_04[0x4];
    u32 unk_08;
    s32 unk_0C;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    s32 unk_1C;
} T089B170C;

extern s32 D_08A08550[];

inline const s32 &max089B170C(const s32 &a, const s32 &b) {
    return (a < b) ? b : a;
}

inline const s32 &min089B170C(const s32 &a, const s32 &b) {
    return (b < a) ? b : a;
}

void func_089B170C(T089B170C *arg0, u32 arg1) {
    if (arg0->unk_08 == 0) {
        arg0->unk_14 = 0;
        arg0->unk_10 = 0;
        arg0->unk_18 = 0;
        arg0->unk_1C = 0;
        return;
    }
    arg0->unk_18 = arg1;
    arg0->unk_10 = arg1 % arg0->unk_08;
    arg1 = arg0->unk_18 / arg0->unk_08;
    arg0->unk_14 = arg1;
    arg0->unk_1C = max089B170C(D_08A08550[0], arg1 - arg0->unk_0C + 3);
    arg0->unk_1C = min089B170C(0x21 - arg0->unk_0C, arg0->unk_1C);
    arg0->unk_00->v34(arg0->unk_18);
}

}
