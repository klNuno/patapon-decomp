#include "common.h"

typedef struct {
    void *volatile unk_00;
} S;

extern u8 D_08A474E4[];
extern u8 D_08A47500[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];
void func_0880416C(void *);

S *func_08942764(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A474E4;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A47500;
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
