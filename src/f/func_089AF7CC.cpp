#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} A;
typedef struct { u8 pad_00[0x11F8]; A *unk_11F8; } S;

class B {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20(s32);
};

extern s32 func_088586E8(void);
s32 func_089AF8FC(S *, s32);
s32 func_089B1314(s32);
s32 func_089B53D8(s32);
s8 *func_089B135C(s32);
extern s32 func_089B3620(s32, s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_089B05D0(s32, s32);
s32 func_089B0958(s32);

void func_089AF7CC(S *arg0, s32 arg1) {
    s32 temp3;
    s8 *temp4;
    A *temp5 = arg0->unk_11F8;
    A *&temp2 = arg0->unk_11F8;

    if (func_089AF8FC(arg0, func_089B1314(((A *)((u8 *)temp5 + arg1 * sizeof(A)))->unk_08)) != 0 &&
        *func_089B135C(((A *)((u8 *)temp2 + arg1 * sizeof(A)))->unk_08) > 0) {
        func_08878864(func_089B53D8(func_088586E8()), 0, 2, 1.0f, 0.0f, 0.0f);
        temp3 = func_089B3620((s32)arg0, 6);
        func_089B05D0(temp3, func_089B1314(((A *)((u8 *)temp2 + arg1 * sizeof(A)))->unk_08));
        temp4 = func_089B135C(((A *)((u8 *)temp2 + arg1 * sizeof(A)))->unk_08);
        --*temp4;
        if ((u8)func_089B0958(temp3) == 1) {
            ((B *)func_089B3620((s32)arg0, 7))->unk_20(1);
        }
    }
}
}
