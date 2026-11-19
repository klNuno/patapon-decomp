#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    u8 *unk_28;
    u8 pad_2C[0x94];
    u8 unk_C0;
    u8 pad_C1[0x4F];
    u8 unk_110;
} T;

extern void func_0880416C(void *);
extern void func_08865F78(void *, s32);
extern int func_089458C8(s32, s32);
void func_0892086C(T *, s16);
extern u8 D_08A46C84[];

T *func_0892052C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A46C84;
        func_08865F78(&arg0->unk_110, -1);
        func_089458C8((s32)&arg0->unk_C0, -1);
        func_0892086C(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
