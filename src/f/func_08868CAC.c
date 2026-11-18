#include "common.h"

typedef struct {
    u8 pad_00[0xE8];
    void *unk_E8;
} S_08868CAC_C;

typedef struct {
    S_08868CAC_C *unk_00;
} S_08868CAC_B;

typedef struct {
    u8 pad_00[0xE8];
    S_08868CAC_B *unk_E8;
} S_08868CAC_A;

void *func_0896CE18(void *, s32, s32, s32);
void func_0896D1F8(void *, char *, s32);
extern s32 D_089F8DAC[];
extern s32 D_089F8EDC[];
extern char D_089F8F2C[];

void *func_08868CAC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *h;
    S_08868CAC_A *r;
    void *p;

    h = func_0896CE18(arg0 + 0xEA8D0, D_089F8DAC[0], 0, 1);
    if (arg1 != 0xF) {
        h = func_0896CE18(h, D_089F8EDC[arg1], 0, 1);
    }
    r = func_0896CE18(h, arg2, 1, 0);
    if (r == NULL) {
        if (arg3 != 0) {
            func_0896D1F8(h, D_089F8F2C, 0);
            return NULL;
        }
        return NULL;
    }
    p = r->unk_E8->unk_00->unk_E8;
    return p != NULL ? p : NULL;
}
