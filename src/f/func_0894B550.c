#include "common.h"

void func_0880416C(void *);
extern u8 D_08A47798[];
extern u8 D_08A477CC[];

typedef struct {
    u8 *unk_00;
} T;

void func_0894B5C8(T *);

T *func_0894B550(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47798;
        func_0894B5C8(arg0);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A477CC;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
