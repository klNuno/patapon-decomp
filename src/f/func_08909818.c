#include "common.h"

void func_0880416C(void *);
extern u8 D_08A468AC[];

typedef struct {
    u8 pad_00[0x28];
    u8 *unk_28;
} S;

S *func_08909818(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A468AC;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
