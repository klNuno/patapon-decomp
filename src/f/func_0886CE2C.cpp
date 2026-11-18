#include "common.h"

extern "C" {

struct V0 {
    virtual s32 *vfunc_08(s32, s32);
};

typedef struct {
    s32 unk_00;
    V0 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
} H;

s32 func_08827A50(s32, s32);
V0 *func_08827AD4(void);
s32 func_08947F78(s32, s32, s32);

void func_0886CE2C(H *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 p;

    if ((p = func_08827A50(0x1AC90, arg2)) != 0) {
        p = func_08947F78(p, arg2, arg3);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = p;
    arg0->unk_0C = arg0->unk_04->vfunc_08(p, arg0->unk_00);
    *arg0->unk_0C = 1;
}

}
