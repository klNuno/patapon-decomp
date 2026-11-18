#include "common.h"

extern u8 D_08A473F4[];
extern u8 D_08A47404[];

typedef struct Obj_089406E0 {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x188];
    u8 unk_194[4];
} Obj_089406E0;

void func_0880416C(void *);
void func_08940768(void *);

Obj_089406E0 *func_089406E0(Obj_089406E0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_194 != NULL) {
            func_08940768(arg0->unk_194);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A47404;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A473F4;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
