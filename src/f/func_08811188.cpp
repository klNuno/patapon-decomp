#include "common.h"

extern "C" {

s32 *func_088111EC(s32 *arg0, s32 *arg1);
s32 *func_088111D4(s32 *arg0, s32 arg1);

void func_08811188(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp;

    func_088111EC(arg0, func_088111D4(func_088111EC(&temp, arg1), arg2));
}

}
