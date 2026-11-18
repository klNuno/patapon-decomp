#include "common.h"

extern "C" {

struct A {
    u8 pad_00[0x100];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

struct B {
    u8 pad_00[0x8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

struct C {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
};

struct D {
    u8 pad_00[0x8100];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

struct E {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
};

struct F {
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

struct G : B {
    u8 pad_0C[0x1014];
    char unk_1020[1];
};

struct T {
    u8 pad_00[0x2980];
    u8 unk_2980[0x24BB0 - 0x2980];
    u8 unk_24BB0[0x36B08 - 0x24BB0];
    A *unk_36B08;
    u8 pad_36B0C[4];
    G *unk_36B10;
    u8 pad_36B14[4];
    C *unk_36B18;
    u8 pad_36B1C[4];
    char unk_36B20[0x40];
    D unk_36B60;
    u8 pad_3EC64[0xC];
    u8 unk_3EC70[0x431A0 - 0x3EC70];
    u8 unk_431A0[0x4B6E4 - 0x431A0];
    F *unk_4B6E4;
    u8 pad_4B6E8[0x53C60 - 0x4B6E8];
    E unk_53C60;
    u8 pad_53C8C[0x55428 - 0x53C8C];
    void *unk_55428;
    u8 pad_5542C[0x55598 - 0x5542C];
    u8 unk_55598[0x65FD4 - 0x55598];
    u8 unk_65FD4;
};

extern void *D_08AD8DD8[];
s32 func_08814C0C(s32);
void func_088649A4(s32 *);
void func_088649D8(s32 *, s32);
extern int func_08864FC0(s32);
void func_088828D4(void *);
extern void func_088CE14C(char *);
void func_0891B970(void *);
void func_0891E000(char *);
void func_0891E048(char *);
void func_0892E740(void *, s32);
void func_089343C4(void *);
void func_089459DC(void *);
void func_0895686C(void *);
s32 func_089D1AC8(void *);
void func_089D1C60(void *);

s32 func_08873998(T *arg0) {
    s32 temp;
    G *p;
    C *q;
    void *r;

    func_088649A4(&temp);
    func_08864FC0((s32)arg0->unk_36B08);
    arg0->unk_36B60.unk_14();
    p = arg0->unk_36B10;
    if (p != NULL) {
        p->unk_14();
    }
    func_08814C0C(1);
    func_0891E000(arg0->unk_36B10->unk_1020);
    func_088CE14C(arg0->unk_36B20);
    func_0891E048(arg0->unk_36B10->unk_1020);
    arg0->unk_36B60.unk_18();
    arg0->unk_53C60.unk_0C();
    func_088828D4(arg0->unk_3EC70);
    arg0->unk_36B08->unk_14();
    q = arg0->unk_36B18;
    if (q != NULL) {
        q->unk_3C();
    }
    func_089343C4(arg0->unk_24BB0);
    func_089459DC(arg0->unk_431A0);
    func_0895686C(arg0->unk_2980);
    func_088649D8(&temp, -1);
    r = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
    func_0892E740(r, 0);
    arg0->unk_4B6E4->unk_18();
    func_0891B970(arg0->unk_55428);
    if (func_089D1AC8(arg0->unk_55598) != 0 && arg0->unk_65FD4 != 0) {
        func_089D1C60(arg0->unk_55598);
    }
    return 1;
}

}
