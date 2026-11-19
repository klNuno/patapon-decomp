#include "common.h"

typedef struct {
    u8 pad_00[0x44];
    u8 *unk_44;
} T;

extern u8 D_08A469B8[];
void func_0880416C(void *);

T *func_089136C0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_44 = D_08A469B8;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
