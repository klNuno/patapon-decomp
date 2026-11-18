#include "common.h"

typedef struct {
    u8 pad_00[0x848C];
    u8 unk_848C[0x94];
    u8 unk_8520[0x848C];
    u8 *unk_109AC;
} A_089D0D04;

void func_0880416C(void *);
void func_08870834(void *, s32);
void func_089D0C48(void *, s32);
void func_089D0D98(A_089D0D04 *);
extern u8 D_08A48EA0[];

A_089D0D04 *func_089D0D04(A_089D0D04 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_109AC = D_08A48EA0;
            func_089D0D98(arg0);
            func_089D0C48(arg0->unk_8520, -1);
            func_08870834(arg0->unk_848C, -1);
            func_089D0C48(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
