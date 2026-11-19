#include "common.h"

typedef struct Unk_0880E13C Unk_0880E13C;
struct Unk_0880E13C {
    u8 *unk_00;
};

void func_0880E1D4(Unk_0880E13C *, s32);
extern u8 D_08A44668[];

Unk_0880E13C *func_0880F0D0(Unk_0880E13C *arg0, s32 arg1) {
    func_0880E1D4(arg0, arg1);
    arg0->unk_00 = D_08A44668;
    return arg0;
}
