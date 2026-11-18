#include "common.h"

extern "C" {

struct S_089555BC {
    u8 pad_0[0x4];
    s32 unk_04;
    u8 pad_8[0xA90];
    s32 unk_A98;
    s32 unk_A9C;
    s32 unk_AA0;
    u8 pad_AA4[0x1F55C];
    s32 unk_20000;
    f32 unk_20004;
    u8 pad_20008[0x2098];
    s32 unk_220A0;
    s32 unk_220A4;
    s32 unk_220A8;
    s32 unk_220AC;
    s32 unk_220B0;
    s32 unk_220B4;
    s32 unk_220B8;
    s32 unk_220BC;
    s32 unk_220C0;
    f32 unk_220C4;
    f32 unk_220C8;
    f32 unk_220CC;
    f32 unk_220D0;
    f32 unk_220D4;
    f32 unk_220D8;
    f32 unk_220DC;
    f32 unk_220E0;
    f32 unk_220E4;
    s32 unk_220E8;
    f32 unk_220EC;
    u8 pad_220F0[0x44];
    u8 unk_22134[0x4A];
    u8 unk_2217E;
    u8 unk_2217F;
    u8 unk_22180;
    u8 unk_22181;
    u8 pad_22182[0x2];
    s32 unk_22184;
    s32 unk_22188;
    s32 unk_2218C;
    s32 unk_22190;
    s32 unk_22194;
    s32 unk_22198;
    s32 get() { return unk_220A4; }
};

void func_08958F1C(void *);

void func_089555BC(S_089555BC *arg0) {
    arg0->unk_220A0 = -1;
    arg0->unk_220A4 = 4;
    arg0->unk_220AC = 0;
    arg0->unk_220A8 = arg0->get();
    arg0->unk_220B0 = 0;
    arg0->unk_220B4 = -1;
    arg0->unk_220B8 = -1;
    arg0->unk_220BC = 3;
    arg0->unk_220C0 = 3;
    arg0->unk_A98 = 0;
    arg0->unk_04 = 0;
    arg0->unk_220DC = 0.1f;
    arg0->unk_220E0 = 8.0f;
    arg0->unk_220E4 = 0.1f;
    arg0->unk_220D8 = 0.2f;
    arg0->unk_220D4 = 0.8f;
    arg0->unk_220E8 = 0;
    arg0->unk_220C4 = 48.0f;
    arg0->unk_220C8 = 16.0f;
    arg0->unk_220D0 = 8.0f;
    arg0->unk_220CC = 25.0f;
    arg0->unk_20000 = 0;
    arg0->unk_20004 = 1.0f;
    func_08958F1C(arg0->unk_22134);
    arg0->unk_22188 = 0;
    arg0->unk_220EC = -0.1f;
    arg0->unk_2217E = 1;
    arg0->unk_22180 = 1;
    arg0->unk_2217F = 1;
    arg0->unk_22181 = 1;
    arg0->unk_22184 = 0;
    arg0->unk_2218C = 0;
    arg0->unk_22190 = 0;
    arg0->unk_22194 = 0;
    arg0->unk_22198 = 0;
    arg0->unk_AA0 = 0;
    arg0->unk_A9C = 0;
}

}
