#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x2C];
    s32 unk_2C;
    u8 pad_30[0x13C];
    u8 unk_16C;
    u8 pad_16D[0x27];
    u8 unk_194[0xEC];
    u8 unk_280[0xEC];
    u8 unk_36C[0x4];
} T0895E860;

s32 func_0886095C(void);
u8 func_08863E94(s32, s32);
s32 func_0895C054(void *);
s32 func_0895C9DC(void *);
s32 func_0895D0F4(void *);
void func_0895D17C(void *, s32);
void func_0895D184(void *, s32);

static inline bool h_0895E860(T0895E860 *arg0) {
    s32 id = arg0->unk_2C;
    if (id < 0) {
        return 0;
    }
    return func_08863E94(func_0886095C(), id) == 0;
}

s32 func_0895E860(T0895E860 *arg0) {
    if (arg0->unk_16C) {
        if ((!func_0895C9DC(arg0->unk_194) && !func_0895C054(arg0->unk_280) && func_0895D0F4(arg0->unk_36C)) || h_0895E860(arg0)) {
            func_0895D184(arg0->unk_36C, 8);
            func_0895D17C(arg0->unk_36C, 1);
            return 1;
        }
    } else {
        if ((!func_0895C9DC(arg0->unk_194) && func_0895D0F4(arg0->unk_36C)) || h_0895E860(arg0)) {
            func_0895D184(arg0->unk_36C, 8);
            func_0895D17C(arg0->unk_36C, 1);
            return 1;
        }
    }
    return 0;
}

}
