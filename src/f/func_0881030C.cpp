#include "common.h"

extern "C" {

struct A0881030C {
};

s32 func_0880DECC(void *);
void func_0880FB6C(void *, s32);
s32 func_0880DFC4(void *);
void *func_0880DA44(void *);
s32 func_0880DF9C(void *);
void func_0880FFD4(void *, s32);
void func_0880DA00(void *);
s32 *func_0880ECF4(void *);
void func_0880FFF4(void *, s32);
u8 *func_0880DF7C(void *);
void func_0880F6B4(void *, s32, s32, u8 *, u8 *, A0881030C);

void *func_0881030C(void *arg0, void *arg1) {
    A0881030C a;

    func_0880FB6C(arg0, func_0880DECC(arg1));
    if (func_0880DFC4(arg1) == 0) {
        func_0880FFD4(func_0880DA44(arg0), func_0880DF9C(arg1));
    } else {
        func_0880DA00(arg0);
        func_0880FFF4(arg0, *func_0880ECF4(arg1));
        func_0880F6B4(arg0, 0, 0, func_0880DF7C(arg1), func_0880DF7C(arg1) + *func_0880ECF4(arg1), a);
    }
    return arg0;
}

}
