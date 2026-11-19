#include "common.h"

extern "C" {
s32 *func_08810AB8(s32 *arg0, s32 *arg1);
s32 *func_08810AA0(s32 *arg0, s32 arg1);

void func_08810A54(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp;

    func_08810AB8(arg0, func_08810AA0(func_08810AB8(&temp, arg1), arg2));
}
}
