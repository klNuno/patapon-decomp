#include "common.h"

typedef struct {
    u8 pad_00[0x321C8];
    u64 unk_321C8;
} T_089D5FD8;

typedef struct {
    u8 pad_00[0x1498];
    T_089D5FD8 *unk_1498;
} H_089D5FD8;

typedef struct {
    u8 pad_00[0x42820];
    H_089D5FD8 *unk_42820;
} G_089D5FD8;

typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[4];
    u8 unk_0C[0xC];
    u32 unk_18;
    u8 unk_1C[0xD44];
    u8 unk_D60[0x1179C - 0xD60];
    u8 unk_1179C;
} S_089D5FD8;

extern G_089D5FD8 *D_08AD1E28[];

s32 func_0893F590(u8 *);
void func_0893F4EC(u8 *);
void func_089D6358(S_089D5FD8 *);
s32 func_089D1AD8(u8 *);
s32 func_089D1AEC(u8 *);
void func_089D641C(S_089D5FD8 *);
void func_089D1B50(u8 *, u32);
void func_08914EB4(u8 *, u32);

s32 func_089D5FD8(S_089D5FD8 *arg0, u32 arg1) {
    G_089D5FD8 *g;

    switch (arg0->unk_04) {
    case 0:
        break;
    case 1:
        if (func_0893F590(arg0->unk_0C) == 3) {
            arg0->unk_04 = 2;
            arg0->unk_18 = 0;
            func_0893F4EC(arg0->unk_0C);
        }
        break;
    case 2:
        if (arg0->unk_1179C) {
            arg0->unk_04 = 5;
        } else {
            func_089D6358(arg0);
            arg0->unk_04 = 3;
        }
        break;
    case 3:
        if (func_089D1AD8(arg0->unk_D60)) {
            if (func_089D1AEC(arg0->unk_D60) == 0) {
                arg0->unk_04 = 4;
                func_089D641C(arg0);
            } else {
                arg0->unk_04 = 5;
            }
        }
        break;
    case 4:
        break;
    case 5:
        if (arg0->unk_18++ > 2U) {
            return 4;
        }
        break;
    }
    g = D_08AD1E28[0];
    g = g != NULL ? g : NULL;
    g->unk_42820->unk_1498->unk_321C8 += arg1;
    func_089D1B50(arg0->unk_D60, arg1);
    func_08914EB4(arg0->unk_1C, arg1);
    return 0x10000;
}
