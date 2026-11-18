#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Elem_088CB34C;

typedef struct {
    u8 pad_00[0x18];
    Elem_088CB34C *unk_18;
    s32 unk_1C;
} Obj_088CB34C;

s32 func_08822AD0(s32, s32);

s32 func_088CB34C(Obj_088CB34C *arg0, s32 arg1) {
    s32 i;

    if (arg0 == NULL || arg1 == 0 || arg0->unk_1C < 0) {
        return -1;
    }
    for (i = 0; i < arg0->unk_1C; i++) {
        if (func_08822AD0(arg0->unk_18[i].unk_04, arg1) == 0) {
            return i;
        }
    }
    return -1;
}
