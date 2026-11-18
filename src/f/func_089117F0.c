#include "common.h"

typedef struct {
    f32 unk_00[16];
} Unk1;

typedef struct {
    volatile f32 unk_00;
    volatile f32 unk_04;
} Unk2;

typedef struct {
    u8 pad_00[0xE88];
    f32 unk_E88;
    f32 unk_E8C;
} Unk;

void func_0887FE30(Unk *, Unk1 *);
void func_0887FF58(Unk *);

void func_089117F0(Unk *arg0, Unk2 *arg1) {
    Unk1 temp;
    f32 temp5;
    f32 temp6;
    f32 temp2;
    f32 temp3;
    Unk1 *temp4;
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
    temp5 = arg1->unk_00;
    temp3 = arg1->unk_04;
    temp6 = arg0->unk_E88;
    temp2 = temp5 + temp6;
    temp4 = &temp;
    temp4->unk_00[12] = temp2;
    temp4->unk_00[13] = temp3 + arg0->unk_E8C;
    func_0887FE30(arg0, temp4);
    func_0887FF58(arg0);
}
