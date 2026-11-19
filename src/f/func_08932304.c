#include "common.h"

typedef struct N {
    u8 pad_00[0x1C];
    u8 *unk_1C;
} N;

extern u8 D_08A4535C[];
void func_08880160(N *);
void func_0880416C(void *);

N *func_08932304(N *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A4535C;
            func_08880160(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
