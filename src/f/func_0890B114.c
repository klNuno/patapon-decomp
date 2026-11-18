#include "common.h"

typedef struct Node_0890B114 {
    struct Node_0890B114 *unk_00;
    u8 pad_04[0x1C];
    u8 unk_20[4];
} Node_0890B114;

typedef struct Obj_0890B114 {
    u8 pad_00[0xEE018];
    Node_0890B114 unk_EE018;
} Obj_0890B114;

typedef struct It_0890B114 {
    Node_0890B114 *unk_00;
} It_0890B114;

void func_089117E8(void *, s32);

void func_0890B114(Obj_0890B114 *arg0, s32 arg1) {
    It_0890B114 temp;
    It_0890B114 end;
    u8 eq;

    temp.unk_00 = arg0->unk_EE018.unk_00;
    end.unk_00 = &arg0->unk_EE018;
    while (eq = (temp.unk_00 == end.unk_00), !(eq != 0)) {
        func_089117E8(temp.unk_00->unk_20, arg1);
        temp.unk_00 = temp.unk_00->unk_00;
    }
}
