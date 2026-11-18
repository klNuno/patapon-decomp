#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
} UnkPair;

class UnkVirtual {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, f32, f32, void *, void *);
    virtual void unk_18(s32);
};

class UnkInner : public UnkVirtual {
public:
    u8 pad_04[0x60];
    s32 unk_64;
    s32 unk_68;
    u8 pad_6C[0x654];
    f32 unk_6C0;
    f32 unk_6C4;
    f32 unk_6C8;
    f32 unk_6CC;
};

typedef struct {
    u8 pad_00[0x6E0];
    UnkInner *unk_6E0;
    u8 pad_6E4[0x1CC];
    u8 unk_8B0[0x14];
    s32 unk_8C4;
    u8 pad_8C8[0x1C];
    s32 unk_8E4;
    u8 pad_8E8[5];
    u8 unk_8ED;
} UnkObject;

void func_088D52D0(UnkObject *, f32);
void func_0892CDE8(UnkObject *, s32, s32, UnkPair *, u8, s32);

void func_088D4448(UnkObject *arg0, void *arg1, f32 arg2)
{
    UnkPair temp;
    UnkInner *temp2;
    f32 temp3;
    f32 temp4;

    if (arg1 != NULL) {
        func_088D52D0(arg0, arg2);
        arg0->unk_6E0->unk_14(arg0->unk_8C4, 0.0f, 0.0f, arg0->unk_8B0, arg1);
        arg0->unk_6E0->unk_18(0);
        arg0->unk_8E4 = 0;
        temp2 = arg0->unk_6E0;
        temp3 = temp2->unk_6C8 - temp2->unk_6C0;
        temp4 = temp2->unk_6CC - temp2->unk_6C4;
        temp.unk_00 = 24.0f + temp3;
        temp.unk_04 = temp4;
        func_0892CDE8(arg0, temp2->unk_68, temp2->unk_64, &temp, arg0->unk_8ED, -1);
        arg0->unk_8ED = 0;
    }
}

}
