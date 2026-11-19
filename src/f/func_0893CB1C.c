#include "common.h"
extern void *D_08AD1E28[];
void func_0893CD18(void *);
extern s32 func_0886F32C(s32);
void func_0886891C(void *, s32);

void func_0893CB1C(u8 *arg0) {
    func_0893CD18(arg0 + 0x1514);
    func_0886F32C((s32)arg0);
    func_0886891C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 9);
}
