#include "common.h"

typedef struct Unk_088C5DE8_B {
    u8 pad_00[0x28];
    s32 unk_28;
    s32 unk_2C;
} Unk_088C5DE8_B;

typedef struct Unk_088C5DE8 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    u8 unk_10[0x1AE0];
    u8 unk_1AF0[0x324A0 - 0x1AF0];
    u8 unk_324A0[0x30];
    u8 unk_324D0[0x36A00 - 0x324D0];
    Unk_088C5DE8_B *unk_36A00;
    u8 pad_36A04[0xC];
    u8 unk_36A10[0x36B80 - 0x36A10];
    s32 unk_36B80;
    s32 unk_36B84;
} Unk_088C5DE8;

void func_088813A8(void *);
void func_088CDFFC(void *);
void func_088DF998(void *);
void func_088DFC6C(void *, s32, void *, void *, Unk_088C5DE8_B *);
void func_089A835C(void *, s32);

Unk_088C5DE8 *func_088C5DE8(Unk_088C5DE8 *arg0, Unk_088C5DE8_B *arg1) {
    arg0->unk_00 = arg1->unk_28;
    arg0->unk_04 = arg1->unk_2C;
    func_088DF998(arg0->unk_10);
    func_088DFC6C(arg0->unk_1AF0, arg1->unk_28, arg0->unk_324D0, arg0->unk_324A0, arg1);
    func_088CDFFC(arg0->unk_324A0);
    func_088813A8(arg0->unk_324D0);
    arg0->unk_36A00 = arg1;
    func_089A835C(arg0->unk_36A10, arg1->unk_28);
    arg0->unk_36B80 = 0;
    arg0->unk_36B84 = 0;
    return arg0;
}
