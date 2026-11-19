#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
} Unk_08931AD0;

extern u8 D_08A47048[];
void func_0880416C(void *);
void func_088CE530(void *, s32);
void func_08931B34(Unk_08931AD0 *);

Unk_08931AD0 *func_08931AD0(Unk_08931AD0 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A47048;
        func_08931B34(arg0);
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
