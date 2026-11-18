#include "common.h"

typedef struct {
    u8 pad_00[0x1F4];
    void *unk_1F4;
    u8 unk_1F8[4];
    void *unk_1FC;
} Obj_08961740;

void func_0880416C(Obj_08961740 *);
void func_088F58F0(Obj_08961740 *, s32);
extern u8 D_08A47A20[];
extern u8 D_08A47A2C[];
extern u8 D_08A47A38[];

Obj_08961740 *func_08961740(Obj_08961740 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_1F4 = D_08A47A20;
        arg0->unk_1FC = D_08A47A2C;
        if (arg0->unk_1F8 != NULL) {
            arg0->unk_1FC = D_08A47A38;
        }
        func_088F58F0(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
