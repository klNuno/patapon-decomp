#include "common.h"

extern "C" {

class Del {
public:
    virtual s32 *vf_08(void *, s32);
    virtual void vf_0C(void *, s32 *, s32);
};

void func_08958A88(void *, s32);
Del *func_08827AD4(void);

class Ptr {
public:
    s32 unk_00;
    Del *unk_04;
    void *unk_08;
    s32 *unk_0C;

    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }

    void release() {
        void *&p = unk_08;
        if (p != NULL) {
            s32 *&c = unk_0C;
            --*c;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_08958A88(p, unk_00);
            }
        }
    }
};

struct Unk;
struct S;

struct T {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0xA88 - 0x50];
    Ptr unk_A88;
    s32 unk_A98;
    void *unk_A9C;
    void *unk_AA0;
    void *unk_AA4;
    void *unk_AA8;
    u8 pad_AAC[0x1D50 - 0xAAC];
    char unk_1D50[0x1F30 - 0x1D50];
    s32 unk_1F30;
    u8 pad_1F34[0x220A8 - 0x1F34];
    s32 unk_220A8;
    s32 unk_220AC;
    u8 pad_220B0[0x22134 - 0x220B0];
    u8 unk_22134[0x24];
};

void *func_08827A50(s32, s32);
s32 func_088586E8(void);
s32 func_08858BC0(void);
void func_088790E0(Unk *arg0, f32 arg1);
void func_088A4138(f32, void *, s32);
void func_08951918(void *);
void func_08952658(char *arg0, s32 arg1);
void func_08952660(void *, s32);
void func_08955304(Ptr *, s32);
void func_089578A8(S *arg0, s32 arg1, s32 arg2, f32 arg3);
Ptr *func_089582D0(Ptr *, Ptr *);
void func_08958318(Ptr *, Ptr *);
void func_0895835C(Ptr *);
void func_08958EC8(void *, const void *, s32, s32, s32, f32, s32);
void func_0897C3F4(f32, void *, s32);
void *func_08986A9C(void *, T *, void *, s32);
s32 func_089B53D8(s32);
void *func_089BD220(void *, T *, void *, s32);
void *func_089BEB5C(void *, T *, void *, s32);
void *func_089BEE7C(void *, T *, void *, s32);
void *func_089C03C0(void *, T *, void *, s32);
extern u8 D_08A04C1C[];

