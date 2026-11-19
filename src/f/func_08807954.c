#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x18];
    u8 unk_1C;
} Unk;

extern u8 D_08A4440C[];
extern void func_0880644C(void *, s16);
extern void func_0880416C(void *);

Unk *func_08807954(Unk *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A4440C;
        func_0880644C(&arg0->unk_1C, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        } else {
            return arg0;
        }
    }
    return arg0;
}
