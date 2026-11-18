#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} S088EC7DC_114;

typedef struct {
    u8 pad_00[0x114];
    S088EC7DC_114 *unk_114;
} S088EC7DC_7D50;

typedef struct {
    u8 pad_00[0x7D50];
    S088EC7DC_7D50 unk_7D50;
} S088EC7DC_R;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S088EC7DC_14;

typedef struct {
    u8 pad_00[0x14];
    S088EC7DC_14 *unk_14;
} S088EC7DC;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
S088EC7DC_R *func_08899E18(s32, s32);

void func_088EC7DC(S088EC7DC *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    S088EC7DC_R *r;
    S088EC7DC_7D50 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL && (!*a || *a == 1)) {
        r = func_08899E18(arg0->unk_14->unk_36B10, *a);
        if (r != NULL) {
            p = &r->unk_7D50;
            if (p != NULL) {
                *b = p->unk_114->unk_04;
            }
        }
    }
    func_08852F00(arg1, 0);
}
