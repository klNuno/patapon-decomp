#include "common.h"

typedef struct {
    u8 pad_00[0x348];
    u8 unk_348[0x18];
    u8 unk_360[0x3C18];
    u8 unk_3F78[0x128];
    s32 unk_40A0;
    s32 unk_40A4;
} T0898F9B0;

void func_0898EF10(s32 *, void *);
void func_0898EF08(s32 *, void *);
void func_0898EF90(s32 *, void *, s32, s32);
void func_0898F97C(void *);
s32 func_0898F934(void *, u32);
void func_0898F94C(void *, s32 *);

void func_0898F9B0(T0898F9B0 *arg0) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    u32 i;

    func_0898EF10(&sp18, arg0->unk_348);
    func_0898EF08(&sp14, arg0->unk_348);
    func_0898EF90(&sp1C, arg0->unk_348, sp18, sp14);
    func_0898F97C(arg0->unk_3F78);
    for (i = 0; i < 0x40; i++) {
        sp10 = func_0898F934(arg0->unk_360, 0x3F - i);
        func_0898F94C(arg0->unk_3F78, &sp10);
    }
    arg0->unk_40A0 = 0;
    arg0->unk_40A4 = 0;
}
