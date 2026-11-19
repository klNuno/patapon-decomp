#include "common.h"

extern "C" {

struct Unk;
typedef void (Unk::*UnkPtr)(u8 *, s32, s32, f32, s32);

struct T_08958F68 { f32 unk_00, unk_04, unk_08; };
extern T_08958F68 D_08A490BC[];

struct Unk1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    UnkPtr unk_0C;
    f32 unk_18;
    s32 unk_1C;
    u8 unk_20[0x20];
    Unk *unk_40;
};

struct Unk2 {
    u8 pad_00[0x2D];
    u8 unk_2D;
    u8 unk_2E;
};

s32 func_08958F68(Unk1 *arg0, Unk2 *arg1)
{
    if (!arg0->unk_0C) {
        goto end;
    }
    if (arg0->unk_00 == 2) {
        if (arg1->unk_2E == 0) {
            return 0;
        }
    } else {
        if (arg1->unk_2D == 0) {
            return 0;
        }
    }
    (arg0->unk_40->*arg0->unk_0C)(arg0->unk_20, arg0->unk_04, arg0->unk_08, arg0->unk_18, arg0->unk_1C);
    arg0->unk_04 = -1;
    arg0->unk_08 = -1;
    arg0->unk_00 = 1;
    T_08958F68 *temp = (T_08958F68 *)(u32)D_08A490BC;
    f32 temp0 = ((volatile T_08958F68 *)D_08A490BC)->unk_00;
    f32 temp1 = temp->unk_04;
    f32 temp2 = temp->unk_08;
    T_08958F68 *p = (T_08958F68 *)&arg0->unk_0C;
    p->unk_00 = temp0;
    p->unk_04 = temp1;
    p->unk_08 = temp2;
    arg0->unk_18 = 0.0f;
    arg0->unk_1C = 3;
    arg0->unk_20[0] = 0;
    return 1;
end:
    return 0;
}

}
