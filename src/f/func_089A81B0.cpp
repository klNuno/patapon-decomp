#include "common.h"

extern "C" {

class Unk;
typedef void (Unk::*UnkPtr)(void *);

class Unk {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual u8 unk_14(s32);
    virtual UnkPtr unk_18(s32);
};

void func_08852B84(void *, s32);

s32 func_089A81B0(Unk *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4)
{
    if (arg0->unk_14(arg2) == 0) {
        return 0;
    }
    func_08852B84(arg1, arg4);
    UnkPtr temp = arg0->unk_18(arg3);
    (arg0->*temp)(arg1);
    return 1;
}

}
