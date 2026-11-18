#include "common.h"

extern "C" {

class C08909480;
typedef void (C08909480::*P08909480)(void *);

class C08909480 {
public:
    virtual void v0();
    virtual void v1();
    virtual s32 v2(s32);
    virtual P08909480 v3(s32);
};

void func_08852B84(void *, s32);

s32 func_08909480(C08909480 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    P08909480 p;

    if ((u8)arg0->v2(arg2) == 0) {
        return 0;
    }
    func_08852B84(arg1, arg4);
    p = arg0->v3(arg3);
    (arg0->*p)(arg1);
    return 1;
}

}
