#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} S;

extern s32 D_08A04654[];
extern u8 D_08A490B4[];
void *func_08804280(s32, u8 *);

s32 func_0895295C(S *arg0, s32 arg1) {
    arg0->unk_00 = NULL;
    arg0->unk_04 = D_08A04654[0];
    if (arg1 > 0) {
        do {
            if ((arg0->unk_00 = func_08804280(arg1 * 4, D_08A490B4)) != NULL) {
                arg0->unk_04 = arg1;
                break;
            }
            arg1 /= 2;
        } while (arg1 > 0);
    }
    return 0;
}
