#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
} S_088CE840;

class T {
public:
    u8 pad_00[0x50];
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
};

extern u8 D_08A460B0[];
void func_0886E47C(void *, s32, void *, s32, s32);
void func_0886F33C(S_088CE840 *, s32, s32);

S_088CE840 *func_088CE5F0(S_088CE840 *arg0, s32 arg1, void *arg2) {
    func_0886E47C(arg0, arg1, arg2, 0, -1);
    arg0->unk_50 = D_08A460B0;
    func_0886F33C(arg0, 0, 3);
    ((T *)arg0)->unk_44();
    return arg0;
}

}
