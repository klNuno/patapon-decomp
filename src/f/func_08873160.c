#include "common.h"

typedef struct {
    u8 pad_00[0x498];
    s32 unk_498;
    u8 pad_49C[0x15];
    u8 unk_4B1;
} B_08873160;

typedef struct {
    u8 pad_00[0x151C];
    s32 unk_151C;
    u8 pad_1520[0x36B10 - 0x1520];
    s32 unk_36B10;
    u8 pad_36B14[0x36B4C - 0x36B14];
    s32 unk_36B4C;
    u8 pad_36B50[0x10];
    u8 unk_36B60[0x55430 - 0x36B60];
    B_08873160 *unk_55430;
} A_08873160;

extern void func_08937878(s32);
extern void func_088990BC(s32);
extern B_08873160 *func_08873BA4(A_08873160 *, s32, s32, s32);
extern s32 func_08852BA8(B_08873160 *);
extern void func_088BCF84(void *, s32);

s32 func_08873160(A_08873160 *arg0) {
    s32 x;

    func_08937878(arg0->unk_36B4C);
    if (arg0->unk_36B10 != 0) {
        func_088990BC(arg0->unk_36B10);
    }
    func_08873BA4(arg0, 0, 0, 1);
    arg0->unk_55430 = func_08873BA4(arg0, 2, 0, 1);
    arg0->unk_55430->unk_498 = func_08852BA8(arg0->unk_55430);
    arg0->unk_55430->unk_4B1 = 1;
    func_088BCF84(arg0->unk_36B60, 1);
    x = arg0->unk_151C + 1;
    return x > 10 ? 0 : (x < 0 ? 10 : x);
}
