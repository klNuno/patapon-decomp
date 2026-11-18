#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2_088F4E14;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4_088F4E14;

class C_088F4E14 {
public:
    u8 pad_00[0x58];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual s32 v1C();
};

typedef struct {
    u8 pad_00[0xE30];
    u8 unk_E30[0x4320 - 0xE30];
    C_088F4E14 unk_4320;
    u8 pad_437C[0x4B10 - 0x437C];
    u8 unk_4B10[0x5B68 - 0x4B10];
    u8 unk_5B68[4];
} S_088F4E14;

extern f32 D_089FDD40[];
extern f32 D_089FDD48[];
extern char D_089E2EC8[];

void func_089B295C(void *, V4_088F4E14 *, s32);
void func_089B298C(void *, s32, V2_088F4E14 *, V2_088F4E14 *);
void func_089B2A88(void *);
void func_089AE128(S_088F4E14 *);
void func_08926200(void *, char *, s32);

void func_088F4E14(S_088F4E14 *arg0) {
    V2_088F4E14 t0;
    V2_088F4E14 s0;
    V2_088F4E14 t1;
    V2_088F4E14 s1;
    V2_088F4E14 t2;
    V2_088F4E14 s2;
    V2_088F4E14 t3;
    V2_088F4E14 s3;
    V2_088F4E14 t4;
    V2_088F4E14 s4;
    V2_088F4E14 t5;
    V2_088F4E14 s5;
    V2_088F4E14 t6;
    V2_088F4E14 s6;
    V4_088F4E14 r;

    r.unk_00 = D_089FDD40[0];
    r.unk_04 = D_089FDD40[1];
    r.unk_08 = D_089FDD48[0];
    r.unk_0C = D_089FDD48[1];
    func_089B295C(arg0->unk_E30, &r, 1);
    s0.unk_00 = 1.0f;
    s0.unk_04 = 1.0f;
    t0.unk_00 = 0.0f;
    t0.unk_04 = 0.0f;
    func_089B298C(arg0->unk_E30, 0x18, &t0, &s0);
    s1.unk_00 = 1.0f;
    s1.unk_04 = 1.0f;
    t1.unk_00 = 0.0f;
    t1.unk_04 = 0.0f;
    func_089B298C(arg0->unk_E30, 0x19, &t1, &s1);
    s2.unk_00 = 1.0f;
    s2.unk_04 = 1.0f;
    t2.unk_00 = 0.0f;
    t2.unk_04 = 0.0f;
    func_089B298C(arg0->unk_E30, 0x1A, &t2, &s2);
    s3.unk_00 = 1.0f;
    s3.unk_04 = 1.0f;
    t3.unk_00 = 0.0f;
    t3.unk_04 = 0.0f;
    func_089B298C(arg0->unk_E30, 0x1B, &t3, &s3);
    s4.unk_00 = 1.0f;
    s4.unk_04 = 1.0f;
    t4.unk_00 = 0.0f;
    t4.unk_04 = 0.0f;
    func_089B298C(arg0->unk_E30, 0x1C, &t4, &s4);
    s5.unk_00 = 1.0f;
    s5.unk_04 = 1.0f;
    t5.unk_00 = 0.0f;
    t5.unk_04 = 0.0f;
    func_089B298C(arg0->unk_E30, 0x1D, &t5, &s5);
    s6.unk_00 = 1.0f;
    s6.unk_04 = 1.0f;
    t6.unk_00 = 0.0f;
    t6.unk_04 = 0.0f;
    func_089B298C(arg0->unk_E30, 0x1E, &t6, &s6);
    func_089B2A88(arg0->unk_E30);
    func_089AE128(arg0);
    if (arg0->unk_4320.v1C() != 0) {
        func_08926200(arg0->unk_5B68, D_089E2EC8, 0);
    } else {
        func_08926200(arg0->unk_4B10, D_089E2EC8, 0);
    }
}

}
