#include "common.h"

extern "C" {

struct Unk1 {
    Unk1 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
};

struct Unk2 {
    Unk1 *unk_00;

    s32 unk_04(const Unk2 &arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(const Unk2 &arg0) const { return !(bool)unk_04(arg0); }
};

typedef struct {
    u8 pad_00[0x3EBC];
    Unk1 *unk_3EBC;
} Unk;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} Unk3;

s32 func_0883B9C8(s32, f32);
void func_08877EA8(s32 *, s32 *);
void func_08877EA0(s32 *, s32 *);
void func_08877EB4(Unk3 *, s32 *, s32, s32);

void func_088790E0(Unk *arg0, f32 arg1) {
    Unk3 temp;
    s32 temp2;
    s32 temp3;
    Unk2 temp4;
    Unk2 temp5;
    s32 *temp6;

    temp4.unk_00 = arg0->unk_3EBC;
    temp5.unk_00 = (Unk1 *)&arg0->unk_3EBC;
    while (temp4.unk_08(temp5)) {
        temp6 = &temp4.unk_00->unk_0C;
        if (*temp6 >= 0) {
            func_0883B9C8(*(volatile s32 *)temp6, arg1);
        }
        temp4.unk_00 = temp4.unk_00->unk_00;
    }
    func_08877EA8(&temp2, (s32 *)&arg0->unk_3EBC);
    func_08877EA0(&temp3, (s32 *)&arg0->unk_3EBC);
    func_08877EB4(&temp, (s32 *)&arg0->unk_3EBC, temp2, temp3);
}

}
