#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x4];
    void *unk_08;
    u8 pad_0C[0x8];
    u8 unk_14;
} T;

void func_08804150(void *);
extern void func_0880416C(void *);
void func_0880DCAC(T *, s16);
extern u8 D_08A446F4[];

T *func_0880E1EC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A446F4;
        if (arg0->unk_14 != 0) {
            func_08804150(arg0->unk_08);
        }
        func_0880DCAC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
