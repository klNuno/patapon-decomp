#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(char *);
};

class B {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
};

struct C {
    C *unk_00;
    u8 pad_04[0xC];
    u8 unk_10;
};

struct I {
    C *unk_00;
    s32 eq(I arg0) { return unk_00 == arg0.unk_00; }
    bool ne(I arg0) { return !(bool)eq(arg0); }
};

struct T {
    u8 pad_00[0x19094];
    C unk_19094;
    u8 pad_190A8[8];
    u8 unk_190B0;
    u8 pad_190B1[0x10BF];
    A *unk_1A170;
    u8 pad_1A174[0xC];
    B unk_1A180;
};

void func_08858024(s32);
void func_0885807C(void);
void func_088580F8(void);
void func_088576F8(void);
void func_08857D10(f32, f32, f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08912FE8(void *);

extern char D_08A043EC[];
extern s8 D_08AD9E50[];
extern U D_08AD9E60[];
extern s8 D_08AD9E70[];
extern U D_08AD9E80[];
extern s8 D_08AD9E90[];
extern U D_08AD9EA0[];
extern s8 D_08AD9EB0[];
extern U D_08AD9EC0[];

void func_089500DC(T *arg0) {
    I temp;
    I temp2;

    arg0->unk_1A170->unk_18(D_08A043EC);
    func_08912FE8(&arg0->unk_190B0);
    temp.unk_00 = arg0->unk_19094.unk_00;
    temp2.unk_00 = &arg0->unk_19094;
    if (temp.ne(temp2)) {
        do {
            func_08912FE8(&temp.unk_00->unk_10);
            temp.unk_00 = temp.unk_00->unk_00;
        } while (temp.ne(temp2));
    }
    if (D_08AD9E50[0] == 0) {
        D_08AD9E60[0].unk_00 = 0.0f;
        D_08AD9E60[0].unk_04 = 0.0f;
        D_08AD9E60[0].unk_08 = 10.0f;
        D_08AD9E60[0].unk_0C = 0.0f;
        D_08AD9E50[0] = 1;
    }
    if (D_08AD9E70[0] == 0) {
        D_08AD9E80[0].unk_00 = 0.0f;
        D_08AD9E80[0].unk_04 = 0.0f;
        D_08AD9E80[0].unk_08 = 0.0f;
        D_08AD9E80[0].unk_0C = 0.0f;
        D_08AD9E70[0] = 1;
    }
    if (D_08AD9E90[0] == 0) {
        D_08AD9EA0[0].unk_00 = 0.0f;
        D_08AD9EA0[0].unk_04 = 1.0f;
        D_08AD9EA0[0].unk_08 = 0.0f;
        D_08AD9EA0[0].unk_0C = 0.0f;
        D_08AD9E90[0] = 1;
    }
    if (D_08AD9EB0[0] == 0) {
        D_08AD9EC0[0].unk_00 = 1.0f;
        D_08AD9EC0[0].unk_04 = 1.0f;
        D_08AD9EC0[0].unk_08 = 1.0f;
        D_08AD9EC0[0].unk_0C = 0.0f;
        D_08AD9EB0[0] = 1;
    }
    func_08858024(0);
    func_0885807C();
    func_088576F8();
    func_08857D10(0.0f, 480.0f, 272.0f, 0.0f, 0.1f, 1000.0f);
    func_08858024(1);
    func_0885807C();
    func_088576F8();
    func_08857E5C(D_08AD9E60, D_08AD9E80, D_08AD9EA0);
    func_08858024(2);
    func_0885807C();
    arg0->unk_1A180.unk_0C();
    func_08858024(0);
    func_088580F8();
    func_08858024(1);
    func_088580F8();
    func_08858024(2);
    func_088580F8();
}
}
