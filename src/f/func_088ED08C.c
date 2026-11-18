#include "common.h"

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
} S088ED08C_P;

typedef struct {
    u8 pad_00[0x7D50];
    S088ED08C_P unk_7D50;
} S088ED08C_R;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S088ED08C_W;

typedef struct {
    u8 pad_00[0x14];
    S088ED08C_W *unk_14;
} S088ED08C;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
S088ED08C_R *func_08899E18(s32, s32);
void func_088F5AB4(s32, s32);

void func_088ED08C(S088ED08C *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    S088ED08C_W *w;
    S088ED08C_R *r;
    S088ED08C_P *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    w = arg0->unk_14;
    if (w != NULL && (*a == 0 || *a == 1U)) {
        r = func_08899E18(w->unk_36B10, *a);
        if (r != NULL) {
            p = &r->unk_7D50;
            if (p != NULL) {
                func_088F5AB4(p->unk_114, *b);
            }
        }
    }
    func_08852F00(arg1, 0);
}
