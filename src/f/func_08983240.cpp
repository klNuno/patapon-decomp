#include "common.h"

extern "C" {

class V_08983240 {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    u8 pad_00[0x1A0];
} A_08983240;

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} P_08983240;

typedef struct {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[0x194];
    u8 unk_1CC;
    u8 pad_1CD[0x3];
    V_08983240 unk_1D0;
    u8 pad_254[0x11C];
    u8 unk_370;
    u8 pad_371[0x3];
    s32 unk_374;
    f32 unk_378;
    u8 pad_37C[0x10];
    u8 unk_38C;
    u8 pad_38D[0x3];
    s32 unk_390;
    f32 unk_394;
    u8 pad_398[0x8];
    u8 unk_3A0[0x50];
    u8 unk_3F0;
    u8 pad_3F1[0xF];
    A_08983240 unk_400[8];
} S_08983240;

void func_08866028(void *);
void func_088CE1EC(s32, S_08983240 *);
void func_089139A4(void *, s32, P_08983240 *, s32);

void func_08983240(S_08983240 *arg0, s32 arg1) {
    s32 i;
    P_08983240 p;

    for (i = 0; i < 8; i++) {
        func_08866028(&arg0->unk_400[i]);
        func_08866028((u8 *)arg0 + 0x1D90 + i * 0x190);
    }
    *(s32 *)((u8 *)arg0 + 0x3DA4) = 1;
    *(s32 *)((u8 *)arg0 + 0x3DA8) = 0;
    *(s32 *)((u8 *)arg0 + 0x3DAC) = 0;
    arg0->unk_1D0.unk_14(1, 0);
    arg0->unk_374 = 0;
    arg0->unk_378 = 2.2f;
    arg0->unk_370 = 1;
    arg0->unk_390 = 0;
    arg0->unk_394 = 0.5f;
    arg0->unk_38C = 0;
    arg0->unk_1CC = 0;
    p.unk_00 = 1.0f;
    p.unk_18 = 0;
    p.unk_14 = 0;
    p.unk_10 = 0;
    p.unk_1C = 0;
    func_089139A4(arg0->unk_3A0, 0, &p, 1);
    arg0->unk_3F0 = 1;
    arg0->unk_34 = arg1;
    if (arg1 != 0) {
        func_088CE1EC(arg1, arg0);
    }
}

}
