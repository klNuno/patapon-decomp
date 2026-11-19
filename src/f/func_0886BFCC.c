#include "common.h"
extern s32 func_0886F2FC(s32);
void func_08877424(u8 *);
s32 func_08860820(void *, s32);
extern u8 *D_08AD1F14[];
extern void *D_08A8812C[];

void func_0886BFCC(s32 arg0) {
    func_0886F2FC(arg0);
    func_08877424(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL);
    func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0);
}
