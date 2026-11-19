#include "common.h"

typedef struct {
    u8 pad_00[0xA8];
    u8 unk_A8[1];
} T088C00E0;

void func_088C019C(T088C00E0 *);
void func_088BF92C(void *, s16);
void func_0880416C(void *);

T088C00E0 *func_088C0084(T088C00E0 *arg0, s16 arg1) {
    if (arg0 != 0) {
        func_088C019C(arg0);
        func_088BF92C(arg0->unk_A8, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
