#include "common.h"

typedef struct { f32 unk_00[16]; } Unk1;
typedef struct Unk Unk;
typedef struct S_088853DC S_088853DC;
typedef struct {
    u8 pad_00[0x20];
    u8 unk_20[0xE80];
    u8 unk_EA0[0x114];
    u8 unk_FB4[0x14C];
    f32 unk_1100;
    f32 unk_1104;
    f32 unk_1108;
    u8 unk_110C;
} T;

void func_0887FE30(Unk *, Unk1 *);
void func_0887FF58(Unk *);
void func_088853DC(S_088853DC *arg0, s32 arg1, s32 arg2);
void func_08885980(void *, s32, s32, void *);
extern u8 D_089FA208[];

void func_08887DB8(T *arg0) {
    Unk1 temp;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;

    if (arg0->unk_110C != 0) {
        temp.unk_00[1] = 0.0f;
        temp.unk_00[2] = 0.0f;
        temp.unk_00[3] = 0.0f;
        temp.unk_00[4] = 0.0f;
        temp.unk_00[6] = 0.0f;
        temp.unk_00[7] = 0.0f;
        temp.unk_00[8] = 0.0f;
        temp.unk_00[9] = 0.0f;
        temp.unk_00[11] = 0.0f;
        temp.unk_00[12] = 0.0f;
        temp.unk_00[13] = 0.0f;
        temp.unk_00[14] = 0.0f;
        temp.unk_00[0] = 1.0f;
        temp.unk_00[5] = 1.0f;
        temp.unk_00[10] = 1.0f;
        temp.unk_00[15] = 1.0f;
        temp2 = arg0->unk_1108;
        temp4 = arg0->unk_1100;
        temp5 = 480.0f;
        temp4 *= temp2;
        temp3 = temp2 - 1.0f;
        temp5 *= temp3;
        temp5 /= 2.0f;
        temp.unk_00[12] = temp4 - temp5;
        temp6 = 272.0f * temp3 / 2.0f;
        temp7 = arg0->unk_1104 * temp2;
        temp.unk_00[0] = temp2;
        temp.unk_00[5] = temp2;
        temp.unk_00[10] = temp2;
        temp.unk_00[15] = temp2;
        temp.unk_00[13] = temp7 - temp6;
        func_0887FE30((Unk *)arg0->unk_20, &temp);
        func_0887FF58((Unk *)arg0->unk_20);
    } else {
        func_08885980(arg0->unk_FB4, 5, 1, D_089FA208);
    }
    func_088853DC((S_088853DC *)arg0->unk_EA0, 0, 0);
}
