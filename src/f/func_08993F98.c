#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *volatile unk_10;
} Obj;

void func_0880416C(void *);
extern u8 D_08A48598[];
extern u8 D_08A44A3C[];

Obj *func_08993F98(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_10 = D_08A48598;
        if (arg0 != NULL) {
            arg0->unk_10 = D_08A44A3C;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
