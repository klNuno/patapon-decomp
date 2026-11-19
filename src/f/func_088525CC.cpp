#include "common.h"

extern "C" {

class A_088525CC;
typedef void (A_088525CC::*M_088525CC)(char *);

class A_088525CC {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual u8 unk_10(s32);
    virtual M_088525CC unk_14(s32);
};

void func_08852B84(char *arg0, s32 arg1);

s32 func_088525CC(A_088525CC *arg0, char *arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0->unk_10(arg2) == 0) {
        return 0;
    }
    func_08852B84(arg1, arg4);
    M_088525CC temp = arg0->unk_14(arg3);
    (arg0->*temp)(arg1);
    return 1;
}

}
