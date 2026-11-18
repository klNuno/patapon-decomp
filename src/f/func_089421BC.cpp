#include "common.h"

extern "C" {

class Elem_089421BC {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual s32 unk_14();
};

typedef struct {
    u8 pad_00[0x4];
    Elem_089421BC *unk_04;
} Obj_089421BC;

s32 func_0894225C(Obj_089421BC *, s32, s32, s32, s32, s32, s32);

s32 func_089421BC(Obj_089421BC *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (arg0->unk_04 != NULL) {
        return func_0894225C(arg0, arg0->unk_04->unk_14(), arg2, arg3, arg4, arg5, arg6);
    }
    return 0;
}

}
