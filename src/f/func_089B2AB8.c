#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} Unk2;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    Unk2 *unk_08;
    u8 pad_0C[0xC];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[0x6B0];
} Unk1;

typedef struct {
    u8 pad_00[0x58];
    u8 *unk_58;
    u8 unk_5C[0x14];
    Unk1 unk_70;
    Unk1 unk_740;
    Unk1 unk_E10;
} Unk0;

extern u8 D_08A489CC[];
void func_089B32D0(void *, s32);
void func_089457D8(void *);
void func_088F232C(void *, s32);
void func_088F2288(void *);
void func_088AF260(void *, s32);

Unk0 *func_089B2AB8(Unk0 *arg0, s32 arg1) {
    Unk2 *temp;

    func_089B32D0(arg0, arg1);
    arg0->unk_58 = D_08A489CC;
    func_089457D8(arg0->unk_5C);
    func_088F232C(&arg0->unk_70, 1);
    func_088F232C(&arg0->unk_740, 1);
    func_088F2288(&arg0->unk_E10);
    func_088AF260(&arg0->unk_70, 1);
    arg0->unk_70.unk_04 = 0;
    func_088AF260(&arg0->unk_740, 1);
    arg0->unk_740.unk_04 = 1;
    func_088AF260(&arg0->unk_E10, 1);
    arg0->unk_E10.unk_04 = 0;
    temp = arg0->unk_70.unk_08;
    arg0->unk_70.unk_18 = 20.0f - temp->unk_00;
    arg0->unk_70.unk_1C = 20.0f - temp->unk_04;
    temp = arg0->unk_740.unk_08;
    arg0->unk_740.unk_18 = 20.0f - temp->unk_00;
    arg0->unk_740.unk_1C = 20.0f - temp->unk_04;
    temp = arg0->unk_E10.unk_08;
    arg0->unk_E10.unk_18 = 12.0f - temp->unk_00;
    arg0->unk_E10.unk_1C = 12.0f - temp->unk_04;
    return arg0;
}
