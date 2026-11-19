#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(u32);
};

class U {
public:
    void unk_00();
};

typedef struct S_089CE450 S_089CE450;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 unk_0C[0x121C4];
    U *unk_121D0;
    void (U::*unk_121D4)();
    u8 unk_121E0;
    u8 pad_121E1[3];
    f32 unk_121E4;
    f32 unk_121E8;
    U *unk_121EC;
    void (U::*unk_121F0)();
    u8 unk_121FC;
    u8 pad_121FD[3];
    f32 unk_12200;
    f32 unk_12204;
} S;

s32 func_089CE590(S_089CE450 *);
void func_089D26F8(S *, u32);
void func_089D3B5C(char *arg0, s32 arg1);

void func_089D2B04(S *arg0, u32 arg1) {
    f32 temp;
    f32 temp2;
    const f32 *temp3;

    switch (arg0->unk_08) {
    case 3:
        func_089D26F8(arg0, arg1);
        break;
    case 4:
        if (func_089CE590((S_089CE450 *)arg0->unk_0C) == 0) {
            func_089D3B5C((char *)arg0, 1);
            arg0->unk_121E4 = 0.0f;
            arg0->unk_121E8 = 0.4f;
            arg0->unk_121E0 = 1;
            arg0->unk_121FC = 0;
        }
        break;
    case 0:
    case 1:
    case 2:
    case 5:
    default:
        break;
    }
    if (arg0->unk_121E0 == 1) {
        temp = arg0->unk_121E4 + (f32)arg1 / 4800.0f;
        temp3 = temp < arg0->unk_121E8 ? &temp : &arg0->unk_121E8;
        arg0->unk_121E4 = *temp3;
        if (arg0->unk_121E4 >= arg0->unk_121E8 && arg0->unk_121D4 != NULL) {
            (arg0->unk_121D0->*arg0->unk_121D4)();
        }
    }
    if (arg0->unk_121FC == 1) {
        temp2 = arg0->unk_12200 + (f32)arg1 / 4800.0f;
        temp3 = temp2 < arg0->unk_12204 ? &temp2 : &arg0->unk_12204;
        arg0->unk_12200 = *temp3;
        if (arg0->unk_12200 >= arg0->unk_12204 && arg0->unk_121F0 != NULL) {
            (arg0->unk_121EC->*arg0->unk_121F0)();
        }
    }
    ((T *)arg0->unk_0C)->unk_14(arg1);
}

}
