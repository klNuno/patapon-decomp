#include "common.h"

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, void *, s32, f32, f32, f32);

typedef struct {
    u8 pad_00[0x80];
    void *unk_80[12];
} UnkInner;

typedef struct {
    u8 pad_00[0xBA8];
    UnkInner *unk_BA8;
} UnkOuter;

void func_088B489C(UnkOuter *arg0, u32 arg1)
{
    void *temp;
    switch (arg1) {
        case 0: case 1: case 2: case 3:
        case 4: case 5: case 6: case 7:
        case 8: case 9: case 10: case 11:
            temp = arg0->unk_BA8->unk_80[arg1];
            if (temp != NULL) {
                func_08878864(func_089B53D8(func_088586E8()), temp, 2, 1.0f, 0.0f, 0.0f);
            }
            break;
    }
}
