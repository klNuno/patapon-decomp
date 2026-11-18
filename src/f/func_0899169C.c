#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05[0xB];
    s32 unk_10;
    u8 pad_14[0x42C];
    s32 unk_440;
    f32 unk_444;
    f32 unk_448;
    f32 unk_44C;
    s32 unk_450;
    u8 unk_454;
} A;

extern u8 *D_08AD1E28[];
void func_0893F4C0(void *, void *, s32, s32, s32);
s32 func_08868E8C(u8 *arg0, s32 arg1, s32 arg2);

void func_0899169C(A *arg0, void *arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    func_0893F4C0(&arg0->unk_04, arg1, 0x4000, 0x10, 0x200);
    arg0->unk_440 = 0;
    arg0->unk_444 = arg3;
    arg0->unk_448 = arg4;
    arg0->unk_44C = arg5;
    arg0->unk_10 = 0;
    if (arg2 != 0) {
        arg0->unk_450 = *(s32 *)func_08868E8C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 3, arg2);
    } else {
        arg0->unk_450 = 0;
    }
    arg0->unk_454 = 0;
}
