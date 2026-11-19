#include "common.h"

extern "C" {

struct T {};

s32 func_08811914(s32, s32, T);

s32 func_088118F8(s32 arg0, s32 arg1)
{
    T temp;

    return func_08811914(arg0, arg1, temp);
}

}
