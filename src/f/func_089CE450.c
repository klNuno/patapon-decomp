#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[0x1153C];
    s32 unk_11544;
    u8 unk_11548;
    u8 pad_11549[0x23];
    u8 unk_1156C;
    u8 pad_1156D[0x3];
    s32 unk_11570;
    u8 pad_11574[0x10];
    u8 unk_11584;
    u8 unk_11585;
} S_089CE450;

s32 func_089CE590(S_089CE450 *);
void func_089D048C(S_089CE450 *, s32);
void func_089D04CC(S_089CE450 *);
void func_089D1904(void *, s32, s32);

s32 func_089CE450(S_089CE450 *arg0, s32 arg1) {
    if (func_089CE590(arg0) != 0) {
        return 0;
    }
    switch (arg1) {
    case 1:
        func_089D048C(arg0, 2);
        break;
    case 2:
        func_089D048C(arg0, 6);
        break;
    case 3:
        func_089D048C(arg0, 0xD);
        break;
    case 4:
        func_089D048C(arg0, 6);
        break;
    case 5:
        func_089D048C(arg0, 0xD);
        break;
    default:
        return 0;
    }
    arg0->unk_11544 = arg1;
    arg0->unk_11584 = 0;
    arg0->unk_11585 = 1;
    arg0->unk_11548 = 1;
    func_089D04CC(arg0);
    func_089D1904(arg0->unk_08, 0, -1);
    arg0->unk_1156C = 0;
    arg0->unk_11570 = 0;
    return 1;
}
