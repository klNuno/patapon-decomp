#include "common.h"

extern "C" {

extern s32 func_0881F120(s32, s32, s32);
extern s32 func_0882C278(s32, s32);
extern s32 func_0882E228(s32);

void func_0893EF94(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp = func_0882C278(*arg0, arg2);
    temp = func_0882E228(temp);
    func_0881F120(arg1, temp, 0x40);
}

}
