#include "common.h"

extern f32 D_08A084A0[];
extern f32 D_08A084A8[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T;

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
} S;

void func_089B2284(void);
s32 func_089B1314(s32);
s32 func_089AF8FC(S *, s32);
s8 *func_089B135C(s32);
void func_089B1338(T *, s32);
void func_089B295C(s32, V4 *, s32);
void func_089B298C(s32, s32, T *, V2 *);
void func_089B2A88(s32);

void func_089AF69C(S *arg0, s32 arg1) {
    T t;
    V2 s;
    V4 r;

    func_089B2284();
    if ((u8)func_089AF8FC(arg0, func_089B1314(arg1)) != 0 && *func_089B135C(arg1) > 0) {
        return;
    }
    r.unk_00 = D_08A084A0[0];
    r.unk_04 = D_08A084A0[1];
    r.unk_08 = D_08A084A8[0];
    r.unk_0C = D_08A084A8[1];
    func_089B295C(arg0->unk_54, &r, 1);
    s.unk_00 = 1.0f;
    s.unk_04 = 1.0f;
    func_089B1338(&t, arg1);
    func_089B298C(arg0->unk_54, 0x1F, &t, &s);
    func_089B2A88(arg0->unk_54);
}
