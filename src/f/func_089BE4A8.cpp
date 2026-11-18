#include "common.h"
#pragma divbyzerocheck on

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
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0C[0x32C];
    u8 unk_338[0x984];
    s32 unk_CBC;
    s32 unk_CC0;
    s32 unk_CC4;
    u8 unk_CC8[4];
    s32 unk_CCC;
    u8 pad_CD0[0x118];
    u8 unk_DE8;
    u8 unk_DE9;
    u8 pad_DEA[6];
    s32 unk_DF0;
    s32 unk_DF4;
    s32 unk_DF8;
    s32 unk_DFC;
    u32 unk_E00;
} S_089BE4A8;

typedef struct {
    u8 pad_00[0x48];
    u32 unk_48;
} E;

typedef union {
    R_089BD93C *unk_00;
    f32 unk_04;
} I;

s32 func_088586E8(void);
u32 func_0887B068(s32);
u32 func_089B5464(s32);
u8 *func_089B53D8(s32);
void func_089578A8(f32, U_089BD93C *, s32, s32);
void func_089579D8(U_089BD93C *);
void func_0897C818(H_089BD93C *, void *, s32);
s32 func_089C63F4(void *, s32);
void func_089C6548(void *, s32, s32, s32);

void func_089BE4A8(S_089BE4A8 *arg0, s32 arg1) {
    H_089BD93C h;
    I i;
    I j;
    u32 n;
    E *e;
    s32 t;
    u8 *p;

    arg0->unk_00->unk_2888 = 0;
    arg0->unk_DF0 = 0;
    arg0->unk_DF4 = 0;
    arg0->unk_CC4 = 0;
    arg0->unk_CC0 = 0;
    arg0->unk_CBC = 0;
    arg0->unk_08 = 0;
    arg0->unk_DF8 = 0;
    arg0->unk_DFC = 0;
    arg0->unk_DE8 = 0;
    arg0->unk_DE9 = 0;
    n = func_089B5464(func_088586E8());
    switch (arg1) {
    case 0:
        func_089578A8(0.0f, arg0->unk_00, 2, 7);
        func_089C6548(arg0->unk_CC8, func_089C63F4(arg0->unk_338, 0), 0, 0);
        func_0897C818(&h, func_089B53D8(func_088586E8()) + 0x14, 1);
        i.unk_00 = h.unk_00;
        j = i;
        p = func_089B53D8(func_088586E8());
        if (j.unk_00 != (R_089BD93C *)(p + 0xB0)) {
            h.unk_00->unk_10->v13(0);
        }
        break;
    case 1:
        e = (E *)func_089C63F4(arg0->unk_338, 1);
        t = func_089C63F4(arg0->unk_338, 1);
        func_089C6548(arg0->unk_CC8, t, n % e->unk_48, 0);
        break;
    case 2:
        e = (E *)func_089C63F4(arg0->unk_338, 2);
        t = func_089C63F4(arg0->unk_338, 2);
        func_089C6548(arg0->unk_CC8, t, n % e->unk_48, 0);
        break;
    case 3:
        e = (E *)func_089C63F4(arg0->unk_338, 3);
        t = func_089C63F4(arg0->unk_338, 3);
        func_089C6548(arg0->unk_CC8, t, n % e->unk_48, 0);
        break;
    }
    arg0->unk_CC4 = arg0->unk_CCC;
    arg0->unk_E00 = func_0887B068((s32)arg0->unk_00 + 8);
    func_089579D8(arg0->unk_00);
}

}
