#include "common.h"

extern "C" {

s32 func_089A1248(char *arg0);

class UnkVirtual {
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
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual u8 unk_58(void *);
};

typedef struct {
    u8 pad_00[0xC];
    char unk_0C[1];
    u8 pad_0D[0xF1C];
    u8 unk_F29;
    u8 pad_F2A[0x6E];
    s32 unk_F98;
} UnkObject;

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
    f32 unk_10;
    u8 pad_14[0x14];
} UnkLocal;

f32 func_0899A934(UnkObject *arg0)
{
    f32 temp;
    u32 *temp3;
    UnkLocal temp2;

    if (arg0->unk_F98 == 0) {
        return 25.0f;
    }
    if (arg0->unk_F29 != 0) {
        return 25.0f;
    }
    if (func_089A1248(arg0->unk_0C) == 0) {
        return 25.0f;
    }
    if (((UnkVirtual *)func_089A1248(arg0->unk_0C))->unk_58(&temp2) == 0) {
        return 25.0f;
    }
    temp3 = (u32 *)&temp;
    temp = temp2.unk_00 - temp2.unk_10;
    *(u32 *)&temp &= 0x7FFFFFFF;
    return *(f32 *&)temp3;
}

}
