#include "common.h"
extern "C" {
struct S {
    S *unk_00;
};
static inline s32 func_08947B58_0(S *arg0, S *arg1) {
    return arg0 == arg1;
}
static inline bool func_08947B58_1(S *arg0, S *arg1) {
    return !(bool)func_08947B58_0(arg0, arg1);
}
s32 func_08947B58(S *arg0, S *arg1) {
    s32 temp = 0;
    if (func_08947B58_1(arg0, arg1)) {
        do {
            arg0 = arg0->unk_00;
            temp++;
        } while (func_08947B58_1(arg0, arg1));
    }
    return temp;
}
}
