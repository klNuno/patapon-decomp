#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x18];
} Local_0894225C;

class Obj_0894225C {
public:
    u8 pad_00[0x1C0];
    virtual void unk_08();
    virtual void unk_0C();
    virtual s32 unk_10(Local_0894225C *);
};

void func_0894259C(Local_0894225C *);
void func_089425C8(Local_0894225C *, s32, s32, s32, s32, s32, s32);

s32 func_0894225C(Obj_0894225C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Local_0894225C sp28;

    func_0894259C(&sp28);
    func_089425C8(&sp28, arg1, arg2, arg3, arg4, arg5, arg6);
    return arg0->unk_10(&sp28);
}

}
