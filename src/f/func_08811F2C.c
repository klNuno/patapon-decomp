#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} O08811F2C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} L08811F2C;

s32 *func_0880F690(O08811F2C *);
s32 func_088104B4(O08811F2C *);
s32 func_08810590(O08811F2C *);
void func_08812020(O08811F2C *, L08811F2C *);
void func_08812034(s32 *, s32 *);
s32 *func_08812048(L08811F2C *);
void func_0881206C(O08811F2C *);
void func_08812094(L08811F2C *, s32, s32);
s32 func_08812148(O08811F2C *);
void func_08812150(L08811F2C *, s32);
void func_088121D0(L08811F2C *, s32, s32);
void func_08812210(L08811F2C *, s32);
s32 func_088122B0(O08811F2C *, s32);
void func_088128F0(L08811F2C *, s32);

void func_08811F2C(O08811F2C *arg0, s32 arg1) {
    L08811F2C sp1C;
    s32 temp;

    func_08812210(&sp1C, func_08810590(arg0));
    func_088121D0(&sp1C, arg0->unk_04 + arg1, func_088122B0(arg0, arg0->unk_04 + arg1 - *func_0880F690(arg0)));
    sp1C.unk_10 = arg0->unk_04;
    func_08812150(&sp1C, arg1);
    temp = func_08812148(arg0);
    func_08812094(&sp1C, temp, func_088104B4(arg0));
    func_0881206C(arg0);
    func_08812034(func_0880F690(arg0), func_08812048(&sp1C));
    func_08812020(arg0, &sp1C);
    func_08812034(&arg0->unk_04, &sp1C.unk_04);
    func_088128F0(&sp1C, -1);
}
