#include "common.h"

extern "C" {

struct T {
    T *unk_00;
};

static inline s32 func_089888A0_0(T *arg0, T *arg1) {
    return arg0 == arg1;
}

static inline bool func_089888A0_1(T *arg0, T *arg1) {
    return !(bool)func_089888A0_0(arg0, arg1);
}

s32 func_089888A0(T *arg0, T *arg1) {
    s32 temp = 0;
    if (func_089888A0_1(arg0, arg1)) {
        do {
            arg0 = arg0->unk_00;
            temp++;
        } while (func_089888A0_1(arg0, arg1));
    }
    return temp;
}

}
