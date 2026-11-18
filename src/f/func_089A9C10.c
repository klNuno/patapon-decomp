#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    u8 pad_00[0x1510];
    s32 unk_1510;
    u8 unk_1514[4];
    s32 unk_1518[2];
    u8 unk_1520[0x54C];
    s32 unk_1A6C;
} T;

extern u8 D_08A080E8[];

void func_08814BB4(s32);
void func_0881518C(s32, s32, s32, s32);
void func_088151A8(s32, s32, s32, s32, s32, s32, s32);
void func_08815514(s32);
void func_088157AC(s32, s32, s32, s32);
void func_088157E8(s32, s32);
void func_08815814(s32, s32);
void func_0881587C(s32, s32);
void func_088159A8(s32, s32, s32, s32, s32);
void func_08815D9C(s32, s32, s32, s32, s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_08885980(void *, s32, s32, void *);
s32 func_0893F544(void *, s32);

void func_089A9C10(T *arg0) {
    L_0893CEA8 temp;
    s32 *temp1;
    s32 temp2;
    f32 temp3;

    switch (arg0->unk_1A6C) {
    case 1:
        func_08885980(arg0->unk_1520, 5, 1, D_08A080E8);
        break;
    case 2:
        temp1 = (s32 *)((u8 *)arg0->unk_1518 + arg0->unk_1510 * 4);
        if (func_0893F544(arg0->unk_1514, *temp1) != 0) {
            arg0->unk_1510 = (arg0->unk_1510 + 1) & 1;
        }
        func_08864A30(&temp);
        func_08814BB4(9);
        func_08815814(0, 0);
        func_088157E8(7, 0);
        func_0881587C(0, 0);
        func_088157AC(3, 0, 0, 0);
        func_088159A8(0, 0x200, 0x200, 0x200, *temp1);
        func_08815D9C(0, 2, 3, 0, 0);
        func_08814BB4(4);
        temp3 = 255.0f;
        func_08815514(((u32)temp3 << 24) | 0xFFFFFF);
        for (temp2 = 0; temp2 < 4; temp2++) {
            func_0881518C(0x80, 0x110, 0x80, 0x110);
            func_088151A8(temp2 * 0x200 / 4, 0, 0, temp2 * 0x200 / 4, 0, 0, 0);
        }
        func_08864A68(&temp, -1);
        break;
    }
}
