#include "common.h"

extern "C" {

class A;
typedef void (A::*P)(char *);

class A {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual s32 v3(s32);
    virtual P v4(s32);
};

void func_08852B84(char *arg0, s32 arg1);

s32 func_08930130(A *arg0, char *arg1, s32 arg2, s32 arg3, s32 arg4) {
    P f;

    if ((u8)arg0->v3(arg2) == 0) {
        return 0;
    }
    func_08852B84(arg1, arg4);
    f = arg0->v4(arg3);
    (arg0->*f)(arg1);
    return 1;
}

}
