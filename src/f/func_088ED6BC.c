#include "common.h"

typedef struct {
    u8 pad_00[0x14C0];
    s32 unk_14C0;
} R;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W;

typedef struct {
    u8 pad_00[0x14];
    W *unk_14;
} Obj;

s32 *func_0885356C(s32, s32, s32, s32);
void func_08852F00(s32, s32);
R *func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088ED6BC(Obj *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    R *r;
    W *w;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    *c = -1;
    w = arg0->unk_14;
    if (w != NULL) {
        r = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 0);
        if (r != NULL) {
            *c = r->unk_14C0;
        }
    }
    func_08852F00(arg1, 0);
}
