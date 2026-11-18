#include "common.h"

typedef struct S {
    void *unk_00;
    u8 pad_04[0x73C];
    u8 unk_740[0x90];
    u8 unk_7D0[0x90];
    f32 unk_860;
    f32 unk_864;
    s32 unk_868;
    u8 pad_86C[0x4];
    s32 unk_870;
    s32 unk_874;
    s32 unk_878;
    s32 unk_87C;
    s32 unk_880;
    s32 unk_884;
    s32 unk_888;
    s32 unk_88C;
    s32 unk_890;
    s32 unk_894;
    u8 unk_898;
    u8 unk_899;
    u8 pad_89A[0x2];
    s32 unk_89C;
    s32 unk_8A0;
    s32 unk_8A4;
} S;

extern u8 D_08A46FD0[];
void func_08865EE0(void *);
void func_088D4E2C(S *);

S *func_0892CBB4(S *arg0) {
    func_088D4E2C(arg0);
    arg0->unk_00 = D_08A46FD0;
    func_08865EE0(arg0->unk_740);
    func_08865EE0(arg0->unk_7D0);
    arg0->unk_860 = 240.0f;
    arg0->unk_864 = 136.0f;
    arg0->unk_868 = 0;
    arg0->unk_870 = 0;
    arg0->unk_874 = 0;
    arg0->unk_878 = 0;
    arg0->unk_87C = 0;
    arg0->unk_880 = 0;
    arg0->unk_884 = 0;
    arg0->unk_888 = 0;
    arg0->unk_88C = 0;
    arg0->unk_890 = 0;
    arg0->unk_894 = 0;
    arg0->unk_898 = 0;
    arg0->unk_899 = 0;
    arg0->unk_89C = -1;
    arg0->unk_8A0 = 0;
    arg0->unk_8A4 = 0;
    return arg0;
}
