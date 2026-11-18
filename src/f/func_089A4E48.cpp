#include "common.h"

extern "C" {
class B {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, char *, s32);
    virtual void unk_18(s32);
};
typedef struct {
    u8 pad_00[0x70];
    u32 unk_70;
} C;
typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
} E;
typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[4];
    s32 unk_106C;
    u8 pad_1070[0x1520];
    C unk_2590;
    u8 pad_2604[0x65C];
    C unk_2C60;
    u8 pad_2CD4[0x65C];
    C unk_3330;
    u8 pad_33A4[0x1ACC];
    s32 unk_4E70[4];
    char unk_4E80[1];
} A;
typedef struct {
    u8 pad_00[0xC];
} D;

extern u8 *D_08AD1F14[];
extern char D_089EF680[];
s32 func_08998080(s32, s32);
s32 func_089A04FC(char *);
s32 func_0899A908(s32, s32);
s32 func_0899E14C(s32, s32);
s32 func_0899E16C(s32, s32);
void func_08945E64(void *);
s32 func_08947BB0(s32, s32);
s32 func_089A8B5C(u8 *, s32, s32);
void func_08945EC4(void *, s32);

void func_089A4E48(A *arg0, s32 arg1) {
    C *temp[3];
    D temp2;
    s32 temp3 = func_08998080(arg0->unk_1064, arg0->unk_106C);
    temp3 = func_0899A908(temp3, func_089A04FC(arg0->unk_4E80));
    if ((u8)func_0899E14C(temp3, arg1) != 0) {
        volatile u8 *temp4 = (volatile u8 *)temp;
        s32 temp5 = sizeof(temp);
        if (temp4 != NULL) {
            do {
                *temp4++ = 0;
            } while (--temp5);
        }
        temp[0] = &arg0->unk_2590;
        temp[1] = &arg0->unk_2C60;
        temp[2] = &arg0->unk_3330;
        temp3 = func_0899E16C(temp3, arg1);
        func_08945E64(&temp2);
        E *temp6 = (E *)func_08947BB0((s32)&temp2, temp3);
        u8 *temp7 = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2460;
        if (temp6 != NULL) {
            C **temp8 = &temp[arg1];
            (*temp8)->unk_70 &= ~0x100U;
            s32 temp9 = func_089A8B5C(temp7, 0, temp6->unk_78);
            ((B *)*temp8)->unk_14(0.0f, 0.0f, 0, D_089EF680, temp9);
            ((B *)*temp8)->unk_18(0xA0);
        }
        arg0->unk_4E70[arg1] = 1;
        func_08945EC4(&temp2, -1);
    }
}
}
