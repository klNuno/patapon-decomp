#include "common.h"

extern void func_088D6DAC(void *, s32);
void func_0880416C(void *);
void func_088A43C4(void *, s32);

typedef struct {
    u8 pad_00[0x18];
    u8 unk_18[0x52C];
    u8 unk_544[1];
} T088793F0;

T088793F0 *func_088793F0(T088793F0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088D6DAC(arg0->unk_544, -1);
        func_088A43C4(arg0->unk_18, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
