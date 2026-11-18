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

void func_088804B4(s32 *, S088CE0C0 *);
void func_088804AC(s32 *, S088CE0C0 *);
s32 func_0888027C(s32 *, s32 *);
void func_08880484(s32 *, s32 *, s32);
void func_088802D0(s32 *, S088CE0C0 *, s32);

S088CE0C0 *func_088E2F9C(S088CE0C0 *arg0) {
    s32 it;
    s32 end;
    s32 sp14;
    s32 sp10;

    arg0->unk_24 = D_08A45350;
    arg0->unk_1C = D_08A4535C;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_088804B4(&it, arg0);
    func_088804AC(&end, arg0);
    while (func_0888027C(&it, &end)) {
        func_08880484(&sp10, &it, 0);
        func_088802D0(&sp14, arg0, sp10);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
