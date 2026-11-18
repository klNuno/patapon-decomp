#include "common.h"

extern "C" {

class B_0890B47C {
public:
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1C();
    virtual void vf_20();
    virtual void vf_24();
    virtual void vf_28();
    virtual void vf_2C();
    virtual void vf_30();
    virtual void vf_34();
    virtual void vf_38();
    virtual void vf_3C();
    virtual void vf_40(s32 *, s32);
};

typedef struct {
    u8 pad_00[0xD90];
    u8 unk_D90[0x10];
    u8 unk_DA0[0x7E268];
    u8 unk_7F008[0xEE028];
    s32 unk_16D030;
    s32 unk_16D034;
    u8 pad_16D038[0x18];
    u8 unk_16D050;
} T0890B47C;

void func_0881F5C0(void *, s32, s32);
void func_0890B580(T0890B47C *, s32, s32);
void func_0890B648(T0890B47C *);
void func_0890D9D8(u8 *, s32, s32);
void func_0890B0A8(u8 *, s32);

void func_0890B47C(T0890B47C *arg0, s32 arg1, s32 arg2) {
    s32 temp;

    temp = arg1;
    ((B_0890B47C *)arg0)->vf_40(&temp, 0);
    func_0881F5C0(arg0->unk_D90, 0, 0x10);
    arg0->unk_16D030 = 0;
    arg0->unk_16D034 = 0;
    func_0890B580(arg0, 0, 8);
    func_0890B648(arg0);
    arg0->unk_16D050 = 0;
    func_0890D9D8(arg0->unk_DA0, arg1, arg2);
    func_0890B0A8(arg0->unk_7F008, arg2);
}

}
