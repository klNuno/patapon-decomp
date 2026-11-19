#include "common.h"

extern "C" {

s32 *func_088111D4(s32 *arg0, s32 arg1);

struct Unk {};

inline s32 *func_08811A68_inline(s32 *arg0, s32 arg1, const Unk &) {
    return func_088111D4(arg0, arg1);
}

s32 *func_08811A68(s32 *arg0, s32 arg1) {
    return func_08811A68_inline(arg0, arg1, Unk());
}

}
