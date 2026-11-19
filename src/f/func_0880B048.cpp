#include "common.h"
extern "C" {
struct T { s8 unk_00; };
void func_0880CA08(void *, s8);

static inline void func_0880B048_inline(void *arg0, const T &arg1) {
    func_0880CA08(arg0, arg1.unk_00);
}

void func_0880B048(void *arg0) {
    T temp = { 0 };
    func_0880B048_inline(arg0, temp);
}
}
