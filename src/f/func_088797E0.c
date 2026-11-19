#include "common.h"

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} Unk0;

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
} Unk4;

typedef struct {
    Unk0 *unk_00;
    Unk4 *unk_04;
} Unk;

typedef struct { s32 unk_00, unk_04, unk_08; } T;
void func_088797FC(s32 arg0, s32 arg1, s32 arg2, T *arg3);

void func_088797E0(Unk *arg0, T *arg1) {
    Unk4 *temp4;
    Unk0 *temp0;

    temp0 = arg0->unk_00;
    temp4 = arg0->unk_04;
    func_088797FC((s32)arg0, temp0->unk_108 & 7, temp4->unk_28, arg1);
}
