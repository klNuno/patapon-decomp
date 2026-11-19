#include "common.h"

void func_0880416C(void *);
extern u8 D_08A48AC0[];
extern u8 D_08A46A0C[];

typedef struct {
    u8 *unk_00;
} T;

void func_089B5658(T *);

T *func_089B55EC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A48AC0;
        func_089B5658(arg0);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A46A0C;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
