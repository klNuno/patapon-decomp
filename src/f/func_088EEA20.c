#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 unk_20[0x200];
    s32 unk_220;
    s32 unk_224;
} T088EEA20;

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A46608[];
extern u8 D_089E29D8[];
extern u8 D_08A465EC[];

void func_0881F5C0(void *, s32, s32);

T088EEA20 *func_088EEA20(T088EEA20 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A46608;
    arg0->unk_04 = 3;
    arg0->unk_08 = D_089E29D8;
    arg0->unk_0C = 0x1C;
    arg0->unk_00 = D_08A465EC;
    arg0->unk_10 = arg2;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_220 = arg1;
    arg0->unk_224 = arg3;
    func_0881F5C0(arg0->unk_20, 0, 0x200);
    return arg0;
}
