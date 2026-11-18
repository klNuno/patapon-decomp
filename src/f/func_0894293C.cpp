#include "common.h"

class T {
public:
    typedef void (T::*V)(char *);

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual u8 unk_14(s32);
    virtual V unk_18(s32);
};

extern "C" {
void func_08852B84(char *arg0, s32 arg1);

s32 func_0894293C(T *arg0, char *arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0->unk_14(arg2) == 0) {
        return 0;
    }
    func_08852B84(arg1, arg4);
    T::V temp = arg0->unk_18(arg3);
    (arg0->*temp)(arg1);
    return 1;
}
}
