#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } V4;
typedef struct { f32 unk_00[4][4]; } M_08933578;

void func_08854F60(f32, V4 *, V4 *);
f32 func_08855060(void *, void *);
void func_088554A0(M_08933578 *, M_08933578 *, M_08933578 *);
f32 func_0885625C(f32);
void func_08858024(s32);
extern s32 func_088581B0(s32);

void func_0885A958(V4 *arg0) {
    M_08933578 r;
    f32 a;
    f32 b;
    struct { M_08933578 unk_00; u8 pad_40[8]; } m1;
    M_08933578 m2;
    f32 x;
    u32 u;
    u32 *p;

    func_08858024(1);
    func_088581B0((s32)&m1.unk_00);
    func_08858024(0);
    func_088581B0((s32)&m2);
    func_08858024(2);
    func_088554A0(&r, &m2, &m1.unk_00);
    arg0->unk_00 = r.unk_00[0][3] - r.unk_00[0][0];
    arg0->unk_04 = r.unk_00[1][3] - r.unk_00[1][0];
    arg0->unk_08 = r.unk_00[2][3] - r.unk_00[2][0];
    arg0->unk_0C = r.unk_00[3][3] - r.unk_00[3][0];
    x = func_0885625C(func_08855060(arg0, arg0));
    a = x;
    u = *(u32 *)&a;
    u = (u << 1) >> 1;
    p = (u32 *)&a;
    *(u32 *)&a = u;
    if (*(f32 *)p > 1e-11f) {
        func_08854F60(1.0f / x, arg0, arg0);
    }
    arg0[1].unk_00 = r.unk_00[0][3] + r.unk_00[0][0];
    arg0[1].unk_04 = r.unk_00[1][3] + r.unk_00[1][0];
    arg0[1].unk_08 = r.unk_00[2][3] + r.unk_00[2][0];
    arg0[1].unk_0C = r.unk_00[3][3] + r.unk_00[3][0];
    x = func_0885625C(func_08855060(&arg0[1], &arg0[1]));
    b = x;
    u = *(u32 *)&b;
    u = (u << 1) >> 1;
    p = (u32 *)&b;
    *(u32 *)&b = u;
    if (*(f32 *)p > 1e-11f) {
        func_08854F60(1.0f / x, &arg0[1], &arg0[1]);
    }
}
