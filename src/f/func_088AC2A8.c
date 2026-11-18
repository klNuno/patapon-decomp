#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    void *unk_18;
} S8_088AC2A8;

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10C;
    S8_088AC2A8 unk_110;
    u8 unk_12C[0x278 - 0x12C];
    S8_088AC2A8 unk_278;
    u8 pad_294[0x2A0 - 0x294];
    u8 unk_2A0[0x320 - 0x2A0];
    s32 unk_320;
    s32 unk_324;
    f32 unk_328;
    u8 unk_32C;
    u8 pad_32D[3];
    s32 unk_330;
    u8 unk_334;
} Obj_088AC2A8;

void func_0881F5C0(void *, s32, s32);
s32 func_08858BCC(void);
void func_08885768(void *);
void func_08885C28(void *, void *);
void func_088AEF6C(void *, s32);
void func_088AF260(void *, s32);
extern u8 D_089FB354[];
extern u8 D_08A44AD8[];

Obj_088AC2A8 *func_088AC2A8(Obj_088AC2A8 *arg0) {
    struct {
        s32 unk_00;
    } temp;

    func_0881F5C0(arg0, 0, 0x100);
    arg0->unk_100 = 0xFFFFFF;
    arg0->unk_104 = 0;
    arg0->unk_108 = 0;
    arg0->unk_10C = 0;
    temp.unk_00 = func_08858BCC();
    arg0->unk_110.unk_18 = D_08A44AD8;
    arg0->unk_110.unk_14 = 0;
    arg0->unk_110.unk_00 = 0;
    arg0->unk_110.unk_04 = 0;
    arg0->unk_110.unk_08 = 0;
    arg0->unk_110.unk_10 = 0;
    arg0->unk_110.unk_0C = temp.unk_00;
    func_08885768(arg0->unk_12C);
    temp.unk_00 = func_08858BCC();
    arg0->unk_278.unk_18 = D_08A44AD8;
    arg0->unk_278.unk_14 = 0;
    arg0->unk_278.unk_00 = 0;
    arg0->unk_278.unk_04 = 0;
    arg0->unk_278.unk_08 = 0;
    arg0->unk_278.unk_10 = 0;
    arg0->unk_278.unk_0C = temp.unk_00;
    func_088AEF6C(arg0->unk_2A0, 1);
    arg0->unk_320 = 0;
    arg0->unk_324 = 0;
    arg0->unk_328 = 1.0f;
    arg0->unk_32C = 0;
    arg0->unk_330 = 0;
    arg0->unk_334 = 1;
    func_08885C28(arg0->unk_12C, D_089FB354);
    arg0->unk_334 = 0;
    func_088AF260(arg0->unk_2A0, 2);
    return arg0;
}
