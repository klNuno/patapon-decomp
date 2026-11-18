#include "common.h"

extern "C" {

typedef struct T_0880A294 {
    u8 pad_00[0x40];
    s32 unk_40;
} T_0880A294;

struct V_0880A294 {
    virtual void v08(); virtual void v0C(); virtual void v10(); virtual void v14(); virtual void v18();
    virtual s32 v1C(); virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C(); virtual void v40();
    virtual s32 v44(s32, s32);
};

s32 func_08808938(s32, s32);
s32 func_08809918(s32 arg0, s32 arg1);
s32 func_08809920(s32 arg0, s32 arg1);
s32 func_0880A28C(void *);

void func_0880A294(s32 arg0, T_0880A294 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 mode;
    s32 n;
    s32 r;

    if (func_0880A28C(arg1) == 0 || func_08809918(arg4, func_08809920(8, 0x10)) == 0 || (arg2 != 0 && arg1->unk_40 <= 0)) {
        func_08808938(arg0, -1);
        return;
    }
    if (((V_0880A294 *)arg1)->v1C() < 0) {
        func_08808938(arg0, -1);
        return;
    }
    switch (arg3) {
    case 1:
        mode = 0;
        break;
    case 2:
        mode = 1;
        break;
    case 4:
        mode = 2;
        break;
    default:
        func_08808938(arg0, -1);
        return;
    }
    n = arg1->unk_40;
    n = (n > 0) ? n : 0;
    r = ((V_0880A294 *)arg1)->v44(n * arg2, mode);
    if (r < 0) {
        func_08808938(arg0, -1);
        return;
    }
    func_08808938(arg0, r);
}

}
