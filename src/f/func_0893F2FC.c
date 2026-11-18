#include "common.h"

typedef struct Obj_0893F2FC {
    u8 pad_00[4];
    s32 unk_04[1];
} Obj_0893F2FC;

s32 func_0889039C(s32, s32);
s32 func_08894FBC(void *, s32, s32);

s32 func_0893F2FC(Obj_0893F2FC *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp;

    if (arg0->unk_04[arg1] == -1) {
        return 0;
    }
    temp = func_08894FBC(arg3, arg0->unk_04[arg1], 0);
    switch (arg2) {
    case 1:
        if (temp == 0) {
            return 0;
        }
        return func_0889039C(temp, 0) > 0;
    case 2:
        return temp != 0;
    default:
        return 1;
    }
}
