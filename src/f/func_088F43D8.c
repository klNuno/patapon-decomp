#include "common.h"

void func_08855354(char *);
extern void *D_08A44B58[];
extern void *D_08A4669C[];
extern f32 D_089E2D90[];
extern f32 D_089E2D94[];
extern f32 D_089E2D98[];
extern f32 D_089E2D9C[];

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30, unk_34, unk_38, unk_3C;
    f32 unk_40, unk_44, unk_48, unk_4C;
    u8 unk_50;
    u8 pad_51[3];
    void **unk_54;
    u8 pad_58[8];
    void *unk_60;
    u8 pad_64[0xC];
    f32 unk_70, unk_74, unk_78, unk_7C;
    f32 unk_80, unk_84, unk_88, unk_8C;
} S;

typedef struct {
    S *unk_00;
} T;

S *func_088F43D8(T arg0, void *arg1) {
    S *temp = arg0.unk_00;

    temp->unk_54 = D_08A44B58;
    func_08855354((char *)temp);
    temp->unk_40 = 45.0f;
    temp->unk_44 = 50.0f;
    temp->unk_48 = 5000.0f;
    temp->unk_4C = 100.0f;
    temp->unk_38 = 100.0f;
    temp->unk_50 = 1;
    temp->unk_54 = D_08A4669C;
    temp->unk_60 = arg1;
    temp->unk_70 = 0.0f;
    temp->unk_74 = 0.0f;
    temp->unk_78 = 0.0f;
    temp->unk_7C = 1.0f;
    temp->unk_80 = 0.0f;
    temp->unk_84 = 0.0f;
    temp->unk_88 = 0.0f;
    temp->unk_8C = 0.0f;
    temp->unk_4C = 50.0f;
    temp->unk_48 = 1500.0f;
    temp->unk_30 = D_089E2D90[0];
    temp->unk_34 = D_089E2D94[0];
    temp->unk_38 = D_089E2D98[0];
    temp->unk_3C = D_089E2D9C[0];
    return temp;
}
