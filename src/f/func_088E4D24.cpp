#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;
class A {
public:
    u8 pad_00[0xC];
    f32 unk_0C;
    virtual void unk_08();
    virtual void unk_0C_v();
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
    virtual void unk_40();
    virtual void unk_44();
    virtual s32 unk_48(s32);
};
typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0;
} B;
typedef struct {
    u32 unk_00;
    u8 pad_04[0x3C];
    A *unk_40;
    u8 pad_44[0x4C];
} C;
typedef struct {
    u8 pad_00[0xD8];
    B *unk_D8;
    u8 pad_DC[0x10];
    u8 unk_EC;
    u8 pad_ED[3];
    C unk_F0[3];
    u8 pad_2A0[0x18];
    f32 unk_2B8;
    f32 unk_2BC;
    u8 pad_2C0[0x10];
    u8 unk_2D0[4];
} D;
typedef struct {
    u8 pad_00[0x1A90];
    V unk_1A90[2];
} E;

void func_08814BB4(s32);
s32 func_08814C0C(s32);
s32 func_08814CF4(s32);
void func_088155BC(s32);
f32 func_08855060(void *, void *);
s32 func_088C6494(void *);
extern s32 func_088E5034(s32);
void func_08930834(void *, s32);
extern s32 D_089FC758[];

void func_088E4D24(D *arg0) {
    V temp;
    A *temp2;
    f32 temp3;
    f32 temp4;
    u32 temp7;
    V *temp5;
    V *temp6;
    s32 temp8;
    s32 temp9;
    s32 temp10;
    f32 temp11;
    f32 temp12;

    if (arg0->unk_EC == 1) {
        temp2 = ((D *)((u8 *)arg0 + func_088E5034((s32)arg0) * sizeof(C)))->unk_F0[0].unk_40;
        temp3 = temp2 != NULL ? temp2->unk_0C : 0.0f;
        temp4 = 2.0f * temp3;
        if (arg0->unk_D8 != NULL) {
            temp12 = arg0->unk_2BC;
            temp11 = arg0->unk_2B8;
            temp.unk_00 = temp11;
            temp.unk_04 = temp12;
            temp.unk_0C = 1.0f;
            temp.unk_08 = 0.0f;
            temp5 = ((E *)func_088C6494(&arg0->unk_D8->unk_506F0))->unk_1A90;
            temp4 = -temp4;
            temp7 = 0;
            temp6 = temp5;
            do {
                f32 temp13 = func_08855060(&temp, temp5);
                void *temp15 = (void *)1;
                if (!(temp13 + temp6->unk_0C <= temp4)) {
                    temp15 = NULL;
                }
                s32 temp14 = (s32)temp15;
                if ((temp14 ^ 1) == 0) {
                    temp8 = 0;
                    goto block;
                }
                ++temp7;
                ++temp5;
                ++temp6;
            } while (temp7 < 2);
            temp8 = 1;
block:
            if (temp8 == 0) {
                return;
            }
        }
        temp9 = func_08814CF4(5);
        func_08814BB4(5);
        func_088155BC((((D *)((u8 *)arg0 + func_088E5034((s32)arg0) * sizeof(C)))->unk_F0[0].unk_00 >> 31) ^ 1);
        temp10 = D_089FC758[0];
        temp2 = ((D *)((u8 *)arg0 + func_088E5034((s32)arg0) * sizeof(C)))->unk_F0[0].unk_40;
        func_08930834(arg0->unk_2D0, temp2->unk_48(temp10));
        func_088155BC(1);
        if (temp9 == 0) {
            func_08814C0C(5);
        }
    }
}

}
