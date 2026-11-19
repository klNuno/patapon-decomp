#include "common.h"

extern "C" {

extern s32 func_0882BE88(s32);
extern s32 func_0882C338(s32, s32);
f32 func_08832DB4(s32);

f32 func_0893F060(s32 *arg0)
{
    return func_08832DB4(func_0882C338(*arg0, func_0882BE88(*arg0)));
}

}
