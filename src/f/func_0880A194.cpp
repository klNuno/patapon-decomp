#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
} P_0880A194;

struct V_0880A194 {
    virtual void v08(); virtual void v0C(); virtual void v10(); virtual void v14(); virtual void v18();
    virtual s32 v1C(); virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C(); virtual void v40();
    virtual s32 v44(s32, s32);
};

s32 func_08808938(s32, s32);
s32 func_08809918(s32 arg0, s32 arg1);
s32 func_08809920(s32 arg0, s32 arg1);
s32 func_0880A28C(void *);
s32 func_08809910(P_0880A194 *);
void func_088098F8(s32, P_0880A194 *);

void func_0880A194(s32 arg0, V_0880A194 *arg1, P_0880A194 *arg2, s32 arg3) {
    P_0880A194 t = *arg2;

    if (func_0880A28C(arg1) == 0 || func_08809918(arg3, func_08809920(8, 0x10)) == 0) {
        func_08808938(arg0, -1);
        return;
    }
    if (arg1->v1C() < 0) {
        func_08808938(arg0, -1);
        return;
    }
    if (arg1->v44(func_08809910(&t), 0) < 0) {
        func_08808938(arg0, -1);
        return;
    }
    func_088098F8(arg0, &t);
}

}
