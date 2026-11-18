#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S088E8B80_W;

typedef struct {
    u8 pad_00[0x14];
    S088E8B80_W *unk_14;
} S088E8B80;

typedef struct {
    u8 pad_00[0x3A8];
    s32 unk_3A8;
} S088E8B80_R;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);
s32 func_0888FCFC(s32, s32);
S088E8B80_R *func_08890CEC(s32, s32);

void func_088E8B80(S088E8B80 *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    S088E8B80_W *w;
    s32 q;
    s32 i;
    S088E8B80_R *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    *d = -1;
    w = arg0->unk_14;
    if (w != NULL && (*a == 0 || *a == 1U)) {
        q = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
        if (q != 0) {
            i = *c;
            if (i < func_0888FCFC(q, 0)) {
                r = func_08890CEC(q, i);
                if (r != NULL) {
                    *d = r->unk_3A8;
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}
