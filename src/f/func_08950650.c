#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x100];
    u8 unk_110[0x100];
    u8 unk_210[0x100];
} T;

void func_0880416C(void *);
void *func_0887DAB8(void *, s16);

T *func_08950650(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0887DAB8(arg0->unk_210, -1);
        func_0887DAB8(arg0->unk_110, -1);
        func_0887DAB8(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
