#include "common.h"

void func_0880416C(void *);
void func_0891AF48(void *);
extern u8 D_08A46B70[];
extern u8 D_08A46B80[];

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x214];
    u8 unk_220[4];
} Obj_0891AEC0;

Obj_0891AEC0 *func_0891AEC0(Obj_0891AEC0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_220 != NULL) {
            func_0891AF48(arg0->unk_220);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A46B80;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A46B70;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
