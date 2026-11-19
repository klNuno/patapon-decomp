#include "common.h"
extern "C" {
struct T { s8 unk_00; };
void func_088123FC(void *, s32, s32, s8);

static inline void func_08810BEC_inline(void *arg0, s32 arg1, s32 arg2, const T &arg3) {
    func_088123FC(arg0, arg1, arg2, arg3.unk_00);
}

void func_08810BEC(void *arg0, s32 arg1, s32 arg2) {
    T temp = { 0 };
    func_08810BEC_inline(arg0, arg1, arg2, temp);
}
}
