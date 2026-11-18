#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 unk_20;
    u8 pad_21[3];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    u8 unk_30[4];
    u8 unk_34[0x80];
    u8 unk_B4[0xC];
    u8 unk_C0[4];
    u8 unk_C4[0x40];
    u8 unk_104[0x40];
    s32 unk_144;
    s32 unk_148;
    s32 unk_14C;
    s32 unk_150;
    s32 unk_154;
    s32 unk_158;
    s32 unk_15C;
    s32 unk_160;
    s32 unk_164;
    s32 unk_168;
    u8 unk_16C;
    u8 pad_16D[3];
    s32 unk_170;
    u8 unk_174;
    u8 pad_175[3];
    s32 unk_178;
    s32 unk_17C;
    s32 unk_180;
    u8 unk_184[0x10];
    u8 unk_194[0xEC];
    u8 unk_280[0xEC];
    u8 unk_36C[0x78];
    u8 unk_3E4[0x4C];
    s32 unk_430;
} S_0895D7FC;

void func_0881F5C0(void *, s32, s32);
void func_0895B0B4(void *, s32);
void func_0895B99C(S_0895D7FC *, s32);
void func_0895BB50(void *);
void func_0895C3A8(void *);
void func_0895CC68(void *);
void sceMpegInit(void);
extern u8 D_08A479F4[];
extern s32 D_08ADAD38[];

S_0895D7FC *func_0895D7FC(S_0895D7FC *arg0, s32 arg1) {
    func_0895B99C(arg0, 0x11);
    arg0->unk_14 = D_08A479F4;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_28 = arg1;
    arg0->unk_2C = -1;
    arg0->unk_144 = 0;
    arg0->unk_148 = 0;
    arg0->unk_14C = 0;
    arg0->unk_150 = 0;
    arg0->unk_154 = 0;
    arg0->unk_158 = 0;
    arg0->unk_15C = 0;
    arg0->unk_160 = 0;
    arg0->unk_164 = 0;
    arg0->unk_168 = 0;
    arg0->unk_16C = 0;
    arg0->unk_170 = 1;
    arg0->unk_174 = 0;
    arg0->unk_178 = 0;
    arg0->unk_17C = 0;
    arg0->unk_180 = 0;
    func_0895B0B4(arg0->unk_184, 0x400);
    func_0895C3A8(arg0->unk_194);
    func_0895BB50(arg0->unk_280);
    func_0895CC68(arg0->unk_36C);
    arg0->unk_430 = 0;
    func_0881F5C0(arg0->unk_30, 0, 4);
    func_0881F5C0(arg0->unk_34, 0, 0x80);
    func_0881F5C0(arg0->unk_B4, 0, 0xC);
    func_0881F5C0(arg0->unk_C0, 0, 4);
    func_0881F5C0(arg0->unk_C4, 0, 0x40);
    func_0881F5C0(arg0->unk_104, 0, 0x40);
    func_0881F5C0(arg0->unk_3E4, 0, 0x4C);
    if (D_08ADAD38[0]++ == 0) {
        sceMpegInit();
    }
    return arg0;
}
