#include "common.h"

extern "C" {

struct Obj_0880EFA4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual s8 v11(u16, s32);
};

typedef struct {
    u16 unk_00;
    u8 pad_02[2];
} S9_0880EFA4;

S9_0880EFA4 *func_0880EFA4(Obj_0880EFA4 *arg0, S9_0880EFA4 *arg1, S9_0880EFA4 *arg2, s32 arg3, s8 *arg4) {
    while (arg1 < arg2) {
        *arg4++ = arg0->v11((arg1++)->unk_00, arg3);
    }
    return arg2;
}

}
