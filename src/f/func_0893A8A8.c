#include "common.h"

void func_0880416C(void *);
void func_0893A930(void *);
extern u8 D_08A47258[];
extern u8 D_08A47268[];

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x2014];
    u8 unk_2020[4];
} Obj_0893A8A8;

Obj_0893A8A8 *func_0893A8A8(Obj_0893A8A8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_2020 != NULL) {
            func_0893A930(arg0->unk_2020);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A47268;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A47258;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
