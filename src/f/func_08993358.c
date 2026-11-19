#include "common.h"

extern u8 D_08A4857C[];
void func_0880416C(void *);
extern void func_08864BF8(void *, s16);
extern void func_089969A8(void *, s16);

typedef struct {
    u8 pad_00[0x100];
    u8 *unk_100;
    u8 pad_104[0xC];
    u8 unk_110[1];
} Obj;

Obj *func_08993358(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_100 = D_08A4857C;
        func_089969A8(arg0->unk_110, -1);
        func_08864BF8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
