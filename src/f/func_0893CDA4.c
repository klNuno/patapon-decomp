#include "common.h"

typedef struct {
    u8 pad_00[0x321C8];
    u64 unk_321C8;
} S_0893CDA4_C;

typedef struct {
    u8 pad_00[0x1498];
    S_0893CDA4_C *unk_1498;
} S_0893CDA4_B;

typedef struct {
    u8 pad_00[0x42820];
    S_0893CDA4_B *unk_42820;
} S_0893CDA4_A;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x8];
    u8 unk_10[0xC];
    u32 unk_1C;
} S_0893CDA4;

extern S_0893CDA4_A *D_08AD1E28[];
s32 func_0893F590(void *);
void func_0893F4EC(void *);

s32 func_0893CDA4(S_0893CDA4 *arg0, u32 arg1) {
    switch (arg0->unk_04) {
    case 0:
        break;
    case 1:
        if (func_0893F590(arg0->unk_10) == 3) {
            arg0->unk_04 = 2;
            arg0->unk_1C = 0;
            func_0893F4EC(arg0->unk_10);
        }
        break;
    case 2:
        if (arg0->unk_1C++ > 2U) {
            return 1;
        }
        break;
    }
    (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1498->unk_321C8 += arg1;
    return 0x10000;
}
