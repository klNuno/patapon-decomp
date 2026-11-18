#include "common.h"

void func_0881F5C0(void *, s32, s32);
char *func_0888AA58(char *);

typedef struct {
    f32 unk_00[6];
} UnkC;

typedef struct {
    s32 unk_00;
    UnkC unk_04;
} Unk8;

typedef struct {
    u8 pad_00[8];
    Unk8 unk_08;
    u8 pad_24[0xA8];
    u8 unk_CC[0x10];
    u8 unk_DC;
    u8 pad_DD[3];
    s32 unk_E0;
    u8 pad_E4[0x14];
    u8 unk_F8;
    u8 unk_F9;
    u8 pad_FA[2];
    s32 unk_FC;
    u8 unk_100[0x20];
    u8 pad_120[4];
    s32 unk_124;
    s32 unk_128;
    s32 unk_12C;
    u8 pad_130[4];
    s32 unk_134;
    s32 unk_138;
    s32 unk_13C;
    u8 pad_140[4];
    s32 unk_144;
    u8 pad_148[0xC];
    f32 unk_154;
    u8 pad_158[4];
    u8 unk_15C;
    u8 pad_15D[3];
    s32 unk_160;
    s32 unk_164;
} Unk;

void func_0894C8E4(Unk *arg0) {
    Unk8 temp;

    func_0881F5C0(arg0->unk_CC, 0, 0x10);
    func_0881F5C0(arg0->unk_100, 0, 0x20);
    arg0->unk_FC = -1;
    arg0->unk_E0 = 0;
    temp.unk_00 = 0;
    func_0888AA58((char *)&temp.unk_04);
    arg0->unk_08.unk_00 = temp.unk_00;
    arg0->unk_08.unk_04 = temp.unk_04;
    arg0->unk_F8 = 0;
    arg0->unk_FC = 8;
    arg0->unk_DC = 0;
    arg0->unk_144 = 0;
    arg0->unk_F9 = 0;
    arg0->unk_13C = 0;
    arg0->unk_138 = 0;
    arg0->unk_134 = 0;
    arg0->unk_12C = 0;
    arg0->unk_128 = 0;
    arg0->unk_124 = 0;
    arg0->unk_154 = 1.0f;
    arg0->unk_15C = 0;
    arg0->unk_160 = 0;
    arg0->unk_164 = -1;
}
