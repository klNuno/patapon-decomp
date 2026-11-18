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
} S8_089A6044;

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10C;
    S8_089A6044 unk_110;
    u8 unk_12C[0x278 - 0x12C];
    s32 unk_278;
    s32 unk_27C;
    f32 unk_280;
    s32 unk_284;
    u8 pad_288[4];
    s32 unk_28C;
    s32 unk_290;
} Obj_089A6044;

void func_0881F5C0(void *, s32, s32);
s32 func_08858BCC(void);
void func_08885768(void *);
void func_08885C28(void *, void *);
void func_088860EC(void *, void *);
extern u8 D_08A072DC[];
extern u8 D_08A07300[];
extern u8 D_08A44AD8[];

Obj_089A6044 *func_089A6044(Obj_089A6044 *arg0) {
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
    arg0->unk_278 = 0;
    arg0->unk_27C = 0;
    arg0->unk_280 = 1.0f;
    arg0->unk_284 = 0;
    arg0->unk_28C = 0;
    arg0->unk_290 = -1;
    func_08885C28(arg0->unk_12C, D_08A072DC);
    func_088860EC(arg0->unk_12C, D_08A07300);
    return arg0;
}
