#include "common.h"

extern f32 D_089FE390[];
extern f32 D_089FE398[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2_088FCD2C;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[8];
} V4_088FCD2C;

void func_089B295C(void *, V4_088FCD2C *, s32);
void func_089B298C(void *, s32, s32, V2_088FCD2C *);
void func_089B2A88(void *);

void func_088FCD2C(void *arg0, void *arg1, s32 arg2) {
    V2_088FCD2C s;
    V4_088FCD2C r;

    r.unk_00 = D_089FE390[0];
    r.unk_04 = D_089FE390[1];
    r.unk_08 = D_089FE398[0];
    r.unk_0C = D_089FE398[1];
    func_089B295C(arg1, &r, 1);
    s.unk_00 = 1.0f;
    s.unk_04 = 1.0f;
    func_089B298C(arg1, 5, arg2, &s);
    func_089B2A88(arg1);
}
