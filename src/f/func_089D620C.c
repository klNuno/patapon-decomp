#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} L;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[4];
    s32 unk_10[2];
    s32 unk_18;
} A;

s32 func_0893F544(void *, s32);
void func_08864A30(L *);
void func_08864A68(L *, s32);
void func_08814BB4(s32);
void func_08815814(s32, s32);
void func_088157E8(s32, s32);
void func_0881587C(s32, s32);
void func_088157AC(s32, s32, s32, s32);
void func_088159A8(s32, s32, s32, s32, s32);
void func_08815D9C(s32, s32, s32, s32, s32);
void func_08815514(s32);
void func_0881518C(s32, s32, s32, s32);
void func_088151A8(s32, s32, s32, s32, s32, s32, s32);

void func_089D620C(A *arg0) {
    L l;
    s32 *p;
    s32 i;

    p = (s32 *)((u8 *)arg0->unk_10 + arg0->unk_18 * 4);
    if (func_0893F544(arg0->unk_0C, *p) != 0) {
        arg0->unk_18 = (arg0->unk_18 + 1) & 1;
    }
    func_08864A30(&l);
    func_08814BB4(9);
    func_08815814(0, 0);
    func_088157E8(7, 0);
    func_0881587C(0, 0);
    func_088157AC(3, 0, 0, 0);
    func_088159A8(0, 0x200, 0x200, 0x200, *p);
    func_08815D9C(0, 2, 3, 0, 0);
    func_08814BB4(4);
    func_08815514(-1);
    for (i = 0; i < 4; i++) {
        func_0881518C(0x80, 0x110, 0x80, 0x110);
        func_088151A8(i * 0x200 / 4, 0, 0, i * 0x200 / 4, 0, 0, 0);
    }
    func_08864A68(&l, -1);
}
