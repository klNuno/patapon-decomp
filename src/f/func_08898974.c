#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
    u8 pad_374[0x1C];
    u8 unk_390;
    u8 pad_391[0x3];
    s32 unk_394;
    s32 unk_398;
    s32 unk_39C;
    s32 unk_3A0;
    s32 unk_3A4;
    u8 unk_3A8[0x30];
    u8 *unk_3D8;
    s32 unk_3DC;
    u8 pad_3E0[0x4];
    s32 unk_3E4;
    u8 unk_3E8[0xC38];
    u8 unk_1020[0x20];
    u8 unk_1040[0x1F1C];
    s32 unk_2F5C[12];
} Obj_08898974;

s32 func_0893D430(s32 *);
void func_08967630(Obj_08898974 *, s32, s32);
void func_088D591C(void *, Obj_08898974 *);
void func_0891DFA0(void *);
void func_0893F5F8(void *);
extern u8 D_08A45790[];
extern u8 D_08A457AC[];
extern u8 D_08A457C4[];
extern u8 D_08A457D4[];
extern u8 D_08A45820[];

Obj_08898974 *func_08898974(Obj_08898974 *arg0, s32 arg1, s32 arg2) {
    s32 i;

    func_08967630(arg0, arg2, func_0893D430(&arg1));
    arg0->unk_08 = D_08A45790;
    arg0->unk_58 = D_08A457AC;
    arg0->unk_7C = D_08A457C4;
    arg0->unk_CC = D_08A457D4;
    arg0->unk_370 = D_08A45820;
    arg0->unk_390 = 1;
    arg0->unk_394 = 0;
    arg0->unk_398 = 0;
    arg0->unk_39C = 0;
    arg0->unk_3A0 = 0;
    arg0->unk_3A4 = 0;
    arg0->unk_3D8 = (u8 *)(((u32)arg0->unk_3A8 & 0xF) + (u32)arg0 + 0x3A8);
    arg0->unk_3DC = 0;
    arg0->unk_3E4 = 0;
    func_088D591C(arg0->unk_3E8, arg0);
    func_0891DFA0(arg0->unk_1020);
    func_0893F5F8(arg0->unk_1040);
    for (i = 0; i < 12; i++) {
        arg0->unk_2F5C[i] = 0;
    }
    return arg0;
}
