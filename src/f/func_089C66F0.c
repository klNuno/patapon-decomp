#include "common.h"

extern u8 *D_08AD1F14[];
s32 func_089A8B74(u8 *, s32);
void func_089D0E50();
void func_089D1B50(u8 *, s32);

void func_089C66F0(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    u8 *p;
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    p = &(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)[0x2460];
    if (arg2 == 0) {
        a = func_089A8B74(p, 0x40000);
        b = func_089A8B74(p, arg1);
        func_089D0E50(arg0 + 4, a, b, 0);
    } else if (arg2 == 1) {
        a = func_089A8B74(p, 0x40000);
        b = func_089A8B74(p, arg1);
        c = func_089A8B74(p, arg3[0]);
        func_089D0E50(arg0 + 4, a, b, 1, c);
    } else if (arg2 == 2) {
        a = func_089A8B74(p, 0x40000);
        b = func_089A8B74(p, arg1);
        c = func_089A8B74(p, arg3[0]);
        d = func_089A8B74(p, arg3[1]);
        func_089D0E50(arg0 + 4, a, b, 2, c, d);
    }
    func_089D1B50(arg0 + 4, 0xA0);
}
