#include "common.h"

typedef struct Unk_0880E13C {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    void *unk_0C;
    void *unk_10;
    s8 unk_14;
} Unk_0880E13C;

s32 func_0880E1C8(void);
void func_0880E1D4(Unk_0880E13C *, s32);
extern u8 D_089F64A8[];
extern u8 D_089F65A8[];
extern u8 D_08A446F4[];

Unk_0880E13C *func_0880E13C(Unk_0880E13C *arg0, s32 arg1, s8 arg2, s32 arg3) {
    func_0880E1D4(arg0, arg3);
    arg0->unk_00 = D_08A446F4;
    arg0->unk_08 = arg1;
    arg0->unk_0C = D_089F64A8;
    arg0->unk_10 = D_089F65A8;
    arg0->unk_14 = arg2;
    if (arg0->unk_08 == 0) {
        arg0->unk_08 = func_0880E1C8();
        arg0->unk_14 = 0;
    }
    return arg0;
}
