#include "common.h"

extern "C" {

class C0893756C;
typedef void (C0893756C::*P0893756C)(void *);

class C0893756C {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual s32 v3(s32);
    virtual P0893756C v4(s32);
};

void func_08852B84(void *, s32);

s32 func_0893756C(C0893756C *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    P0893756C p;

    if ((u8)arg0->v3(arg2) == 0) {
        return 0;
    }
    func_08852B84(arg1, arg4);
    p = arg0->v4(arg3);
    (arg0->*p)(arg1);
    return 1;
}

}
