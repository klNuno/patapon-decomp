#include "common.h"

extern s32 func_0881F120(s32, s32, s32);
s32 func_0884BC00(s32, s32, u32, s32);

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[0x8];
    s32 unk_2C;
    u8 pad_30[0x4];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C[19];
    s32 *unk_88;
    u8 pad_8C[0x58];
    s32 unk_E4;
} T0895CB9C;

s32 func_0895CB9C(T0895CB9C *arg0) {
    s32 temp_s1;
    s32 var_v0;

    temp_s1 = arg0->unk_3C[arg0->unk_38];
    func_0881F120(temp_s1, arg0->unk_88[arg0->unk_2C], arg0->unk_20);
    var_v0 = func_0884BC00(arg0->unk_E4, temp_s1, arg0->unk_20, 1);
    if (var_v0 > 0) {
        var_v0 = var_v0 >> 2;
    }
    if (var_v0 >= 0) {
        arg0->unk_34 = arg0->unk_34 + var_v0;
        return 1;
    }
    return 0;
}
