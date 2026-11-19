#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
} T;

extern u8 D_08A4721C[];
void func_0880416C(void *);
void func_08909818(void *, s32);

T *func_089390C0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A4721C;
        func_08909818(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
