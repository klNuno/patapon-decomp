#include "common.h"

extern "C" {
struct UnkV {
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual void func_28();
    virtual void func_2C();
    virtual void func_30();
    virtual void func_34();
    virtual void func_38();
    virtual void func_3C();
    virtual s32 func_40();
    virtual void func_44();
    virtual void func_48();
    virtual s32 func_4C();
};
struct Unk10 {
    u8 pad_00[0x10];
    UnkV *unk_10;
};
struct Unk104 {
    u32 unk_00;
    char unk_04[4];
    char *unk_08;
};
struct Unk284 {
    u8 pad_00[0x104];
    Unk104 unk_104;
    u8 pad_110[0x1C];
    u8 unk_12C[0x158];
    s32 unk_284;
};
struct It {
    Unk10 *unk_00;
    It(const It &arg0) : unk_00(arg0.unk_00) {}
};
union UnkWord {
    Unk10 *unk_00;
    f32 unk_04;
};

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
It func_0897C818(void *, s32);
void func_08858F88(void *, u32, s32, void *, ...);
struct Obj_08885980;
void func_08885980(Obj_08885980 *, s32, s32, void *);
extern char D_08A0732C[];
extern char D_08A07350[];
extern char D_08A07374[];
extern char D_08A07398[];
extern char D_08A073BC[];
extern char D_08A073E0[];
extern char D_08A07404[];
extern char D_08A07428[];
extern char D_08A0744C[];
extern char D_08A07470[];
extern char D_08A07494[];
extern char D_08A074B8[];
extern char D_08A074CC[];
extern char D_08A074E8[];
extern char D_08A074F4[];
extern char D_08A074F8[];
extern char D_08A074FC[];

void func_089A6570(Unk284 *arg0)
{
    u8 *p = func_089B53D8(func_088586E8());
    It it = func_0897C818(p + 0x14, 8);
    volatile UnkWord t;
    volatile UnkWord u;
    switch (arg0->unk_284) {
    case 0:
        func_08858F88(arg0, 5, 2, D_08A074B8);
        func_08885980((Obj_08885980 *)arg0->unk_12C, 5, 1, D_08A074CC);
        break;
    case 1:
        t.unk_00 = it.unk_00;
        u.unk_04 = t.unk_04;
        if (u.unk_00 != (Unk10 *)(p + 0xB0)) {
            func_08858F88(arg0, 5, 3, D_08A074E8,
                arg0->unk_104.unk_00 & 1 ? arg0->unk_104.unk_08 : (char *)&arg0->unk_104 + 1);
            char *a;
            char *b;
            if (it.unk_00->unk_10->func_40() != 0) a = D_08A074F4;
            else a = D_08A074F8;
            if (it.unk_00->unk_10->func_4C() != 0) b = D_08A074F8;
            else b = D_08A074F4;
            func_08858F88(arg0, 5, 4, D_08A074FC, b, a);
        }
        func_08858F88(arg0, 8, 0x12, D_08A0732C);
        func_08858F88(arg0, 8, 0x13, D_08A07350);
        func_08858F88(arg0, 8, 0x14, D_08A07374);
        func_08858F88(arg0, 8, 0x15, D_08A07398);
        func_08858F88(arg0, 8, 0x16, D_08A073BC);
        func_08858F88(arg0, 8, 0x17, D_08A073E0);
        func_08858F88(arg0, 8, 0x18, D_08A07404);
        func_08858F88(arg0, 8, 0x19, D_08A07428);
        func_08858F88(arg0, 8, 0x1A, D_08A0744C);
        func_08858F88(arg0, 8, 0x1B, D_08A07470);
        func_08858F88(arg0, 8, 0x1C, D_08A07494);
        break;
    }
}
}
