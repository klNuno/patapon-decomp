#include "common.h"
extern "C" {
extern void *D_08AD1E28[];
extern void func_0886891C(void *, s32);
extern s32 func_0886F32C(s32);
void func_089D6F30(s32 arg0) {
    func_0886F32C(arg0);
    func_0886891C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 0xD);
}
}
