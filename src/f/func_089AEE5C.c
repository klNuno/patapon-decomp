#include "common.h"

extern u8 D_08A48868[];
void func_0880416C(void *);
void func_089B3344(void *, s32);
extern void func_089121B8(void *, s16);

typedef struct {
    u8 pad_00[0x58];
    u8 *unk_58;
    u8 pad_5C[4];
    u8 unk_60[1];
} Obj;

Obj *func_089AEE5C(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_58 = D_08A48868;
        func_089121B8(arg0->unk_60, -1);
        func_089B3344(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
