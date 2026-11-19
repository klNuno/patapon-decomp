#include "common.h"

typedef struct {
    u8 pad_00[8];
    void **unk_08;
} T089354F8;

extern void *D_08A470E0[];
extern void *D_08A470F0[];
void func_0880416C(void *);

T089354F8 *func_089354F8(T089354F8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A470E0;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A470F0;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
