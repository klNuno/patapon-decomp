#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x14];
    u8 unk_18[1];
} A_088A95AC;

void func_0880416C(void *);
void func_089458C8(void *, s32);
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A45BF0[];
extern u8 D_08A45C0C[];

A_088A95AC *func_088A95AC(A_088A95AC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A45BF0;
        func_089458C8(arg0->unk_18, -1);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A45C0C;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A45598;
                if (arg0 != NULL) {
                    arg0->unk_00 = D_08A4489C;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
