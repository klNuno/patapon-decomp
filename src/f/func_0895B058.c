#include "common.h"

typedef struct {
    u8 pad_00[0x08];
    void *unk_08;
} Obj;

void func_0880416C(void *);
void func_0895EFE4(void *, s32);
extern u8 D_08A47974[];

Obj *func_0895B058(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47974;
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
