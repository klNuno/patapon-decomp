#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x80];
    u8 *unk_80;
    u8 pad_84[0xC];
    s32 unk_90;
    u8 pad_94[0xC];
    f32 unk_A0[16];
    char unk_E0[0x10];
    f32 unk_F0[6];
    s32 unk_108;
    char unk_10C[0x10];
    f32 unk_11C, unk_120;
    s32 unk_124;
    char unk_128[0xC];
    u8 unk_134;
    u8 pad_135[3];
    f32 unk_138, unk_13C;
    s32 unk_140;
    char unk_144[0x10];
    f32 unk_154[6];
    s32 unk_16C;
    char unk_170[0x10];
    f32 unk_180, unk_184;
    s32 unk_188;
    u8 unk_18C;
} T;

typedef T Unk;

void func_08865EE0(void *);
char *func_0897404C(char *);
extern void func_08974068(char *, f32);
extern int func_089740D0(void *, s32);
void func_089741AC(char *);
void func_08974440(char *, f32);
void func_08974584(Unk *, f32, f32);
void func_08974648(T *, f32, f32);
void func_0897470C(T *, f32, f32, f32, f32);
extern f32 D_08A05468[], D_08A0546C[], D_08A05470[];
extern u8 D_08A47EE8[];

struct E {};
static inline void unk_00(T *p, const E &) {
    func_08865EE0(p);
}

T *func_089741D8(T *arg0) {
    unk_00(arg0, E());
    arg0->unk_80 = D_08A47EE8;
    arg0->unk_90 = 0;
    arg0->unk_A0[0] = 1.0f;
    arg0->unk_A0[1] = 0.0f;
    arg0->unk_A0[2] = 0.0f;
    arg0->unk_A0[3] = 0.0f;
    arg0->unk_A0[4] = 0.0f;
    arg0->unk_A0[5] = 1.0f;
    arg0->unk_A0[6] = 0.0f;
    arg0->unk_A0[7] = 0.0f;
    arg0->unk_A0[8] = 0.0f;
    arg0->unk_A0[9] = 0.0f;
    arg0->unk_A0[10] = 1.0f;
    arg0->unk_A0[11] = 0.0f;
    arg0->unk_A0[12] = 0.0f;
    arg0->unk_A0[13] = 0.0f;
    arg0->unk_A0[14] = 0.0f;
    arg0->unk_A0[15] = 1.0f;
    func_0897404C(arg0->unk_E0);
    func_089740D0(arg0->unk_E0, 0);
    func_08974068(arg0->unk_E0, 0.0f);
    arg0->unk_108 = 0;
    func_0897404C(arg0->unk_10C);
    func_089740D0(arg0->unk_10C, 0);
    func_08974068(arg0->unk_10C, 0.0f);
    arg0->unk_124 = 0;
    func_0897404C(arg0->unk_128);
    func_089740D0(arg0->unk_128, 0);
    func_08974068(arg0->unk_128, 0.0f);
    arg0->unk_140 = 0;
    func_0897404C(arg0->unk_144);
    func_089740D0(arg0->unk_144, 0);
    func_08974068(arg0->unk_144, 0.0f);
    arg0->unk_16C = 0;
    func_0897404C(arg0->unk_170);
    func_089740D0(arg0->unk_170, 0);
    func_08974068(arg0->unk_170, 0.0f);
    arg0->unk_188 = 0;
    func_08974648(arg0, 0.0f, 0.0f);
    func_08974584(arg0, 0.0f, 0.0f);
    func_0897470C(arg0, 1.0f, 1.0f, 1.0f, 0.0f);
    func_08974440((char *)arg0, 0.0f);
    func_089741AC(arg0->unk_E0);
    arg0->unk_F0[0] = 0.0f;
    arg0->unk_F0[1] = 0.0f;
    arg0->unk_F0[2] = 0.0f;
    arg0->unk_F0[3] = 0.0f;
    arg0->unk_F0[4] = 0.0f;
    arg0->unk_F0[5] = 0.0f;
    arg0->unk_108 = 0;
    func_089741AC(arg0->unk_144);
    arg0->unk_154[0] = 0.0f;
    arg0->unk_154[1] = 0.0f;
    arg0->unk_154[2] = 0.0f;
    arg0->unk_154[3] = 0.0f;
    arg0->unk_154[4] = 0.0f;
    arg0->unk_154[5] = 0.0f;
    arg0->unk_16C = 0;
    func_089741AC(arg0->unk_10C);
    arg0->unk_11C = *(volatile f32 *)D_08A05468;
    arg0->unk_120 = *(volatile f32 *)D_08A05468;
    arg0->unk_124 = 0;
    func_089741AC(arg0->unk_128);
    arg0->unk_138 = *(volatile f32 *)D_08A0546C;
    arg0->unk_13C = *(volatile f32 *)D_08A0546C;
    arg0->unk_140 = 0;
    func_089741AC(arg0->unk_170);
    arg0->unk_180 = *(volatile f32 *)D_08A05470;
    arg0->unk_184 = *(volatile f32 *)D_08A05470;
    arg0->unk_188 = 0;
    arg0->unk_134 = 1;
    arg0->unk_18C = 1;
    return arg0;
}
}
