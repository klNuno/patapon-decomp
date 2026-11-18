#include "common.h"

class T089B3450 {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
};

struct T1 : T089B3450 {
    u8 pad_5C[0x178];
    u8 unk_1D4[0x102C];
    f32 unk_1200;
    f32 unk_1204;
};

extern "C" {

extern f32 D_08A08570[];
f32 func_0881A1E0(f32);
void func_089B3450(T089B3450 *arg0, s32 arg1, s32 arg2);
void func_089B13DC(void *, s32, s32, s32);

void func_089B1D10(T1 *arg0, s32 arg1, s32 arg2) {
    f32 temp;
    f32 *p;
    func_089B3450(arg0, arg1, arg2);
    if ((u8)arg0->unk_1C() != 0) {
        temp = 0.05f + arg0->unk_1204;
        if (D_08A08570[0] < temp) {
            p = D_08A08570;
        } else {
            p = &temp;
        }
        arg0->unk_1204 = *p;
        if (arg0->unk_1204 >= 1.0f) {
            arg0->unk_1204 = 0.0f;
        }
        arg0->unk_1200 = 0.5f * func_0881A1E0(3.1415927f * (180.0f * arg0->unk_1204) / 180.0f);
        func_089B13DC(&arg0->unk_1D4, arg1, arg2, 0);
    }
}

}
