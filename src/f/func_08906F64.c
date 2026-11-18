#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_08906F64;

extern u8 *D_08AD1F14[];
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_089A8B74(u8 *, s32);
void func_089D0E50(u8 *, s32, s32, s32, s32);
void func_089D1904(void *, s32, s32);
s32 func_089D1AD8(u8 *);

void func_08906F64(Obj_08906F64 *arg0, void *arg1) {
    s32 st;
    u8 *h;
    s32 *a;
    u8 *p;
    s32 b;
    s32 c;

    st = func_08852EB8(arg1);
    h = arg0->unk_10 + 0x1C7530;
    if (st == 0) {
        a = func_0885356C(arg1, 0, 1, 4);
        p = &(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)[0x2460];
        b = func_089A8B74(p, 0x40000);
        c = func_089A8B74(p, *a);
        func_089D0E50(h, b, c, 1, func_089A8B74(p, 0x20038));
        func_089D1904(h, 1, 0);
        func_08852EDC(arg1, st + 1);
    } else if (st == 1) {
        if (func_089D1AD8(h) != 0) {
            func_08852F00(arg1, 0);
        }
    }
}
