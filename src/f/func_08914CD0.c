#include "common.h"

typedef struct {
    f32 unk_00[3];
} V3_08914CD0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} F2_08914CD0;

typedef struct {
    void *unk_00;
    V3_08914CD0 unk_04;
    u8 unk_10;
    s32 unk_14;
    s32 unk_18;
} S_08914CD0;

typedef struct {
    u8 pad_00[0x82C];
    S_08914CD0 unk_82C;
    S_08914CD0 unk_848;
    s32 unk_864;
    u8 unk_868[0x10];
    u8 unk_878[0x10];
    u8 unk_888[0x10];
    s32 unk_898;
    u8 unk_89C;
    u8 unk_89D[0x80];
    u8 unk_91D[0x403];
    u8 unk_D20[4];
    u8 *unk_D24;
    u8 *unk_D28;
} T_08914CD0;

extern u8 D_089E5668[];
extern f32 D_08A005B8[];
extern f32 D_08A005C0[];
extern f32 D_08A005C4[];
extern f32 D_08A005C8[];
extern f32 D_08A005D0[];
s32 func_08859C04(void);
void func_08913E3C(T_08914CD0 *, s32, s32);
void func_08913FF8(T_08914CD0 *);
void func_08915634(void *, s32, T_08914CD0 *);
void func_0891571C(void *, s32, T_08914CD0 *);
void func_089C6998(void *, s32, T_08914CD0 *);
void func_0881F5C0(void *, s32, s32);
void func_0881F120(void *, void *, s32);

T_08914CD0 *func_08914CD0(T_08914CD0 *arg0, s32 arg1) {
    V3_08914CD0 a;
    V3_08914CD0 b;

    func_08913E3C(arg0, arg1, func_08859C04());
    a.unk_00[0] = D_08A005B8[1];
    a.unk_00[1] = D_08A005C0[0];
    a.unk_00[2] = D_08A005C4[0];
    arg0->unk_82C.unk_00 = arg0;
    arg0->unk_82C.unk_04 = a;
    arg0->unk_82C.unk_10 = 0;
    arg0->unk_82C.unk_14 = 0;
    arg0->unk_82C.unk_18 = 0;
    *(F2_08914CD0 *)&b = *(F2_08914CD0 *)&D_08A005C8[0];
    b.unk_00[2] = D_08A005D0[0];
    arg0->unk_848.unk_00 = arg0;
    arg0->unk_848.unk_04 = b;
    arg0->unk_848.unk_10 = 0;
    arg0->unk_848.unk_14 = 0;
    arg0->unk_848.unk_18 = 0;
    arg0->unk_864 = 0;
    func_08915634(arg0->unk_868, arg1, arg0);
    func_0891571C(arg0->unk_878, arg1, arg0);
    func_089C6998(arg0->unk_888, arg1, arg0);
    arg0->unk_898 = 0;
    arg0->unk_89C = 0;
    func_08913FF8(arg0);
    func_0881F5C0(arg0->unk_89D, 0, 0x80);
    func_0881F5C0(arg0->unk_91D, 0, 0x400);
    func_0881F120(arg0->unk_D20, D_089E5668, 0x10);
    arg0->unk_D24 = arg0->unk_89D;
    arg0->unk_D28 = arg0->unk_91D;
    return arg0;
}
