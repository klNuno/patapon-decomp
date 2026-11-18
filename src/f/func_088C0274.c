#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;

typedef struct {
    V unk_00[4];
} M;

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[4];
    u32 unk_14;
} S_088BFAE4;

typedef struct {
    s32 unk_00;
} C_088BFAE4;

typedef struct {
    u8 pad_00[0x10];
    M unk_10;
    M unk_50;
    u8 pad_90[0x18];
    S_088BFAE4 unk_A8;
} T;

void func_088145A0(f32, f32);
void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_088157E8(s32, s32);
void func_08815814(s32, s32);
void func_0881587C(s32, s32);
void func_08815A28(f32, f32);
void func_08815A6C(void);
void func_08815C48(s32);
void func_08815C6C(s32);
void func_08815D9C(s32, s32, s32, s32, s32);
void func_08855544(M *, M *);
void func_088576F8(void);
void func_08858024(s32);
void func_0885807C(void);
void func_088580F8(void);
extern s32 func_088581B0(s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_088BFAE4(S_088BFAE4 *arg0, C_088BFAE4 *arg1);

void func_088C0274(T *arg0) {
    L_0893CEA8 temp;
    M *temp2;

    func_08864A30(&temp);
    func_08815C6C(1);
    func_08814BB4(1);
    func_08815C48(7);
    func_08814C0C(0);
    func_08814BB4(4);
    func_08814C0C(0xA);
    func_08815A6C();
    func_08814BB4(9);
    func_08814C0C(5);
    func_08814C0C(6);
    func_088157E8(7, 1);
    func_08815814(0, 1);
    func_0881587C(1, 1);
    func_08815A28(0.0f, 0.0f);
    func_088145A0(1.0f, 1.0f);
    func_08858024(1);
    func_088581B0((s32)&arg0->unk_10);
    temp2 = &arg0->unk_50;
    arg0->unk_50.unk_00[0] = arg0->unk_10.unk_00[0];
    arg0->unk_50.unk_00[1] = arg0->unk_10.unk_00[1];
    arg0->unk_50.unk_00[2] = arg0->unk_10.unk_00[2];
    arg0->unk_50.unk_00[3] = arg0->unk_10.unk_00[3];
    *(u32 *)&arg0->unk_50.unk_00[2].unk_0C = 0;
    *(u32 *)&arg0->unk_50.unk_00[1].unk_0C = 0;
    *(u32 *)&arg0->unk_50.unk_00[0].unk_0C = 0;
    *(u32 *)&arg0->unk_50.unk_00[3].unk_08 = 0;
    *(u32 *)&arg0->unk_50.unk_00[3].unk_04 = 0;
    *(u32 *)&arg0->unk_50.unk_00[3].unk_00 = 0;
    *(u32 *)&arg0->unk_50.unk_00[3].unk_0C = 0x3F800000;
    func_08855544(temp2, temp2);
    func_08858024(2);
    func_0885807C();
    func_088576F8();
    func_088BFAE4(&arg0->unk_A8, (C_088BFAE4 *)arg0);
    func_088580F8();
    func_0881587C(0, 0);
    func_08814BB4(6);
    func_08815D9C(0, 2, 3, 0, 0);
    func_08864A68(&temp, -1);
}
