#include "common.h"

extern "C" {

typedef struct {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u16 unk_20;
    u16 unk_22;
    u8 pad_24[0x1C];
    s32 unk_40;
    u8 pad_44[0xC];
    s32 unk_50;
    s32 unk_54;
    u8 pad_58[0x14];
    s32 unk_6C;
} T;
typedef struct { f32 unk_00; f32 unk_04; } U;

extern u8 D_08A45C28[];
extern s32 func_088FAABC(s32);
extern U *func_088FAB04(s32);

struct E {};

static inline u16 func_1(s32 arg0, const E &) {
    return (u16)(u32)func_088FAB04(arg0)->unk_04;
}

T *func_088AEF6C(T *arg0, s32 arg1) {
    u16 temp;

    arg0->unk_00 = D_08A45C28;
    arg0->unk_04 = 0;
    arg0->unk_08 = func_088FAABC(arg1);
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    temp = func_1(arg1, E());
    arg0->unk_20 = (u16)(u32)func_088FAB04(arg1)->unk_00;
    arg0->unk_22 = temp;
    arg0->unk_6C = arg1;
    arg0->unk_50 = 0;
    arg0->unk_54 = 0;
    arg0->unk_40 = 1;
    return arg0;
}

}
