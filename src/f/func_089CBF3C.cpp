#include "common.h"

extern "C" {

extern void func_0886891C(void *, s32);
extern void *D_08AD1E28[];
void func_0886F32C(void);

void func_089CBF3C(void) {
    func_0886F32C();
    void *temp = D_08AD1E28[0];
    func_0886891C(temp != NULL ? temp : NULL, 0xC);
}

}
