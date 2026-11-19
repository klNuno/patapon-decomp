#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    u8 *unk_1C;
} S088CE0C0;

extern void func_0880416C(void *);
void func_08880160(S088CE0C0 *);
extern u8 D_08A4535C[];

void *func_088824D0(S088CE0C0 *arg0, s16 arg1) {
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
