#include "common.h"

extern "C" {

s32 *func_08810AA0(s32 *arg0, s32 arg1);

struct Unk {};

inline s32 *func_08811D98_inline(s32 *arg0, s32 arg1, const Unk &) {
    return func_08810AA0(arg0, arg1);
}

s32 *func_08811D98(s32 *arg0, s32 arg1) {
    return func_08811D98_inline(arg0, arg1, Unk());
}

}
