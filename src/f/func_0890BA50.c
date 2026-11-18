#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_0890BA50;

typedef struct {
    u8 pad_00[0xDA0];
    u8 unk_DA0[4];
} S_0890BA50;

void func_0890DC54(void *);
void func_0890DFD4(void *, s32, s32, s32, P_0890BA50 *);
extern f32 D_089FF918[];
extern f32 D_089FF920[];
extern f32 D_089FF928[];
extern f32 D_089FF930[];
extern f32 D_089FF938[];

void func_0890BA50(S_0890BA50 *arg0, s32 arg1, s32 arg2) {
    f32 u[4];
    f32 t[4];
    P_0890BA50 a;
    P_0890BA50 b;
    s32 v;

    t[0] = D_089FF918[1];
    t[1] = D_089FF920[0];
    t[2] = D_089FF920[1];
    t[3] = D_089FF928[0];
    u[0] = D_089FF928[1];
    u[1] = D_089FF930[0];
    u[2] = D_089FF930[1];
    u[3] = D_089FF938[0];
    func_0890DC54(arg0->unk_DA0);
    a.unk_00 = 0;
    a.unk_04 = 0;
    func_0890DFD4(arg0->unk_DA0, arg1, 0, *(s32 *)&t[arg2], &a);
    v = *(s32 *)&u[arg2];
    if (v != 0) {
        b.unk_00 = 0;
        b.unk_04 = 0;
        func_0890DFD4(arg0->unk_DA0, arg1, 1, v, &b);
    }
}
