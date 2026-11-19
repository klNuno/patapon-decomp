#include "common.h"

extern "C" {

class T {
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
    virtual s32 unk_48(s32);
};

typedef struct {
    u8 pad_00[0x40];
    T *unk_40;
    u8 pad_44[8];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[8];
    u8 unk_60;
} S;

typedef struct {
    u8 pad_00[0x40];
} M_08933578;

void func_088554A0(M_08933578 *, M_08933578 *, M_08933578 *);
void func_0893E420(void *, M_08933578 *, s32, s32, s32);

void func_08866464(M_08933578 *arg0, S *arg1, s32 arg2) {
    M_08933578 temp;
    s32 temp2 = arg1->unk_40->unk_48(arg2);
    if (temp2 >= 0) {
        func_0893E420(&arg1->unk_60, &temp, temp2, arg1->unk_4C, (s32)arg1->unk_54);
    }
    func_088554A0(arg0, (M_08933578 *)arg1, &temp);
}

}
