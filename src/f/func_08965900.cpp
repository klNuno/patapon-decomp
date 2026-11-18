#include "common.h"

extern "C" {

extern s32 D_08A04EA0[];

class V {
    u8 pad_00[0x10];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual s32 unk_48(void *);
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    s32 unk_20;
} T;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} U;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[4];
    s32 unk_3C;
    u8 unk_40[1];
} S;

typedef struct {
    u8 pad_00[0x40];
    V *unk_40;
} W;

s32 func_08965900(T *arg0, U *arg1, S *arg2, W *arg3)
{
    V *temp;
    f32 temp2;
    f32 temp3;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0.0f;
    arg0->unk_14 = 0.0f;
    arg0->unk_18 = 0.0f;
    arg0->unk_1C = 0.0f;
    arg0->unk_20 = -1;
    if (arg2->unk_3C < 0) {
        arg2->unk_3C = 11;
    }
    arg0->unk_00 = D_08A04EA0[arg2->unk_3C];
    arg0->unk_04 = arg2->unk_3C;
    arg0->unk_08 = arg1->unk_20;
    arg0->unk_0C = arg2->unk_24;
    arg0->unk_10 = 0.0f;
    arg0->unk_14 = 0.0f;
    arg0->unk_18 = 1.0f;
    arg0->unk_1C = 1.0f;
    arg0->unk_20 = 0;
    if (arg2 != NULL) {
        temp2 = arg2->unk_2C;
        temp3 = arg2->unk_28;
        arg0->unk_10 = temp3;
        arg0->unk_14 = temp2;
        temp2 = arg2->unk_34;
        temp3 = arg2->unk_30;
        arg0->unk_18 = temp3;
        arg0->unk_1C = temp2;
        if (arg3 != NULL) {
            temp = arg3->unk_40;
            if (temp != NULL) {
                arg0->unk_20 = temp->unk_48(arg2->unk_40);
            }
        }
    }
    return 0;
}

}
