#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    void *unk_30;
    u8 pad_34[0x3C];
    u8 unk_70[0x130];
    u8 unk_1A0[1];
} T088B9290;

extern u8 D_08A45DC8[];
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08865F78(void *, s32);
void func_088BA1E8(void *, s32);
void func_0880416C(void *);

T088B9290 *func_088B9290(T088B9290 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_30 = D_08A45DC8;
        if (arg0->unk_1A0 != NULL) {
            func_08804000(arg0->unk_1A0, func_08865F78, 0x90, 2);
        }
        if (arg0->unk_70 != NULL) {
            func_08804000(arg0->unk_70, func_08865F78, 0x90, 2);
        }
        func_088BA1E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
