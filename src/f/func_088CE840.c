#include "common.h"

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
} S_088CE840;

extern void *D_08A8812C[];
extern void *D_08AD2070[];
s32 func_08860820(void *, s32);
s32 func_0886E580(S_088CE840 *, s32);
void func_0886F33C(S_088CE840 *, s32, s32);
void func_0887C240(void *, s32);

s32 func_088CE840(S_088CE840 *arg0, s32 arg1) {
    if (func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0) != 0) {
        func_0887C240(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL, arg1);
    } else {
        arg0->unk_1510 = 1;
        switch (func_0886E580(arg0, arg1)) {
        case 0x10000:
            break;
        case 0x10001:
            func_0886F33C(arg0, 0, 2);
            break;
        case 0x10002:
            return 0x10001;
        case 1:
            func_0886F33C(arg0, 0, 2);
            break;
        case 0:
            func_0886F33C(arg0, 1, 0);
            break;
        }
    }
    return 0x10000;
}
