#include "common.h"

extern "C" {

s32 *func_088118D0(s32 *, s32);

struct Unk {};

inline s32 *func_088118B4_00(s32 *arg0, s32 arg1, const Unk &)
{
    return func_088118D0(arg0, arg1);
}

s32 *func_088118B4(s32 *arg0, s32 arg1)
{
    return func_088118B4_00(arg0, arg1, Unk());
}

}
