#include "common.h"

void func_0880416C(void *);
void func_0886E92C(void *);
extern u8 D_08A44FCC[];
extern u8 D_08A44FDC[];

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x414];
    u8 unk_420[4];
} Obj_0886E8A4;

Obj_0886E8A4 *func_0886E8A4(Obj_0886E8A4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_420 != NULL) {
            func_0886E92C(arg0->unk_420);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A44FDC;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A44FCC;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
