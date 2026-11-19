#include "common.h"

extern u8 D_08A4440C[];
void func_08806710(void *);

typedef struct {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C;
} T;

T *func_0880B4A4(T *arg0) {
    arg0->unk_00 = D_08A4440C;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    func_08806710(&arg0->unk_1C);
    return arg0;
}
