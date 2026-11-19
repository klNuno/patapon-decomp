#include "common.h"

extern "C" {

class A {
public:
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
};

class B {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(f32);
};

void func_088E1204(void *, s32);

struct H {
    s32 unk_00;
    A *unk_04;
    void *unk_08;
    s32 *unk_0C;

    void unk_10() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *temp = *(s32 *volatile *)&unk_0C;
            if ((temp != NULL ? *temp : 0) == 0) {
                unk_04->unk_0C(unk_08, unk_0C, unk_00);
                func_088E1204(unk_08, unk_00);
            }
        }
    }

};

struct N {
    u8 pad_00[0x10850];
    u8 unk_10850;
};
struct C {
    u8 pad_00[0x2DAC0];
    u8 unk_2DAC0[4];
    u8 pad_2DAC4[0x50560 - 0x2DAC4];
    u8 unk_50560[0x190];
    u8 unk_506F0[4];
    u8 pad_506F4[0xB21EC - 0x506F4];
    s32 unk_B21EC;
};
struct S {
    u8 pad_00[0x10];
    C *unk_10;
    u8 pad_14[0x14];
    u32 unk_28;
};
struct A_089397E4;
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
void func_088DDFA0(u8 *, u32);
s32 func_088DE5C0(s32 arg0);
void func_088DE490(void *);
void func_088E1204(void *, s32);
void func_088E24AC(void *, s32);
void func_088F31AC(H *, u8 *);
void func_088F31F0(u8 *, H *);
void func_088F3354(H *, u8 *);
void func_088F3FCC(u8 *);
void func_088F4040(u8 *);
s32 func_088C6464(void *);
void func_089397E4(A_089397E4 *arg0, s32 arg1);
s32 func_0893A7D8(char *arg0);
s32 func_0893A7E0(char *arg0);

void func_088FE2F4(S *arg0, void *arg1) {
    s32 temp = func_08852EB8(arg1);
    switch (temp) {
    case 6: {
        H h;
        func_088F3354(&h, arg0->unk_10->unk_50560);
        func_088F31F0(arg0->unk_10->unk_50560, &h);
        h.unk_10();
        func_088F4040(arg0->unk_10->unk_50560);
        func_088F3FCC(arg0->unk_10->unk_50560);
        func_088DDFA0((u8 *)arg0->unk_10, 0);
        ((B *)arg0->unk_10->unk_2DAC0)->unk_18(0.0f);
        ((N *)func_088C6464(arg0->unk_10->unk_506F0))->unk_10850 = 0;
        func_08852EDC(arg1, temp + 1);
        break;
    }
    case 7:
        func_08852EDC(arg1, temp + 1);
        func_089397E4((A_089397E4 *)func_088DE5C0((s32)arg0->unk_10), 0);
        break;
    case 8: {
        u8 *temp2 = (u8 *)arg0->unk_10;
        func_088DDFA0(temp2, *(volatile u32 *)&arg0->unk_28);
        func_08852EDC(arg1, temp + 1);
        break;
    }
    case 9:
        if (func_0893A7E0((char *)func_088DE5C0((s32)arg0->unk_10)) != 0)
            func_08852F00(arg1, 0);
        break;
    case 10: {
        func_089397E4((A_089397E4 *)func_088DE5C0((s32)arg0->unk_10), 1);
        func_08852EDC(arg1, temp + 1);
        H h;
        func_088F3354(&h, arg0->unk_10->unk_50560);
        func_088F31F0(arg0->unk_10->unk_50560, &h);
        h.unk_10();
        break;
    }
    case 11:
        if (func_0893A7D8((char *)func_088DE5C0((s32)arg0->unk_10)) != 0) {
            u8 *temp2 = (u8 *)arg0->unk_10;
            func_088DDFA0(temp2, *(volatile u32 *)&arg0->unk_28);
            func_08852EDC(arg1, temp + 1);
        }
        break;
    case 12:
        if (func_0893A7E0((char *)func_088DE5C0((s32)arg0->unk_10)) != 0)
            func_08852EDC(arg1, temp + 1);
        break;
    case 13: {
        H h;
        func_088F31AC(&h, arg0->unk_10->unk_50560);
        s32 temp2 = *(void *volatile *)&h.unk_08 != NULL;
        h.unk_10();
        if (temp2) {
            H h2;
            func_088F31AC(&h2, arg0->unk_10->unk_50560);
            func_088E24AC(h2.unk_08, 0);
            h2.unk_10();
        }
        if (arg0->unk_10->unk_B21EC != 0)
            func_088DE490(arg0->unk_10);
        func_088F3FCC(arg0->unk_10->unk_50560);
        func_088F4040(arg0->unk_10->unk_50560);
        N *temp3 = (N *)func_088C6464(arg0->unk_10->unk_506F0);
        temp3->unk_10850 = 1;
        func_08852F00(arg1, 0);
        break;
    }
    }
}

}
