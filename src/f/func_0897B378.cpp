#include "common.h"

extern "C" {

struct T {
    virtual void unk_08();
    virtual void unk_0C(void *, s32, s32);
};

struct Unk0 {
    s32 unk_00;
    s32 unk_04;
};

struct Unk3 {
    u8 pad_00[4];
    T *unk_04;
};

s32 func_0897B378(Unk0 *arg0, void *arg1, void *arg2, Unk3 *arg3) {
    s32 temp4 = *(volatile s32 *)&arg0->unk_04;
    arg3->unk_04->unk_0C(arg2, arg0->unk_00, temp4);
    return 1;
}

}
