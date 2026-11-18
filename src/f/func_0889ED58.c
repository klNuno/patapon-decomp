#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} B_0889ED58;

typedef struct {
    u8 pad_00[0x20];
    s32 (**unk_20)(s32, s32, B_0889ED58 *);
} A_0889ED58;

u8 func_0889EDF0(s32, s32, B_0889ED58 *);

s32 func_0889ED58(A_0889ED58 *arg0, s32 arg1, s32 arg2, B_0889ED58 *arg3) {
    s32 i;

    i = 0;
    if (arg3 != NULL) {
        i = arg3->unk_04;
    }
    if (func_0889EDF0(arg1, arg2, arg3) != 0) {
        return 1;
    }
    return arg0->unk_20[i](arg1, arg2, arg3);
}
