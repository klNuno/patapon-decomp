#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} T;
typedef struct {
    u8 pad_00[0x728];
    s32 unk_728;
    s32 unk_72C;
    u8 *unk_730;
} Obj_088620E8;
void func_088620E8(Obj_088620E8 *arg0, s32 arg1);

s32 func_08863E3C(Obj_088620E8 *arg0, s32 arg1) {
    T *temp;
    s32 result;
    s32 flag;
    if (arg1 < 0 || arg0->unk_728 <= arg1) {
        temp = NULL;
    } else {
        temp = (T *)(arg0->unk_730 + arg0->unk_72C * arg1);
    }
    if ((flag = temp->unk_0C) != 0) {
        func_088620E8(arg0, arg1);
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
