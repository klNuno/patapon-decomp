#include "common.h"

extern "C" {

struct T {
    T *unk_00;
};

static inline s32 func_0891C9C4_0(T *arg0, T *arg1) {
    return arg0 == arg1;
}

static inline bool func_0891C9C4_1(T *arg0, T *arg1) {
    return !(bool)func_0891C9C4_0(arg0, arg1);
}

s32 func_0891C9C4(T *arg0, T *arg1) {
    s32 temp = 0;
    if (func_0891C9C4_1(arg0, arg1)) {
        do {
            arg0 = arg0->unk_00;
            temp++;
        } while (func_0891C9C4_1(arg0, arg1));
    }
    return temp;
}

}
