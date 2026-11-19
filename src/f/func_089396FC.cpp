#include "common.h"
extern "C" {
struct S {
    S *unk_00;
};
static inline s32 func_089396FC_0(S *arg0, S *arg1) {
    return arg0 == arg1;
}
static inline bool func_089396FC_1(S *arg0, S *arg1) {
    return !(bool)func_089396FC_0(arg0, arg1);
}
s32 func_089396FC(S *arg0, S *arg1) {
    s32 temp = 0;
    if (func_089396FC_1(arg0, arg1)) {
        do {
            arg0 = arg0->unk_00;
            temp++;
        } while (func_089396FC_1(arg0, arg1));
    }
    return temp;
}
}
