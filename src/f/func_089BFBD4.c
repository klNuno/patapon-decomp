#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[0x32C];
    u8 unk_340[0x980];
} S;

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
extern void func_088D6DAC(void *, s32);
void func_089BD6F8(void);

S *func_089BFBD4(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        u8 *temp = arg0->unk_340;
        if (temp != NULL) {
            func_08804000(temp, (void (*)(void *, s32))func_089BD6F8, 0x4C, 0x20);
        }
        func_088D6DAC(arg0->unk_14, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
