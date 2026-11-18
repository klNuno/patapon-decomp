#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0xC];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual u8 unk_14(u32);
};

struct E {};

typedef struct {
    E *unk_00;
    void (E::*unk_04)();
    u8 unk_10;
    u8 pad_11[3];
    f32 unk_14, unk_18;
} U;

typedef struct {
    u8 pad_00[0x82C];
    U unk_82C, unk_848;
    u8 pad_864[0x38];
    u8 unk_89C;
} S;

s32 func_0891558C(S *);

void func_08914EB4(S *arg0, u32 arg1) {
    if (arg0->unk_89C == 1) {
        if (((T *)func_0891558C(arg0))->unk_14(arg1) == 1) {
            arg0->unk_89C = 0;
            arg0->unk_848.unk_14 = 0.0f;
            arg0->unk_848.unk_18 = 0.2f;
            arg0->unk_848.unk_10 = 1;
        }
    }
    if (arg0->unk_82C.unk_10 == 1) {
        f32 x = arg0->unk_82C.unk_14 + (f32)arg1 / 4800.0f;
        f32 *p = x < arg0->unk_82C.unk_18 ? &x : &arg0->unk_82C.unk_18;
        arg0->unk_82C.unk_14 = *p;
        if (arg0->unk_82C.unk_14 >= arg0->unk_82C.unk_18 && arg0->unk_82C.unk_04 != NULL) {
            (arg0->unk_82C.unk_00->*arg0->unk_82C.unk_04)();
        }
    }
    if (arg0->unk_848.unk_10 == 1) {
        f32 x = arg0->unk_848.unk_14 + (f32)arg1 / 4800.0f;
        f32 *p = x < arg0->unk_848.unk_18 ? &x : &arg0->unk_848.unk_18;
        arg0->unk_848.unk_14 = *p;
        if (arg0->unk_848.unk_14 >= arg0->unk_848.unk_18 && arg0->unk_848.unk_04 != NULL) {
            (arg0->unk_848.unk_00->*arg0->unk_848.unk_04)();
        }
    }
}

}
