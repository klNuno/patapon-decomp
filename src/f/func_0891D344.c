#include "common.h"

void func_0880416C(void *);
void func_0891D3CC(void *);
extern u8 D_08A46BB0[];
extern u8 D_08A46BC0[];

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x214];
    u8 unk_220[4];
} Obj_0891D344;

Obj_0891D344 *func_0891D344(Obj_0891D344 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_220 != NULL) {
            func_0891D3CC(arg0->unk_220);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A46BC0;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A46BB0;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
