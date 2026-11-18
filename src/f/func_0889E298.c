#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} Arg3_0889E298;

typedef u8 (*Fn_0889E298)(void *, void *, Arg3_0889E298 *, s32);

typedef struct {
    u8 pad_00[0x18];
    Fn_0889E298 *unk_18;
} Obj_0889E298;

u8 func_0889E344(void *, void *, Arg3_0889E298 *, s32);

u8 func_0889E298(Obj_0889E298 *arg0, void *arg1, void *arg2, Arg3_0889E298 *arg3, s32 arg4) {
    s32 idx;
    u8 ret;

    idx = 0;
    if (arg3 != NULL) {
        idx = arg3->unk_14;
    }
    ret = func_0889E344(arg1, arg2, arg3, arg4);
    if (ret != 0) {
        return ret;
    }
    return arg0->unk_18[idx](arg1, arg2, arg3, arg4);
}
