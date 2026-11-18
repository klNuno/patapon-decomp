#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    V2 unk_00;
    V2 unk_08;
    V2 unk_10;
} R;

void func_089B295C(s32, R *, s32);
void func_089B298C(s32, s32, s32, V2 *);
void func_089B2A88(s32);
extern V2 D_08A08540[];
extern V2 D_08A08548[];

void func_089B1658(s32 arg0, s32 arg1, s32 arg2) {
    V2 s;
    R r;

    r.unk_00 = D_08A08540[0];
    r.unk_08 = D_08A08548[0];
    func_089B295C(arg1, &r, 1);
    s.unk_00 = 1.0f;
    s.unk_04 = 1.0f;
    func_089B298C(arg1, 7, arg2, &s);
    func_089B2A88(arg1);
}