void func_089579E8(T *arg0, s32 arg1, u32 arg2, f32 arg3) {
    Ptr temp110, temp100, tempF0, tempE0, tempD0;
    Ptr tempC0, tempB0, tempA0, temp90, temp80;
    Ptr temp70, temp60, temp50, temp40, temp30;
    void *p;

    switch (arg2) {
    case 0: default:
        break;
    case 1:
        if (arg0->unk_A98 != 0) {
            func_088790E0((Unk *)func_089B53D8(func_088586E8()), 0.5f);
            func_08952658(arg0->unk_1D50, arg2);
            func_08958EC8(arg0->unk_22134, D_08A04C1C, 2, 1, 0, 0.0f, 9);
        }
        break;
    case 2:
        func_0897C3F4(arg3, arg0->unk_AA4, 0);
        func_088A4138(0.0f, arg0->unk_AA8, 0);
        arg0->unk_220A8 = 4;
        arg0->unk_220AC = 0;
        func_0895835C(&tempC0);
        func_08958318(&tempC0, &arg0->unk_A88);
        func_08955304(&tempC0, -1);
        arg0->unk_1F30 = 1;
        arg0->unk_4C = 0;
        p = func_08827A50(0x37D8, func_08858BC0());
        if (p != NULL) {
            p = func_08986A9C(p, arg0, arg0->unk_AA8, arg1);
        }
        temp110.unk_00 = func_08858BC0();
        temp110.unk_04 = func_08827AD4();
        temp110.unk_08 = p;
        temp110.unk_0C = temp110.unk_04->vf_08(p, temp110.unk_00);
        *temp110.unk_0C = 1;
        func_089582D0(&tempB0, &temp110);
        func_08958318(&tempB0, &arg0->unk_A88);
        func_08955304(&tempB0, -1);
        temp110.release();
        arg0->unk_A9C = p;
        arg0->unk_AA0 = p;
        func_089578A8((S *)arg0, 2, 7, arg3);
        arg0->unk_220A8 = 1;
        arg0->unk_220AC = 0;
        func_08952658(arg0->unk_1D50, arg2);
        func_08951918(arg0->unk_1D50);
        func_08952660(arg0->unk_1D50, arg2);
        break;
    case 3:
    case 4:
        func_0897C3F4(arg3, arg0->unk_AA4, 0);
        func_088A4138(0.0f, arg0->unk_AA8, 0);
        arg0->unk_220A8 = 4;
        arg0->unk_220AC = 0;
        func_0895835C(&tempA0);
        func_08958318(&tempA0, &arg0->unk_A88);
        func_08955304(&tempA0, -1);
        arg0->unk_1F30 = 1;
        arg0->unk_4C = 0;
        p = func_08827A50(0x1850, func_08858BC0());
        if (p != NULL) {
            p = func_089BD220(p, arg0, arg0->unk_AA8, arg1);
        }
        temp100.unk_00 = func_08858BC0();
        temp100.unk_04 = func_08827AD4();
        temp100.unk_08 = p;
        temp100.unk_0C = temp100.unk_04->vf_08(p, temp100.unk_00);
        *temp100.unk_0C = 1;
        func_089582D0(&temp90, &temp100);
        func_08958318(&temp90, &arg0->unk_A88);
        func_08955304(&temp90, -1);
        temp100.release();
        arg0->unk_A9C = p;
        arg0->unk_AA0 = p;
        arg0->unk_220A8 = 1;
        arg0->unk_220AC = 0;
        func_08952658(arg0->unk_1D50, arg2);
        func_08952660(arg0->unk_1D50, arg2);
        break;
    case 5:
        func_0897C3F4(arg3, arg0->unk_AA4, 0);
        func_088A4138(0.0f, arg0->unk_AA8, 0);
        arg0->unk_220A8 = 4;
        arg0->unk_220AC = 0;
        func_0895835C(&temp80);
        func_08958318(&temp80, &arg0->unk_A88);
        func_08955304(&temp80, -1);
        arg0->unk_1F30 = 1;
        arg0->unk_4C = 0;
        p = func_08827A50(0x1848, func_08858BC0());
        if (p != NULL) {
            p = func_089BEB5C(p, arg0, arg0->unk_AA8, arg1);
        }
        tempF0.unk_00 = func_08858BC0();
        tempF0.unk_04 = func_08827AD4();
        tempF0.unk_08 = p;
        tempF0.unk_0C = tempF0.unk_04->vf_08(p, tempF0.unk_00);
        *tempF0.unk_0C = 1;
        func_089582D0(&temp70, &tempF0);
        func_08958318(&temp70, &arg0->unk_A88);
        func_08955304(&temp70, -1);
        tempF0.release();
        arg0->unk_A9C = p;
        arg0->unk_AA0 = p;
        arg0->unk_220A8 = 1;
        arg0->unk_220AC = 0;
        func_08952658(arg0->unk_1D50, arg2);
        func_08952660(arg0->unk_1D50, arg2);
        break;
    case 6:
        func_0897C3F4(arg3, arg0->unk_AA4, 0);
        func_088A4138(0.0f, arg0->unk_AA8, 0);
        arg0->unk_220A8 = 4;
        arg0->unk_220AC = 0;
        func_0895835C(&temp60);
        func_08958318(&temp60, &arg0->unk_A88);
        func_08955304(&temp60, -1);
        arg0->unk_1F30 = 1;
        arg0->unk_4C = 0;
        p = func_08827A50(0x1854, func_08858BC0());
        if (p != NULL) {
            p = func_089BEE7C(p, arg0, arg0->unk_AA8, arg1);
        }
        tempE0.unk_00 = func_08858BC0();
        tempE0.unk_04 = func_08827AD4();
        tempE0.unk_08 = p;
        tempE0.unk_0C = tempE0.unk_04->vf_08(p, tempE0.unk_00);
        *tempE0.unk_0C = 1;
        func_089582D0(&temp50, &tempE0);
        func_08958318(&temp50, &arg0->unk_A88);
        func_08955304(&temp50, -1);
        tempE0.release();
        arg0->unk_A9C = p;
        arg0->unk_AA0 = p;
        arg0->unk_220A8 = 1;
        arg0->unk_220AC = 0;
        func_08952658(arg0->unk_1D50, arg2);
        func_08952660(arg0->unk_1D50, arg2);
        break;
    case 7:
        func_0897C3F4(arg3, arg0->unk_AA4, 0);
        func_088A4138(0.0f, arg0->unk_AA8, 0);
        arg0->unk_220A8 = 4;
        arg0->unk_220AC = 0;
        func_0895835C(&temp40);
        func_08958318(&temp40, &arg0->unk_A88);
        func_08955304(&temp40, -1);
        arg0->unk_1F30 = 1;
        arg0->unk_4C = 0;
        p = func_08827A50(0x184C, func_08858BC0());
        if (p != NULL) {
            p = func_089C03C0(p, arg0, arg0->unk_AA8, arg1);
        }
        tempD0.unk_00 = func_08858BC0();
        tempD0.unk_04 = func_08827AD4();
        tempD0.unk_08 = p;
        tempD0.unk_0C = tempD0.unk_04->vf_08(p, tempD0.unk_00);
        *tempD0.unk_0C = 1;
        func_089582D0(&temp30, &tempD0);
        func_08958318(&temp30, &arg0->unk_A88);
        func_08955304(&temp30, -1);
        tempD0.release();
        arg0->unk_A9C = p;
        arg0->unk_AA0 = p;
        arg0->unk_220A8 = 1;
        arg0->unk_220AC = 0;
        func_08952658(arg0->unk_1D50, arg2);
        func_08952660(arg0->unk_1D50, arg2);
        break;
    }
}

}
