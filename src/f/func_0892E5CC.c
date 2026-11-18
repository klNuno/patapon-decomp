#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 pad_24[0xC];
    u8 unk_30[0x28];
    s32 unk_58;
} S088CE0C0;

void func_08827CAC(void *, void *, s32);
void func_08827DA8(void *);
s32 func_0888027C(s32 *, s32 *);
void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_08880484(s32 *, s32 *, s32);
void func_088804AC(s32 *, S088CE0C0 *);
void func_088804B4(s32 *, S088CE0C0 *);
void func_0892E048(void);

void func_0892E5CC(S088CE0C0 *arg0) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;

    if (arg0->unk_58 != 0) {
        func_08827CAC(arg0->unk_30, func_0892E048, 0);
        func_08827DA8(arg0->unk_30);
    }
    func_088804B4(&sp1C, arg0);
    func_088804AC(&sp18, arg0);
    while (func_0888027C(&sp1C, &sp18) != 0) {
        func_08880484(&sp10, &sp1C, 0);
        func_088802D0(&sp14, arg0, sp10);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = (s32)arg0;
    arg0->unk_00 = (s32)arg0;
}
