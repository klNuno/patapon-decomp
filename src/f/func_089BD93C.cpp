#include "common.h"

extern "C" {

class C_089BD93C {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13(s32);
};

typedef struct {
    u8 pad_00[0x10];
    C_089BD93C *unk_10;
} R_089BD93C;

typedef struct {
    R_089BD93C *unk_00;
} H_089BD93C;

typedef struct {
    u8 pad_00[0x2888];
    u8 unk_2888;
} U_089BD93C;

typedef struct {
    U_089BD93C *unk_00;
    u8 pad_04[0x334];
    u8 unk_338[0x980];
    u8 unk_CB8[0x4];
    s32 unk_CBC;
    u8 pad_CC0[0x120];
    s32 unk_DE0;
    s32 unk_DE4;
    s32 unk_DE8;
    s32 unk_DEC;
    u8 pad_DF0[0x4];
    s32 unk_DF4;
    s32 unk_DF8;
    s32 unk_DFC;
    s32 unk_E00;
    s32 unk_E04;
    u8 unk_E08;
} S_089BD93C;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_089578A8(f32, U_089BD93C *, s32, s32);
void func_089579D8(U_089BD93C *);
void func_0897C818(H_089BD93C *, void *, s32);
s32 func_089C63F4(void *, s32);
void func_089C6548(void *, s32, s32, s32);

void func_089BD93C(S_089BD93C *arg0, s32 arg1) {
    H_089BD93C h;

    arg0->unk_00->unk_2888 = 0;
    func_089578A8(0.0f, arg0->unk_00, 2, 7);
    func_089579D8(arg0->unk_00);
    func_0897C818(&h, func_089B53D8(func_088586E8()) + 0x14, 1);
    h.unk_00->unk_10->v13(0);
    arg0->unk_DE0 = 0;
    arg0->unk_DE4 = 0;
    arg0->unk_DE8 = 0;
    arg0->unk_DEC = 0;
    arg0->unk_DF8 = 0;
    arg0->unk_DF4 = 0;
    arg0->unk_E00 = 0;
    arg0->unk_E04 = 0;
    arg0->unk_E08 = 0;
    switch (arg1) {
    case 0:
        func_089C6548(arg0->unk_CB8, func_089C63F4(arg0->unk_338, 0), 0, 0);
        break;
    case 1:
        func_089C6548(arg0->unk_CB8, func_089C63F4(arg0->unk_338, 1), 0, 0);
        break;
    }
    arg0->unk_DFC = arg0->unk_CBC;
}

}
