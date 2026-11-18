#include "common.h"

extern "C" {

typedef struct {
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 unk_10[4];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    void *unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    f32 unk_40;
    u8 pad_44[0x1C];
} A_089906D8;

typedef struct {
    u8 pad_00[0x6];
    u8 unk_06;
    u8 pad_07[0x29];
} R_089906D8;

class X_089906D8 {
public:
    u8 pad_00[0x24];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual R_089906D8 v14(A_089906D8 *);
};

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x2];
    s32 unk_04;
} S_089906D8;

typedef struct {
    u8 pad_00[0x48];
    S_089906D8 *unk_48;
} Obj_089906D8;

typedef struct {
    u8 pad_00[0x48];
    X_089906D8 *unk_48;
    u8 pad_4C[0x8];
    s32 unk_54;
} Arg_089906D8;

void func_0881F5C0(void *, s32, s32);

void func_089906D8(Obj_089906D8 *arg0, Arg_089906D8 *arg1) {
    A_089906D8 a;
    R_089906D8 r;
    S_089906D8 *s;
    s32 type;

    type = arg1->unk_54;
    s = arg0->unk_48;
    a.unk_0C = -1;
    func_0881F5C0(a.unk_10, 0, 4);
    a.unk_00 = 1;
    a.unk_04 = 0;
    a.unk_08 = 0;
    a.unk_0C = -1;
    func_0881F5C0(a.unk_10, 0, 4);
    a.unk_14 = -1;
    a.unk_40 = 0.5f;
    a.unk_04 = 3;
    a.unk_30 = NULL;
    a.unk_34 = 0;
    a.unk_38 = 0;
    a.unk_3C = 0;
    a.unk_20 = 0;
    a.unk_24 = 0;
    a.unk_28 = 0;
    a.unk_2C = 0;
    a.unk_18 = 0;
    s->unk_00 = 1;
    s->unk_04++;
    switch (type) {
    case 2:
    case 1:
        s->unk_01 = 1;
        break;
    case 6:
    case 7:
        r = arg1->unk_48->v14(&a);
        if (r.unk_06 != 0) {
            s->unk_01 = 1;
            s->unk_04++;
        }
        break;
    }
}

}
