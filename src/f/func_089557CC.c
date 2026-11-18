#include "common.h"

extern u8 *D_08AD1F14[];
extern char D_08A04B84[];
void func_0897B950(void *);
s32 func_0887744C(u8 *, char *, s32);
void func_08958DD8(void *, s32, s32);
void func_08955B14(void *);
void func_089507D0(void *);
void func_0895587C(void *);

void func_089557CC(u8 *arg0, s32 arg1, s32 arg2, char *arg3) {
    func_0897B950(arg0 + 0x50);
    func_08958DD8(arg0 + 0xAAC, 0, func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A04B84, 0xF));
    func_08958DD8(arg0 + 0xAAC, 1, func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, arg3, 0xF));
    func_08955B14(arg0);
    func_089507D0(arg0 + 0x1D50);
    func_0895587C(arg0);
}
