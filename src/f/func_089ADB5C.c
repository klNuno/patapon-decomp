#include "common.h"

typedef struct {
    u8 pad_00[0xAA];
    u8 unk_AA;
} B;

typedef struct {
    u8 pad_00[4];
    B *unk_04;
} R;

R *func_0884E644(s32);
s32 func_088A88C0(void);
s32 func_088BCF70(s32 arg0);
void func_088CF3B4(f32, s32, s32, s32);
void func_088CF8C0(s32, s32, s32);
void func_088CFA9C(s32, s32, s32);
void func_088CFD24(f32, s32, s32, s32);

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
} T;

void func_089ADB5C(T *arg0) {
    s32 h = func_088BCF70((s32)&arg0->unk_04[0x36B60]);
    func_088CF3B4(0.5f, h, 1, 1);
    func_088CFA9C(h, 4, 1);
    func_088CF8C0(h, 4, 1);
    func_088CFD24(0.5f, h, 1, 3);
    func_0884E644(func_088A88C0())->unk_04->unk_AA |= 0x10;
}
