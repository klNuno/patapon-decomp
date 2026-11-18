#include "common.h"

typedef struct {
    u8 *unk_00;
} B_088FD6A8;

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x50];
    B_088FD6A8 unk_54;
} A_088FD6A8;

void func_0880416C(void *);
extern u8 D_08A4489C[];
extern u8 D_08A4685C[];
extern u8 D_08A46874[];
extern u8 D_08A46884[];
extern u8 D_08A46894[];

A_088FD6A8 *func_088FD6A8(A_088FD6A8 *arg0, s16 arg1) {
    B_088FD6A8 *p;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A4685C;
        p = &arg0->unk_54;
        if (p != NULL) {
            arg0->unk_54.unk_00 = D_08A46874;
            if (p != NULL) {
                arg0->unk_54.unk_00 = D_08A46884;
            }
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A46894;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A4489C;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
