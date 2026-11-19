#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    void *unk_30;
} Obj;

extern u8 D_08A48A60[];
void func_088BA1E8(void *, s32);
void func_0880416C(void *);

Obj *func_089B3830(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_30 = D_08A48A60;
        func_088BA1E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
