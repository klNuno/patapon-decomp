#include "common.h"

typedef struct {
    u8 pad_00[0x2C];
    s32 unk_2C;
    u32 unk_30;
    u8 pad_34;
    u8 unk_35;
} S_0880AC0C;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
} E_0880AC0C;

extern u8 D_089F5FA0[];
extern char D_089F603C[];
void __throw(void *, void *, void *);
u32 func_0880ACA8(s32);
u8 func_0880ACF4(s32);
s32 func_0880AD40(s32);
void *func_0880B0D4(E_0880AC0C *, char *);
void func_0880B068(void);

void func_0880AC0C(S_0880AC0C *arg0, s32 arg1) {
    E_0880AC0C e;

    arg0->unk_2C = func_0880AD40(arg1);
    arg0->unk_35 = func_0880ACF4(arg0->unk_2C);
    arg0->unk_30 = func_0880ACA8(arg0->unk_2C);
    if (arg0->unk_30 > 12U || (arg0->unk_35 != 0 && arg0->unk_30 != 1)) {
        __throw(D_089F5FA0, func_0880B0D4(&e, D_089F603C), func_0880B068);
    }
}
