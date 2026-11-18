#include "common.h"

extern u8 *D_08AD1F14[];
s32 func_089A8B74(u8 *, s32);
void func_089D0E50(u8 *, s32, s32, s32, s32, s32);
void func_089D1904(void *, s32, s32);

void func_089D6358(u8 *arg0) {
    u8 *p;
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    p = &(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)[0x2460];
    a = func_089A8B74(p, 0x40000);
    b = func_089A8B74(p, 0x20031);
    c = func_089A8B74(p, 0x20000);
    d = func_089A8B74(p, 0x20001);
    func_089D0E50(arg0 + 0xD60, a, b, 2, c, d);
    func_089D1904(arg0 + 0xD60, 1, 0);
}
