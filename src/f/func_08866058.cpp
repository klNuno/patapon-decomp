#include "common.h"

extern "C" {

class UnkVirtual {
public:
    s32 unk_00;
    u8 pad_04[0xC];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual f32 unk_28(s32);
};

typedef struct {
    u8 pad_00[0x40];
    UnkVirtual *unk_40;
    u8 pad_44[8];
    s32 unk_4C;
    s32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    u8 unk_60[1];
} UnkObject;

void func_0893E4E4(void *, s32, s32);
f32 func_08866564(u32, u32, f32);

void func_08866058(UnkObject *arg0, u32 arg1)
{
    UnkVirtual *temp = arg0->unk_40;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    if (temp != NULL && temp->unk_00 != 0) {
        func_0893E4E4(arg0->unk_60, arg0->unk_4C, (s32)arg0->unk_54);
        temp2 = arg0->unk_40->unk_28(arg0->unk_4C);
        temp3 = temp2 * func_08866564(arg1, 4800, 1.0f);
        arg0->unk_54 = arg0->unk_54 + temp3;
        temp4 = arg0->unk_5C;
        if (temp4 < *(volatile f32 *)&arg0->unk_54) {
            if (arg0->unk_50 != 0) {
                arg0->unk_54 = arg0->unk_58;
            } else {
                arg0->unk_54 = temp4;
            }
        }
    }
}

}
