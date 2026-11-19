#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(V2 *, V2 *, f32);
};

typedef struct {
    u8 pad_00[0x1550];
    u8 unk_1550[0x170];
    V unk_16C0;
    u8 pad_16C4[0x6CC];
    u8 unk_1D90;
} T;

extern u8 D_08A01A98[];
void func_08885980(void *, s32, s32, void *);

void func_0891F1F0(T *arg0)
{
    V2 temp;
    V2 temp1;

    if (arg0->unk_1D90 != 0) {
        func_08885980(arg0->unk_1550, 5, 1, D_08A01A98);
    } else {
        temp1.unk_00 = 1.0f;
        temp1.unk_04 = 1.0f;
        temp.unk_00 = 240.0f;
        temp.unk_04 = 136.0f;
        arg0->unk_16C0.unk_1C(&temp, &temp1, 1.0f);
    }
}
}
