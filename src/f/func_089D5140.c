#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 unk_08[0x40];
    s32 unk_48;
    u8 pad_4C[0x4];
    u8 unk_50[0x50];
    f32 unk_A0;
} Obj_089D5140;

s32 func_0887EDA8(s32, s32);
void func_08913708(char *, s32);
void func_089139A4(void *, s32, void *, s32);
s32 func_08913AE0(char *);
void func_089D5420(void *);
s32 func_089D5878(void *);
void func_089D5888(void *, s32);

void func_089D5140(Obj_089D5140 *arg0, s32 arg1) {
    func_089D5420(arg0->unk_08);
    func_08913708((char *)arg0->unk_50, arg1);
    switch (arg0->unk_48) {
    case 0:
        break;
    case 1:
        if (func_0887EDA8(arg0->unk_04, 0x6009) != 0) {
            func_089D5888(arg0->unk_08, 1);
        }
        if (func_089D5878(arg0->unk_08) != 0) {
            arg0->unk_48 = 3;
            arg0->unk_A0 = 0.5f;
            func_089139A4(arg0->unk_50, 1, &arg0->unk_A0, 1);
        }
        break;
    case 3:
        if (func_08913AE0((char *)arg0->unk_50) != 0) {
            arg0->unk_48 = 4;
        }
        break;
    }
}
