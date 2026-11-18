#include "common.h"

extern "C" {

extern void func_0897A064(s32 *, s32, s32);

inline void fill_0897A220(s32 *first, s32 *last, const s32 &v) {
    for (; first < last; first++) {
        *first = v;
    }
}

s32 func_0897A220(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;

    s32 v;

    v = -1;
    arg0[0] = v;
    fill_0897A220(arg0 + 1, arg0 + 4, v);
    func_0897A064(&t0, arg1, arg2);
    arg0[0] = t0;
    func_0897A064(&t1, arg1, arg3);
    arg0[1] = t1;
    func_0897A064(&t2, arg1, arg4);
    arg0[2] = t2;
    func_0897A064(&t3, arg1, arg5);
    arg0[3] = t3;
    return 0;
}

}
