#include "common.h"
extern "C" {
struct S {
    S *unk_00;
};
static inline s32 func_0886EABC_0(S *arg0, S *arg1) {
    return arg0 == arg1;
}
static inline bool func_0886EABC_1(S *arg0, S *arg1) {
    return !(bool)func_0886EABC_0(arg0, arg1);
}
s32 func_0886EABC(S *arg0, S *arg1) {
    s32 temp = 0;
    if (func_0886EABC_1(arg0, arg1)) {
        do {
            arg0 = arg0->unk_00;
            temp++;
        } while (func_0886EABC_1(arg0, arg1));
    }
    return temp;
}
}
