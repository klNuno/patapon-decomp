#include "common.h"

typedef struct {u8 pad_00[8]; s32 unk_08; s32 unk_0C;} T;
typedef struct {u8 pad_00[0x50]; T *unk_50;} U;
typedef struct {u8 pad_00[0x8D0]; u8 unk_8D0; u8 pad_8D1[15]; s32 unk_8E0;} B;
typedef struct {s32 unk_00; u8 pad_04[0x160]; u8 unk_164; u8 pad_165[7]; s32 unk_16C;} S;
typedef struct {f32 unk_00; f32 unk_04;} V_088EECE0;
typedef struct {u8 pad_00[0x4C]; s32 unk_4C;} P;

extern void *D_08AD8DD8[];
extern f32 D_089ED308[];
extern f32 D_089ED310[];
extern f32 D_089ED314[];
s32 func_08986C80(s32);
U *func_08986C78(s32, s32);
extern s32 func_08985828(s32, s32);
void func_0898ABB8(s32, f32, s32, s32);
s32 func_0892E894(void *);
void func_0892DFA0(s32, V_088EECE0 *);
s32 func_088DEDAC(s32, s32);
void func_088D450C(s32, s32);

void func_08984ED4(S *arg0, s32 arg1, u8 arg2) {
    V_088EECE0 v;
    U *u;
    s32 n;
    s32 x;
    void *g;
    f32 a;
    f32 b;

    u = func_08986C78(arg1, func_08986C80(arg1));
    n = u->unk_50->unk_08;
    arg0->unk_164 = 1;
    if (((P *)func_08985828((s32)arg0, 0))->unk_4C != 6) {
        func_0898ABB8(func_08985828((s32)arg0, 0), 0.0f, 6, 1);
    }
    if (((P *)func_08985828((s32)arg0, 1))->unk_4C != 5) {
        func_0898ABB8(func_08985828((s32)arg0, 1), 0.0f, n + 5, 1);
    }
    if (arg2 != 1) {
        return;
    }
    g = D_08AD8DD8[0];
    arg0->unk_16C = func_0892E894(g != NULL ? g : NULL);
    ((B *)arg0->unk_16C)->unk_8D0 = 1;
    ((B *)arg0->unk_16C)->unk_8E0 = 0;
    a = D_089ED310[0];
    b = D_089ED308[0];
    v.unk_00 = b + a;
    v.unk_04 = D_089ED308[1] + D_089ED314[0];
    func_0892DFA0(arg0->unk_16C, &v);
    x = u->unk_50->unk_0C;
    if (x != 0) {
        func_088D450C(arg0->unk_16C, func_088DEDAC(arg0->unk_00, x));
    }
}
