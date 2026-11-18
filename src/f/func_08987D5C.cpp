#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
} U;

typedef struct {
    u8 pad_00[0x1A0E4];
    U unk_1A0E4;
} G1;

typedef struct {
    u8 pad_00[0x1498];
    G1 *unk_1498;
} G2;

typedef struct {
    u8 pad_00[0x42820];
    G2 *unk_42820;
} G;

struct T {
    u8 pad_00[8];
    V *unk_08;
    u8 pad_0C[0xC];
    V unk_18;
};

class A {
public:
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual V *unk_10();
};

typedef struct {
    u8 pad_00[0xC];
    T *unk_0C;
    u8 pad_10[8];
    V unk_18;
    f32 unk_20[6];
    A *unk_38;
} S;

extern u8 *D_08AD1E28[];
extern u8 *D_08AD1F14[];
extern f32 D_089ED81C[], D_089ED82C[];
extern V D_089ED820[], D_089ED830[];
extern char D_08A0616C[];

s32 func_089A8B74(u8 *, s32);
void func_088AF2FC(V *, T *, u16 *);
void func_088AE388(void *, void *, f32 *, u8 *, f32, f32);
void func_088226BC(char *, char *, ...);
void func_088B3120(u8 *, s32, char *);

s32 func_08987D5C(void *arg0, S *arg1)
{
    char temp[0x80];
    u16 temp2[0x80];
    V temp3, temp4;
    u8 temp5[0x10], temp6[0x10];
    G *temp7;
    u8 *temp8;
    s32 temp10;
    u32 temp9;
    u8 *temp19;
    T *temp11;
    V *temp12;
    f32 temp13;
    f32 temp14, temp15;
    f32 temp16, temp17;
    U *temp18;

    temp7 = D_08AD1E28[0] != NULL ? (G *)D_08AD1E28[0] : NULL;
    temp18 = &temp7->unk_42820->unk_1498->unk_1A0E4;
    temp8 = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    temp9 = temp18->unk_08;
    temp19 = temp8 + 0x2460;
    if (temp9 > 99999U) {
        temp9 = 99999;
    }
    temp10 = func_089A8B74(temp19, 0x20003);
    temp17 = ((volatile V *)D_089ED830)->unk_04;
    temp11 = arg1->unk_0C;
    temp16 = ((volatile V *)D_089ED830)->unk_00;
    temp12 = temp11->unk_08;
    temp11->unk_18.unk_00 = temp16 - temp12->unk_00;
    temp11->unk_18.unk_04 = temp17 - temp12->unk_04;
    func_088AF2FC(&temp3, arg1->unk_0C, (u16 *)temp10);
    temp13 = (arg1->unk_38->unk_10()->unk_00 - 13.0f) - temp3.unk_00;
    temp14 = arg1->unk_18.unk_00 + temp13;
    temp15 = 0.5f * ((D_089ED830[0].unk_04 - 1.0f) - temp3.unk_04) + (arg1->unk_18.unk_04 + D_089ED82C[0]);
    func_088AE388(temp5, arg1->unk_0C, arg1->unk_20, (u8 *)temp10, temp14, temp15);
    func_088226BC(temp, D_08A0616C, temp9);
    func_088B3120((u8 *)temp2, 0x100, temp);
    temp17 = ((volatile V *)D_089ED820)->unk_04;
    temp11 = arg1->unk_0C;
    temp16 = ((volatile V *)D_089ED820)->unk_00;
    temp12 = temp11->unk_08;
    temp11->unk_18.unk_00 = temp16 - temp12->unk_00;
    temp11->unk_18.unk_04 = temp17 - temp12->unk_04;
    func_088AF2FC(&temp4, arg1->unk_0C, temp2);
    temp13 -= 9.0f;
    temp13 -= temp4.unk_00;
    temp14 = arg1->unk_18.unk_00 + temp13;
    temp15 = 0.5f * ((D_089ED820[0].unk_04 - 1.0f) - temp4.unk_04) + (arg1->unk_18.unk_04 + D_089ED81C[0]);
    func_088AE388(temp6, arg1->unk_0C, arg1->unk_20, (u8 *)temp2, temp14, temp15);
    temp11 = arg1->unk_0C;
    temp11->unk_18.unk_00 = 0.0f;
    temp11->unk_18.unk_04 = 0.0f;
    return 0;
}
}
