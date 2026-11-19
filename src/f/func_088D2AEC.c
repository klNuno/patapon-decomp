#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} Obj;

extern u8 D_08A461C0[];
void func_088D1ADC(void *, s32);
void func_0880416C(void *);

Obj *func_088D2AEC(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_24 = D_08A461C0;
        func_088D1ADC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
