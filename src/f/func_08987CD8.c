#include "common.h"

typedef struct {
    u8 pad_00[0x08];
    void *unk_08;
} Obj;

extern u8 D_08A48268[];
void func_08980154(void *, s32);
void func_0880416C(void *);

Obj *func_08987CD8(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48268;
        func_08980154(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
