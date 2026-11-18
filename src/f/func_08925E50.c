#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    u8 unk_20[0x2C];
} E08925E50;

typedef struct {
    u8 pad_00[0x264];
    E08925E50 *unk_264;
    s32 unk_268;
} T08925E50;

void func_088F47B0(void *, s32);
s32 func_088804C0(E08925E50 *, s32);

void func_08925E50(T08925E50 *arg0) {
    E08925E50 *var_s2;
    E08925E50 **var_s1;
    s32 *var_s0;

    var_s2 = arg0->unk_264;
    var_s1 = &arg0->unk_264;
    if ((u32)var_s2 != (u32)(var_s2 + arg0->unk_268)) {
        var_s0 = &arg0->unk_268;
        do {
            if (var_s2 != NULL) {
                func_088F47B0(var_s2->unk_20, -1);
                func_088804C0(var_s2, -1);
            }
            var_s2++;
        } while (var_s2 != *var_s1 + *var_s0);
    }
    arg0->unk_268 = 0;
}
