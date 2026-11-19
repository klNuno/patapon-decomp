#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} T;

extern void func_0880416C(void *);
extern void func_089C32B4(s32, T *);
extern u8 D_08A48CD4[];

T *func_089C3244(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 temp;
        arg0->unk_1C = D_08A48CD4;
        temp = arg0->unk_0C;
        if (temp != 0) {
            func_089C32B4(temp, arg0);
        }
        arg0->unk_0C = 0;
        arg0->unk_04 = 0;
        arg0->unk_00 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
