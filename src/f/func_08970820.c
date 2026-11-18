#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} Obj_08970820;

s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);
u8 func_0889080C(s32, s32, s32);

u8 func_08970820(Obj_08970820 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 ret;
    s32 temp;

    ret = 0;
    if (*arg0 != NULL) {
        if (!(arg1 == 0 || arg1 == 1)) {
            goto end;
        }
        temp = func_08894FBC(func_08899E18((*arg0)->unk_36B10, arg1), arg2, 1);
        if (temp != 0) {
            ret = func_0889080C(temp, arg3, arg4);
        }
    }
end:
    return ret;
}
