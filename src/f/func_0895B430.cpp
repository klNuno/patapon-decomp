#include "common.h"

extern "C" {

struct S10_0895B430 {
    virtual void v0();
    virtual s32 v1(s32, s32, s32, s32);
};

typedef struct {
    u8 pad_00[8];
    S10_0895B430 *unk_08;
} Obj_0895B430;

void func_0895B5A0(Obj_0895B430 *);
void func_0895B5A8(Obj_0895B430 *);

s32 func_0895B430(Obj_0895B430 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    func_0895B5A0(arg0);
    temp_s0 = arg0->unk_08->v1(arg1, arg2, arg3, arg4);
    func_0895B5A8(arg0);
    return temp_s0;
}

}
