#include "common.h"

void func_0880416C(void *);
void func_08809124(s32 *);
s32 func_088092B4(s32, s32);
s32 func_088092BC(s32);
s32 func_088092C4(s32);

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x2];
    s32 *unk_04;
} S_08809224;

S_08809224 *func_08809224(S_08809224 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (func_088092C4(*arg0->unk_04) == 0 && func_088092B4(func_088092BC(*arg0->unk_04), 0x2000) != 0 && arg0->unk_01 == 0) {
            func_08809124(arg0->unk_04);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
