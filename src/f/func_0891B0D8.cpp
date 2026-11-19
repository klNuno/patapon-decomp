#include "common.h"

extern "C" {

typedef struct T {
    T *unk_00;
} T;

static inline s32 func_00(T *arg0, T *arg1) {
    return arg0 == arg1;
}

static inline bool func_04(T *arg0, T *arg1) {
    return !(bool)func_00(arg0, arg1);
}

u32 func_0891B0D8(T *arg0, T *arg1) {
    u32 temp = 0;

    if (func_04(arg0, arg1)) {
        do {
            arg0 = arg0->unk_00;
            ++temp;
        } while (func_04(arg0, arg1));
    }
    return temp;
}

}
