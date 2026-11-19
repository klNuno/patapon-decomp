#include "common.h"
extern "C" {
void *func_08807190(u32, u8 *);
u8 *func_088A6A48(void *, void *);
void *func_088A63E4(void *, void *);

struct A {};

static inline void unk_00(void *arg0, void *arg1, const A &) {
    void *temp = func_08807190(0x40, func_088A6A48(arg0, arg0));
    if (temp != NULL) {
        func_088A63E4(temp, arg1);
    }
}

void func_088A6A00(void *arg0, void *arg1) {
    unk_00(arg0, arg1, A());
}
}
