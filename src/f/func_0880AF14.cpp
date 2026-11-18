#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x2C];
    s32 unk_2C;
    u32 unk_30;
    u8 pad_34[0x4];
    u8 unk_38;
} S_0880AF14;

typedef struct {
    u8 pad_00[0xC];
} E_0880AF14;

void __throw(void *, void *, void *);
s32 func_0880B048(s32);
u8 func_0880AFFC(s32);
u32 func_0880AFB0(s32);
void *func_0880B0D4(E_0880AF14 *, char *);
void func_0880B068(void);
extern char D_089F603C[];
extern u8 D_089F5FA0[];

void func_0880AF14(S_0880AF14 *arg0, s32 arg1) {
    E_0880AF14 e;

    arg0->unk_2C = func_0880B048(arg1);
    arg0->unk_38 = func_0880AFFC(arg0->unk_2C);
    arg0->unk_30 = func_0880AFB0(arg0->unk_2C);
    if (arg0->unk_30 > 12U || (arg0->unk_38 != 0 && arg0->unk_30 != 4)) {
        __throw(D_089F5FA0, func_0880B0D4(&e, D_089F603C), (void *)func_0880B068);
    }
}

}
