#include "common.h"

extern "C" {
struct Obj_08998D30;
struct S_089C56F4;
struct O_089B4374;

extern s32 func_088148F0(s32, s32);
O_089B4374 *func_0886095C(void);
void func_088648E4(O_089B4374 *, s32);
s32 func_08877434(s32, s32);
void func_08995054(void *);
void func_089992CC(Obj_08998D30 *);
void func_089994B8(s32, s32);
void func_08999B48(s32);
extern s32 func_0899ED9C(s32);
void func_089C56F4(S_089C56F4 *);
void func_089C6854(void *);
void scePowerSetClockFrequency350(s32, s32, s32);
extern s32 D_08AD1F14[];

class Unk04 {
public:
    virtual void func_08();
    virtual void func_0C(s32, s32 *, s32);
};

struct Unk10 {
    s32 unk_00;
    Unk04 *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    s32 func_00() { return unk_0C != NULL ? *unk_0C : 0; }

    void func_04()
    {
        s32 &p = unk_08;
        if (p != 0) {
            --*unk_0C;
            if (func_00() == 0) {
                unk_04->func_0C(p, unk_0C, unk_00);
                func_089994B8(p, unk_00);
            }
        }
    }
};

class Unk50 {
public:
    u8 pad_00[0x50];
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
    virtual void func_3C(s32);
};

struct Unk4BD70 {
    Unk50 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    u8 pad_18[0x21C8];
    u8 unk_21E0;
    u8 pad_21E1[0x483D3];
    Unk10 *unk_4A5B4;
    s32 unk_4A5B8;
    u8 unk_4A5BC;
    u8 pad_4A5BD[0x1793];
    u8 unk_4BD50;
    u8 unk_4BD51;
    u8 pad_4BD52[0x1E];
    u8 unk_4BD70;
    u8 pad_4BD71[0x10A5F];
    u8 unk_5C7D0;
};

inline s32 func_00()
{
    s32 temp = D_08AD1F14[0];
    return temp != 0 ? temp : 0;
}

void func_08997830(Unk4BD70 *arg0)
{
    func_088148F0(4, 0);
    func_08995054(&arg0->unk_21E0);
    func_089C56F4((S_089C56F4 *)&arg0->unk_4A5BC);
    func_089C6854(&arg0->unk_4BD70);
    func_089C6854(&arg0->unk_5C7D0);
    if (arg0->unk_4BD51 == 1) {
        u32 i = 0;
        u32 j = 0;
        Unk10 **p = &arg0->unk_4A5B4;
        do {
            func_08999B48(((Unk10 *)((u8 *)*p + j))->unk_08);
            ++i;
            j += sizeof(Unk10);
        } while (i < 3U);
        i = 0;
        do {
            func_0899ED9C(func_08877434(func_00(), i));
        } while (++i < 3U);
    }
    Unk10 *p = arg0->unk_4A5B4;
    Unk10 **d = &arg0->unk_4A5B4;
    if ((u32)p != (u32)(*d + arg0->unk_4A5B8)) {
        s32 *n = &arg0->unk_4A5B8;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    p->func_04();
                }
            }
            ++p;
        } while (p != *d + *n);
    }
    arg0->unk_4A5B8 = 0;
    func_089992CC((Obj_08998D30 *)arg0);
    arg0->unk_14 = 0;
    arg0->unk_10 = 0;
    arg0->unk_4BD50 = 0;
    arg0->unk_4BD51 = 0;
    arg0->unk_00->func_3C(1);
    scePowerSetClockFrequency350(222, 222, 111);
    func_088648E4(func_0886095C(), 0);
}
}
