#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    void *unk_18;
} U;

typedef struct {
    u8 pad_00[4];
    U unk_04;
} T;

void func_0880416C(void *);
void func_0885DE4C(void *);
extern u8 D_08A44AD8[];

T *func_088D3298(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        U *temp = &arg0->unk_04;

        if (temp != NULL) {
            arg0->unk_04.unk_18 = D_08A44AD8;
            func_0885DE4C(temp);
            arg0->unk_04.unk_0C = 0;
            arg0->unk_04.unk_14 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
