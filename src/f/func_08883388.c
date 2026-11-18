#include "common.h"

void func_088836EC(s32 *, s32, s32, s32);
void func_08883890(s32, s32);
s32 func_0888B03C(s32 *, char *);
extern char D_089F9BCC[];
extern u8 D_08AD22A1[];

s32 func_08883388(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp2C;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL && *arg0 != 0 && arg2 != 0x10) {
        sp2C = *arg0;
        func_08883890(arg2, func_0888B03C(&sp2C, D_089F9BCC));
    }
    D_08AD22A1[0] = 1;
    func_088836EC(arg0, arg1, arg2, arg3);
    D_08AD22A1[0] = 0;
    return 1;
}
