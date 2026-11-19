#include "common.h"

extern "C" {
class T {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32, s32, s32, s32);
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
    virtual void unk_38(u32);
};

class U {
public:
    void unk_00();
};

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x1C];
    u8 unk_20[0x400];
    u8 unk_420;
    u8 pad_421[3];
    U *unk_424;
    void (U::*unk_428)();
    u8 unk_434;
    u8 pad_435[3];
    f32 unk_438;
    f32 unk_43C;
    s32 unk_440;
    u8 pad_444[4];
    f32 unk_448;
    f32 unk_44C;
    s32 unk_450;
    u8 unk_454;
} S;

typedef struct {
    u8 pad_00[0x321C8];
    u64 unk_321C8;
} G2;

typedef struct {
    u8 pad_00[0x1498];
    G2 *unk_1498;
} G1;

typedef struct {
    u8 pad_00[0x42820];
    G1 *unk_42820;
} G;

extern void *D_08AD1E28[];
f32 func_0893F5C4(void *);
s32 func_0893F590(void *);
void func_0893F4EC(void *);

inline void func_08991748_1(S *arg0) {
    f32 temp = arg0->unk_44C;
    arg0->unk_438 = 0.0f;
    arg0->unk_43C = temp;
    arg0->unk_434 = 1;
    arg0->unk_440 = 3;
}

void func_08991748(S *arg0, u32 arg1) {
    f32 temp;
    f32 temp2;
    s32 temp3;
    G *temp4;
    const f32 *temp5;

    temp = arg0->unk_448;
    if (func_0893F5C4(arg0->unk_04) >= temp && temp >= 0.0f && arg0->unk_440 == 2) {
        func_08991748_1(arg0);
    }
    temp3 = arg0->unk_450;
    if (temp3 != 0) {
        if (arg0->unk_440 != 0 && arg0->unk_420 == 0) {
            ((T *)arg0->unk_20)->unk_0C(temp3, 0, 1, 1, -1);
            arg0->unk_420 = 1;
        }
        ((T *)arg0->unk_20)->unk_38(arg1);
    }
    if (func_0893F590(arg0->unk_04) == 3) {
        if (arg0->unk_448 <= 0.0f && arg0->unk_440 == 2) {
            func_08991748_1(arg0);
        }
        if (arg0->unk_440 == 4) {
            func_0893F4EC(arg0->unk_04);
            arg0->unk_440 = 5;
        }
    } else if (arg0->unk_454 && arg0->unk_440 == 4) {
        func_0893F4EC(arg0->unk_04);
        arg0->unk_440 = 5;
    }
    temp4 = (G *)D_08AD1E28[0];
    temp4 = temp4 != NULL ? temp4 : NULL;
    temp4->unk_42820->unk_1498->unk_321C8 += arg1;
    if (arg0->unk_434 == 1) {
        temp2 = arg0->unk_438 + (f32)arg1 / 4800.0f;
        temp5 = temp2 < arg0->unk_43C ? &temp2 : &arg0->unk_43C;
        arg0->unk_438 = *temp5;
        if (arg0->unk_438 >= arg0->unk_43C && arg0->unk_428 != NULL) {
            (arg0->unk_424->*arg0->unk_428)();
        }
    }
}
}
