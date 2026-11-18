#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V_0887F5AC;

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
    f32 unk_80;
    u8 unk_84;
    u8 pad_85[3];
    void *unk_88;
    V_0887F5AC unk_8C;
    u8 unk_98;
    u8 pad_99[3];
    f32 unk_9C, unk_A0, unk_A4, unk_A8;
    f32 unk_AC, unk_B0, unk_B4, unk_B8;
    f32 unk_BC;
    u8 unk_C0;
} S_0887F5AC;

typedef struct {
    S_0887F5AC *unk_00;
} H_0887F5AC;

typedef struct {
    S_0887F5AC *unk_00;
} T_0887F5AC;

typedef struct {
    V_0887F5AC unk_00;
    u8 pad_0C[0x4];
} W_0887F5AC;

void func_08855354(char *);
extern void *D_08A44B58[];
extern void *D_08A45320[];
extern f32 D_089F9A98[];
extern f32 D_089F9AA0[];

S_0887F5AC *func_0887F5AC(T_0887F5AC arg0, void *arg1) {
    S_0887F5AC *temp = arg0.unk_00;
    W_0887F5AC w;

    temp->unk_54 = D_08A44B58;
    func_08855354((char *)temp);
    temp->unk_40 = 45.0f;
    temp->unk_44 = 50.0f;
    temp->unk_48 = 5000.0f;
    temp->unk_4C = 100.0f;
    temp->unk_38 = 100.0f;
    temp->unk_50 = 1;
    temp->unk_54 = D_08A45320;
    temp->unk_60 = arg1;
    temp->unk_70 = 0.0f;
    temp->unk_74 = 0.0f;
    temp->unk_78 = 0.0f;
    temp->unk_7C = 1.0f;
    temp->unk_80 = 0.0f;
    temp->unk_84 = 0;
    w.unk_00.unk_00 = D_089F9A98[0];
    w.unk_00.unk_04 = D_089F9A98[1];
    w.unk_00.unk_08 = D_089F9AA0[0];
    temp->unk_88 = temp;
    temp->unk_8C = w.unk_00;
    temp->unk_98 = 0;
    temp->unk_9C = 0.0f;
    temp->unk_A0 = 0.0f;
    temp->unk_A4 = 40.0f;
    temp->unk_A8 = 0.0f;
    temp->unk_AC = 0.0f;
    temp->unk_B0 = 0.0f;
    temp->unk_B4 = 0.0f;
    temp->unk_B8 = 160.0f;
    temp->unk_BC = 0.0f;
    temp->unk_C0 = 1;
    temp->unk_4C = 50.0f;
    temp->unk_48 = 1500.0f;
    temp->unk_30 = 0.0f;
    temp->unk_34 = 0.0f;
    temp->unk_38 = 160.0f;
    return temp;
}
