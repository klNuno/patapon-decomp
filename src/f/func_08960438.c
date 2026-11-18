#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_08960438;

typedef struct {
    u8 pad_00[0x110];
    s32 unk_110;
    s32 unk_114;
    s32 unk_118;
    s32 unk_11C;
    s32 unk_120;
    u8 unk_124[0x10];
    u8 unk_134[0x10];
    u8 unk_144[0x10];
    u8 unk_154[0x10];
    u8 unk_164[0x10];
} S_08960438;

void func_0895F2B4(T_08960438 *, s32);
void func_0895F370(T_08960438 *, s32);
void func_0895F42C(T_08960438 *, s32);
void func_0895F4E8(T_08960438 *, s32);
void func_0895F5A4(T_08960438 *, s32);
void func_0896050C(T_08960438 *, void *);
void func_08960550(T_08960438 *);
void func_08960568(T_08960438 *, void *);
void func_089605AC(T_08960438 *);
void func_089605C4(T_08960438 *, void *);
void func_08960608(T_08960438 *);
void func_08960620(T_08960438 *, void *);
void func_08960664(T_08960438 *);
void func_0896067C(T_08960438 *, void *);
void func_089606C0(T_08960438 *);

void func_08960438(S_08960438 *arg0) {
    T_08960438 sp50;
    T_08960438 sp40;
    T_08960438 sp30;
    T_08960438 sp20;
    T_08960438 sp10;

    arg0->unk_110 = 0;
    arg0->unk_114 = 0;
    arg0->unk_118 = 0;
    arg0->unk_11C = 0;
    arg0->unk_120 = 0;
    func_089606C0(&sp50);
    func_0896067C(&sp50, arg0->unk_124);
    func_0895F5A4(&sp50, -1);
    func_08960664(&sp40);
    func_08960620(&sp40, arg0->unk_134);
    func_0895F4E8(&sp40, -1);
    func_08960608(&sp30);
    func_089605C4(&sp30, arg0->unk_144);
    func_0895F42C(&sp30, -1);
    func_089605AC(&sp20);
    func_08960568(&sp20, arg0->unk_154);
    func_0895F370(&sp20, -1);
    func_08960550(&sp10);
    func_0896050C(&sp10, arg0->unk_164);
    func_0895F2B4(&sp10, -1);
}
