#include "common.h"

typedef struct {
    u8 unk_00[8];
    s32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    u8 pad_14[0xC];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[8];
    u8 unk_40[0x20];
    s32 unk_60;
    s32 unk_64;
} A;
typedef struct {
    u8 unk_00[0x20];
    s32 unk_20;
    s16 unk_24;
    s16 unk_26;
    u8 pad_28[6];
    s16 unk_2E;
    u8 pad_30[0x20];
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    u8 pad_60[0x128];
} B;
typedef struct {
    u8 unk_00[0x20];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0xCC];
} C;
typedef struct {
    A unk_00;
    u8 pad_68[0x11C];
    B unk_184[3];
    C unk_61C[18];
} D;
typedef struct {
    u8 pad_00[0x264];
    D unk_264;
} E;
typedef struct {
    u8 pad_00[0x14A0];
    E *unk_14A0;
} G;

extern G *D_08AD1F14[];
extern char D_089DD3BC[];
extern char D_089DD3C4[];
extern char D_089DD3CC[];
extern char D_089DD3D4[];
void func_08822B3C(void *, char *);
void func_08875BAC(B *);
void func_08875B9C(A *);
void func_08852F00(void *, s32);

void func_08906674(void *arg0, void *arg1) {
    void *temp10;
    G *temp;
    E *temp2;
    s32 temp8;
    C *temp6;
    B *temp5;
    D *temp3;
    u8 *temp4;
    s32 temp7;
    f32 temp9;

    temp10 = arg1;
    temp = D_08AD1F14[0];
    temp = temp != NULL ? temp : NULL;
    temp2 = temp->unk_14A0;
    func_08822B3C((u8 *)temp2 + 0x264, D_089DD3D4);
    temp2->unk_264.unk_00.unk_08 = 0x40;
    temp2->unk_264.unk_00.unk_0C = 0.8f;
    temp2->unk_264.unk_00.unk_10 = 3;
    temp2->unk_264.unk_00.unk_20 = 1;
    temp2->unk_264.unk_00.unk_24 = 0x144;
    temp2->unk_264.unk_00.unk_28 = 3;
    temp2->unk_264.unk_00.unk_2C = 0x188;
    temp2->unk_264.unk_00.unk_30 = 0x12;
    temp2->unk_264.unk_00.unk_34 = 0x104;
    func_08822B3C(temp2->unk_264.unk_00.unk_40, D_089DD3CC);
    temp3 = &temp2->unk_264;
    temp2->unk_264.unk_00.unk_60 = 0;
    temp2->unk_264.unk_00.unk_64 = 3;

    temp8 = 0;
    temp4 = (u8 *)temp3;
    do {
        temp5 = &((D *)temp4)->unk_184[0];
        func_08875BAC(temp5);
        func_08822B3C(temp5, D_089DD3C4);
        temp9 = (f32)temp8;
        temp5->unk_20 = temp8;
        temp5->unk_24 = 0;
        temp5->unk_26 = 0;
        temp5->unk_2E = 0;
        temp5->unk_50 = 20.0f * temp9;
        temp5->unk_54 = 0.0f;
        temp5->unk_58 = 0.0f;
        temp5->unk_5C = -15.0f;
        temp8++;
        temp4 += sizeof(B);
    } while (temp8 < 3);

    temp7 = 0;
    do {
        temp6 = &temp3->unk_61C[0];
        func_08822B3C(temp6, D_089DD3BC);
        temp6->unk_20 = -1;
        temp6->unk_24 = -1;
        temp6->unk_28 = 0;
        temp6->unk_2C = 0;
        temp6->unk_30 = 0;
        temp6->unk_34 = 0;
        temp7++;
        temp3 = (D *)((u8 *)temp3 + sizeof(C));
    } while (temp7 < 18);
    func_08875B9C(&temp2->unk_264.unk_00);
    func_08852F00(temp10, 0);
}
