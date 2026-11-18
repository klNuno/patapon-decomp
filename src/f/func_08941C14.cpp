#include "common.h"

extern "C" {

class C;
typedef void (C::*PMF)(char *);

class C {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual u8 v3(s32);
    virtual PMF v4(s32);
};

void func_08852B84(char *arg0, s32 arg1);

s32 func_08941C14(C *arg0, char *arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0->v3(arg2) == 0) {
        return 0;
    }
    func_08852B84(arg1, arg4);
    PMF pm = arg0->v4(arg3);
    (arg0->*pm)(arg1);
    return 1;
}

}
