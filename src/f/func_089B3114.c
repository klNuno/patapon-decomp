#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
} Obj;

void func_0880416C(void *);
void func_089B18B4(void *, s16);
extern u8 D_08A489F8[];

Obj *func_089B3114(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_58 = D_08A489F8;
        func_089B18B4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
