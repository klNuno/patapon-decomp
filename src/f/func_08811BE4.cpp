#include "common.h"

extern "C" {

s32 * func_08811C00(s32 *, s32);
 
struct Unk {};

inline s32 * func_08811BE4_00(s32 *arg0, s32 arg1, const Unk &)
{
    return func_08811C00(arg0, arg1);
}

s32 * func_08811BE4(s32 *arg0, s32 arg1)
{
    return func_08811BE4_00(arg0, arg1, Unk());
}

}
