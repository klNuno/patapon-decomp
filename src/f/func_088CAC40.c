#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20[2];
    s32 unk_28[2];
    s32 unk_30[2];
    s32 unk_38[2];
} T_088CAC40;

extern u8 D_089FB8B8[];
void func_088CBF40(void *, s32);
s32 func_088CAF74(T_088CAC40 *, T_088CAC40 *);
void func_088CB57C(s32, T_088CAC40 *);
void sceKernelDcacheWritebackAll(void);

s32 func_088CAC40(T_088CAC40 *arg0) {
    T_088CAC40 copy;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0->unk_0C & 0x40000000) {
        arg0->unk_18++;
        return !((arg0->unk_0C & 0x80000000) != 0);
    }
    arg0->unk_0C |= 0x40000000;
    arg0->unk_0C |= 0x80000000;
    D_089FB8B8[0] = 1;
    copy = *arg0;
    func_088CBF40(arg0->unk_20, (s32)arg0);
    func_088CBF40(arg0->unk_28, (s32)arg0);
    func_088CBF40(arg0->unk_30, (s32)arg0);
    func_088CBF40(arg0->unk_38, (s32)arg0);
    if (func_088CAF74(arg0, &copy) == 0) {
        return 0;
    }
    arg0->unk_18++;
    func_088CB57C(arg0->unk_10, arg0);
    arg0->unk_0C &= 0x7FFFFFFF;
    sceKernelDcacheWritebackAll();
    return 1;
}
