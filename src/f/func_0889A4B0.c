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
} S8_0889A4B0;

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10C;
    S8_0889A4B0 unk_110;
    S8_0889A4B0 unk_12C;
    u8 unk_148[0x1EC - 0x148];
    u8 unk_1EC[0x76C - 0x1EC];
    u8 unk_76C[0x8B8 - 0x76C];
    s32 unk_8B8;
    s32 unk_8BC;
    f32 unk_8C0;
    s32 unk_8C4;
    u8 pad_8C8[4];
    s32 unk_8CC;
    s32 unk_8D0;
} Obj_0889A4B0;

void func_0881F5C0(void *, s32, s32);
s32 func_08858BCC(void);
void func_08885768(void *);
void func_08885C28(void *, void *);
void func_088860EC(void *, void *);
void func_0889B278(void *, void *);
void func_088A3FA4(void *);
extern u8 D_089FA5B4[];
extern u8 D_089FA5D8[];
extern u8 D_08A44AD8[];

Obj_0889A4B0 *func_0889A4B0(Obj_0889A4B0 *arg0) {
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
    temp.unk_00 = func_08858BCC();
    arg0->unk_12C.unk_18 = D_08A44AD8;
    arg0->unk_12C.unk_14 = 0;
    arg0->unk_12C.unk_00 = 0;
    arg0->unk_12C.unk_04 = 0;
    arg0->unk_12C.unk_08 = 0;
    arg0->unk_12C.unk_10 = 0;
    arg0->unk_12C.unk_0C = temp.unk_00;
    func_0889B278(arg0->unk_148, arg0->unk_1EC);
    func_088A3FA4(arg0->unk_1EC);
    func_08885768(arg0->unk_76C);
    arg0->unk_8B8 = 0;
    arg0->unk_8BC = 0;
    arg0->unk_8C0 = 1.0f;
    arg0->unk_8C4 = 0;
    arg0->unk_8CC = 0;
    arg0->unk_8D0 = -1;
    func_08885C28(arg0->unk_76C, D_089FA5B4);
    func_088860EC(arg0->unk_76C, D_089FA5D8);
    return arg0;
}
