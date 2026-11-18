#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V_0890B264;

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
    u8 unk_D90[0x10];
    u8 unk_DA0[0x7F008 - 0xDA0];
    u8 unk_7F008[0x16D040 - 0x7F008];
    void *unk_16D040;
    V_0890B264 unk_16D044;
    u8 unk_16D050;
    u8 pad_16D051[0x3];
    s32 unk_16D054;
    s32 unk_16D058;
    u8 unk_16D05C[0x80];
} S_0890B264;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
extern f32 D_089FF8E8[];
extern f32 D_089FF8F0[];

void func_0890D440(u8 *);
void func_0890ACD4(u8 *);
void func_0881F5C0(void *, s32, s32);
void func_0890B648(S_0890B264 *);

S_0890B264 *func_0890B264(S_0890B264 *arg0) {
    V_0890B264 t;

    arg0->unk_00 = D_08A44C14;
    arg0->unk_00 = D_08A44C60;
    arg0->unk_D88 = (u8 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 0x04);
    arg0->unk_D8C = 0;
    arg0->unk_00 = D_08A44CAC;
    func_0890D440(arg0->unk_DA0);
    func_0890ACD4(arg0->unk_7F008);
    t.unk_00 = D_089FF8E8[0];
    t.unk_04 = D_089FF8E8[1];
    t.unk_08 = D_089FF8F0[0];
    arg0->unk_16D040 = arg0;
    arg0->unk_16D044 = t;
    arg0->unk_16D050 = 0;
    arg0->unk_16D054 = 0;
    arg0->unk_16D058 = 0;
    func_0881F5C0(arg0->unk_D90, 0, 0x10);
    func_0881F5C0(arg0->unk_16D05C, 0, 0x80);
    func_0890B648(arg0);
    return arg0;
}
