#include "common.h"

typedef struct {
    u8 pad_00[8];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} S;

typedef struct {
    u8 pad_00[0x260];
    s32 unk_260;
} T;

typedef struct {
    u8 pad_00[0x14A0];
    T *unk_14A0;
} U;

typedef struct {
    u8 pad_00[0x42820];
    U *unk_42820;
} V;

f32 fabsf(f32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_0897C56C(void *, s32, f32, f32);
void func_08879198(s32, s32, f32, f32);
extern void *D_08AD1E28[];

void func_08990BF0(S *arg0) {
    f32 a;
    f32 b;
    f32 c;
    f32 e;
    f32 d;
    f32 f;
    f32 g;
    V *p;
    T *q;

    a = arg0->unk_14;
    b = arg0->unk_10;
    a -= b;
    if (fabsf(a) < 1e-11f) {
        return;
    }
    arg0->unk_14 = b;
    p = (V *)D_08AD1E28[0];
    p = p != NULL ? p : NULL;
    q = (T *)p->unk_42820;
    f = arg0->unk_10;
    g = arg0->unk_0C;
    c = 1.0f;
    c *= f;
    q = ((U *)q)->unk_14A0;
    g += c;
    c = 0.5f;
    c *= g;
    arg0->unk_0C = c;
    b = arg0->unk_08;
    e = c;
    if (e < b) {
        e = b;
    }
    d = 1.0f - c;
    if (d < b) {
        d = b;
    }
    if (q->unk_260 == 1) {
        func_0897C56C((void *)(func_089B53D8(func_088586E8()) + 0x14), 1, e, 0.0f);
        func_08879198(func_089B53D8(func_088586E8()), 0x1000F, d, 0.0f);
    }
}
