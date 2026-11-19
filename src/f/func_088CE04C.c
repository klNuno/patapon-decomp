#include "common.h"

void func_0880416C(void *);
void func_088804C0(void *, s32);
void func_0888065C(void *);
extern u8 D_08A45350[];
extern u8 D_08A46048[];

typedef struct {
    u8 pad_00[0x24];
    void *unk_24, *unk_28;
} S;

void *func_088CE04C(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A46048;
        if (arg0 != NULL) {
            arg0->unk_24 = D_08A45350;
            func_0888065C(arg0);
            func_088804C0(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
