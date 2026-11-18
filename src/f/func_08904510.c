#include "common.h"

typedef struct {
    u8 pad_00[0x828];
    u8 unk_828;
} T;
typedef struct {
    u8 pad_00[0x310];
    T unk_310;
} U;
typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
    u8 pad_14[0x38];
    s32 unk_4C;
    s32 unk_50;
} S;

extern f32 D_089FF83C[];
extern f32 D_089FF840[];
extern u8 *D_08AD1F14[];
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_088DEB74(U *);
void func_08876C60(void *);
void func_088DDF78(s32, s32);
void func_088B3328(u8 *, s32, s32);
void func_088FD120(u8 *);
void func_08914BA0(u8 *);
void func_08915370(void *, s32);
s32 func_089154AC(void *);
void func_089154BC(void *, u8 *);
void func_08915524(void *, u8 *);
s32 func_089A8B74(u8 *, s32);

void func_08904510(S *arg0, void *arg1) {
    f32 t[3];
    u8 v[0x400];
    s32 n;
    s32 *a;
    s32 *b;
    s32 k;
    T *p;

    n = func_08852EB8(arg1);
    p = &arg0->unk_10->unk_310;
    if (n == 0) {
        a = func_0885356C(arg1, 0, 1, 4);
        b = func_0885356C(arg1, 1, 1, 4);
        t[0] = D_089FF83C[0];
        t[1] = D_089FF840[0];
        t[2] = D_089FF840[1];
        k = ((s32 *)t)[*a];
        arg0->unk_4C = k;
        arg0->unk_50 = -1;
        if (k == 1) {
            func_088DEB74(arg0->unk_10);
            func_088B3328(v, 0x80, func_089A8B74((D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2460, 0x20032));
            func_089154BC(p, v);
            func_088FD120(v);
            func_08915524(p, v);
            func_088B3328(v, 0x80, func_089A8B74((D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2460, 0x20041));
            func_08914BA0(v);
        } else if (k == 2) {
            p->unk_828 = *b != 0;
            func_08876C60(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL);
        }
        func_08915370(p, k);
        func_08852EDC(arg1, n + 1);
        return;
    }
    if (n == 1 && func_089154AC(p) == 0) {
        s32 m = arg0->unk_50;
        if (m == 2) {
            func_08915370(p, arg0->unk_4C);
        } else if (arg0->unk_4C == 2) {
            if (m == 0) {
                func_088DDF78((s32)arg0->unk_10, 1);
                func_08852EDC(arg1, n + 1);
            } else {
                func_08852F00(arg1, 0);
            }
        } else {
            func_08852F00(arg1, 0);
        }
    }
}
