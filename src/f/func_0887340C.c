#include "common.h"

typedef struct {
    u8 pad_00[0x1518];
    u8 unk_1518;
    u8 pad_1519[3];
    s32 unk_151C;
    u8 pad_1520[0x2974 - 0x1520];
    s32 unk_2974;
    u8 pad_2978[0x25690 - 0x2978];
    u8 unk_25690;
    u8 pad_25691[0x3ECFC - 0x25691];
    u8 unk_3ECFC;
} S_0887340C;

void func_0886F2FC(S_0887340C *);
void func_08873998(S_0887340C *);

void func_0887340C(S_0887340C *arg0) {
    if (arg0->unk_25690 == 1) {
        return;
    }
    func_0886F2FC(arg0);
    if (arg0->unk_1518 == 0) {
        return;
    }
    arg0->unk_3ECFC = arg0->unk_2974 != 0;
    switch (arg0->unk_151C) {
    case 7:
    case 8:
    case 9:
    case 10:
        func_08873998(arg0);
        break;
    case 0:
        func_08873998(arg0);
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        break;
    }
}
