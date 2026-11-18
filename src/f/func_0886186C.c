#include "common.h"

typedef struct {
    s32 unk_00[4];
} T;

typedef struct {
    u8 pad_00[0x48];
    char unk_48[8];
    s32 unk_50;
} S;

void func_08822B3C(void *, char *);
s32 func_08822BDC(void *, char *, s32);
extern char *D_089F8AD8[];
extern T D_089F8B58[];

void func_0886186C(S *arg0, char *arg1) {
    T t;
    u32 i;

    func_08822B3C(arg0->unk_48, arg1);
    t = D_089F8B58[0];
    for (i = 0; i < 4; i++) {
        if (func_08822BDC(arg1, D_089F8AD8[i], 4) == 0) {
            arg0->unk_50 = t.unk_00[i];
            return;
        }
    }
}
