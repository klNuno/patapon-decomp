#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04;
    u8 pad_05[0xEE013];
    u8 unk_EE018;
} T;

extern int func_0880416C(s32);
void func_0890AE44(void *, s16);
void func_0890AFD0(void *, s16);

T *func_0890B034(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (&arg0->unk_04 != NULL) {
            func_0890AE44(&arg0->unk_EE018, 0);
            func_0890AFD0(&arg0->unk_04, 0);
        }
        if (arg1 > 0) {
            func_0880416C((s32)arg0);
        }
    }
    return arg0;
}
