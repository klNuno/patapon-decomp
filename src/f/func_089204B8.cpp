#include "common.h"

extern "C" {
void func_08855354(char *);
void func_08865EE0(void *);
void func_08865FE4(void *, s32);
void func_0892081C(void *);
void func_089457D8(void *);
extern u8 D_08A46C84[];

class T {
    u8 pad_00[0x80];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

struct S {
    u8 pad_00[0x28];
    void *unk_28;
    s32 unk_2C;
    T unk_30;
    u8 pad_B4[0xC];
    u8 unk_C0[0x10];
    char unk_D0[0x40];
    u8 unk_110[0x90];
    s32 unk_1A0;
};

struct E {};

static inline void func_089204B8_0(T *arg0, const E &) {
    arg0->unk_14(0, 1);
}

void *func_089204B8(S *arg0) {
    func_0892081C(arg0);
    arg0->unk_28 = D_08A46C84;
    func_089457D8(arg0->unk_C0);
    func_08855354(arg0->unk_D0);
    func_08865EE0(arg0->unk_110);
    arg0->unk_1A0 = 0;
    func_08865FE4(&arg0->unk_30, arg0->unk_2C);
    func_089204B8_0(&arg0->unk_30, E());
    return arg0;
}
}
