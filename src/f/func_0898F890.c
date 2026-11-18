#include "common.h"

typedef struct T_0898F890 {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x348 - 0x34];
    u8 unk_348[0x18];
    u8 unk_360[0x3F78 - 0x360];
    u8 unk_3F78[0x40A0 - 0x3F78];
    s32 unk_40A0;
    s32 unk_40A4;
} T_0898F890;

void func_088CE1EC(s32, T_0898F890 *);
void func_0898EF10(s32 *, void *);
void func_0898EF08(s32 *, void *);
void func_0898EF90(s32 *, void *, s32, s32);
void func_0898F97C(void *);
s32 func_0898F934(void *, u32);
void func_0898F94C(void *, s32 *);

void func_0898F890(T_0898F890 *arg0, s32 arg1, s32 arg2) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    u32 i;

    arg0->unk_40A4 = arg1;
    arg0->unk_40A0 = arg2;
    func_0898EF10(&sp18, arg0->unk_348);
    func_0898EF08(&sp14, arg0->unk_348);
    func_0898EF90(&sp1C, arg0->unk_348, sp18, sp14);
    func_0898F97C(arg0->unk_3F78);
    for (i = 0; i < 0x40; i++) {
        sp10 = func_0898F934(arg0->unk_360, 0x3F - i);
        func_0898F94C(arg0->unk_3F78, &sp10);
    }
    func_088CE1EC(arg0->unk_30, arg0);
}
