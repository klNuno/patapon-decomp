#include "common.h"

extern "C" {

struct T {};

s32 func_08811C44(s32, s32, T);

s32 func_08811C28(s32 arg0, s32 arg1)
{
    T temp;

    return func_08811C44(arg0, arg1, temp);
}

}
