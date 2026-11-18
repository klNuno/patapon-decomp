#include "common.h"

extern "C" {

class C_089B298C {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32, s32);
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2_089B298C;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4_089B298C;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[0x10];
    V4_089B298C unk_30;
    u8 pad_40[0x10];
} M_089B298C;

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 unk_44[0x20];
} E_089B298C;

typedef struct {
    u8 pad_00[0x1910];
    E_089B298C *unk_1910;
    u8 pad_1914[4];
    C_089B298C *unk_1918;
    u8 pad_191C[4];
    u8 unk_1920[4];
} T_089B298C;

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_08855354(M_089B298C *);
void func_088651A4(void *, M_089B298C *, void *, s32, s32);

void func_089B298C(T_089B298C *arg0, s32 arg1, V2_089B298C *arg2, f32 *arg3) {
    E_089B298C *e;
    M_089B298C m;
    V4_089B298C t;

    e = &arg0->unk_1910[arg1];
    if (e->unk_40 != -1) {
        arg0->unk_1918->v14(e->unk_40, 0);
        func_08814BB4(9);
    } else {
        func_08814C0C(9);
    }
    func_08855354(&m);
    m.unk_00 = arg3[0];
    m.unk_04 = 0.0f;
    m.unk_08 = 0.0f;
    m.unk_0C = 0.0f;
    m.unk_14 = arg3[1];
    m.unk_10 = 0.0f;
    m.unk_18 = 0.0f;
    m.unk_1C = 0.0f;
    t.unk_00 = arg2->unk_00;
    t.unk_04 = arg2->unk_04;
    t.unk_08 = 0.0f;
    t.unk_0C = 1.0f;
    m.unk_30 = t;
    func_088651A4(e->unk_44, &m, arg0->unk_1920, 0, 1);
}

}
