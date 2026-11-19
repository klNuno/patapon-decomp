#include "common.h"

extern void func_0880416C(void *);
extern void func_0893C5C8(void *);
extern u8 D_08A472F4[];
typedef struct {
    u8 pad_00[0x40];
    u8 *unk_40;
} T;

T *func_0893C570(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_40 = D_08A472F4;
        func_0893C5C8(arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
