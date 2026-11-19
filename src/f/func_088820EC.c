#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x10];
    void *unk_1C;
    s32 unk_20;
} T;

void func_0880416C(void *);
void func_088816E4(void *);
extern u8 D_08A4536C[];
extern u8 D_08A4537C[];

T *func_088820EC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_1C = D_08A4536C;
        arg0->unk_20 = 0;
        arg0->unk_08 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A4537C;
            func_088816E4(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
