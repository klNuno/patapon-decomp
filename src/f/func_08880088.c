#include "common.h"

typedef struct S088CE0C0 {
    struct S088CE0C0 *unk_00;
    struct S088CE0C0 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} S088CE0C0;

extern u8 D_08A45350[];
extern u8 D_08A4535C[];

void func_0880416C(void *);
void func_08880160(S088CE0C0 *);
s32 func_0888027C(s32 *, s32 *);
void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_08880484(s32 *, s32 *, s32);
void func_088804AC(s32 *, S088CE0C0 *);
void func_088804B4(s32 *, S088CE0C0 *);

S088CE0C0 *func_08880088(S088CE0C0 *arg0, s16 arg1) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A45350;
        func_088804B4(&sp1C, arg0);
        func_088804AC(&sp18, arg0);
        while (func_0888027C(&sp1C, &sp18) != 0) {
            func_08880484(&sp10, &sp1C, 0);
            func_088802D0(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A4535C;
            func_08880160(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
