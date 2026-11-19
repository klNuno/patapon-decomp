#include "common.h"

typedef struct Node_0890B198 {
    struct Node_0890B198 *unk_00;
    u8 pad_04[0x1C];
    u8 unk_20[0xEC0 - 0x20];
    f32 unk_EC0;
    f32 unk_EC4;
} Node_0890B198;

typedef struct Obj_0890B198 {
    u8 pad_00[0xEE018];
    Node_0890B198 unk_EE018;
} Obj_0890B198;

typedef struct It_0890B198 {
    Node_0890B198 *unk_00;
} It_0890B198;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V_0890B198;

extern int func_089117F0(s32, f32 *);

void func_0890B198(Obj_0890B198 *arg0) {
    struct { V_0890B198 unk_00; u8 pad_08[0x10]; } v;
    It_0890B198 temp;
    It_0890B198 end;
    u8 eq;

    temp.unk_00 = arg0->unk_EE018.unk_00;
    end.unk_00 = &arg0->unk_EE018;
    while (eq = (temp.unk_00 == end.unk_00), !(eq != 0)) {
        v.unk_00.unk_00 = temp.unk_00->unk_EC0;
        v.unk_00.unk_04 = temp.unk_00->unk_EC4;
        func_089117F0((s32)temp.unk_00->unk_20, &v.unk_00.unk_00);
        temp.unk_00 = temp.unk_00->unk_00;
    }
}
