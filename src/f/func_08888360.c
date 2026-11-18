#include "common.h"

void func_0880416C(void *);
void func_08860DF0(void *);
extern u8 D_08A44B14[];
extern u8 D_08A45484[];

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x68];
    u8 unk_74[4];
} Obj_08888360;

Obj_08888360 *func_08888360(Obj_08888360 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_74 != NULL) {
            func_08860DF0(arg0->unk_74);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A45484;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A44B14;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
