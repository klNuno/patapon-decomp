#include "common.h"

typedef struct {
    s32 unk_00;
} S_08868E8C_C;

typedef struct {
    u8 pad_00[0xE8];
    S_08868E8C_C *unk_E8;
} S_08868E8C_B;

s32 func_08822AD0(s32, char *);
void *func_0896CE18(void *, s32, s32, s32);
void func_0896D1F8(void *, char *, s32);
extern s32 D_089F8DB4[];
extern s32 D_089F8EDC[];
extern char D_089F8F2C[];

s32 func_08868E8C(u8 *arg0, s32 arg1, s32 arg2) {
    void *h;
    S_08868E8C_B *r;

    func_08822AD0(arg2, D_089F8F2C);
    h = func_0896CE18(arg0 + 0xEA8D0, D_089F8DB4[0], 0, 1);
    if (arg1 != 0xF) {
        h = func_0896CE18(h, D_089F8EDC[arg1], 0, 1);
    }
    r = func_0896CE18(h, arg2, 1, 0);
    if (r == NULL) {
        func_0896D1F8(h, D_089F8F2C, 0);
        return 0;
    }
    return r->unk_E8->unk_00 + 0x108;
}
