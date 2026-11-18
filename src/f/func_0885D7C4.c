#include "common.h"

typedef struct S {
    u8 pad_00[0x40];
    struct S *unk_40;
    struct S *unk_44;
    struct S *unk_48;
} S;

s32 func_0885D7C4(S *arg0) {
    S *p;
    S *n;

    if (arg0->unk_40 == NULL) {
        return 1;
    }
    p = arg0->unk_40->unk_44;
    if (p == arg0) {
        arg0->unk_40->unk_44 = arg0->unk_48;
        arg0->unk_40 = NULL;
        arg0->unk_48 = NULL;
        return 1;
    }
    if (p != NULL) {
        while (p->unk_48 != NULL) {
            n = p->unk_48;
            if (n == arg0) {
                p->unk_48 = arg0->unk_48;
                arg0->unk_40 = NULL;
                arg0->unk_48 = NULL;
                return 1;
            }
            p = n;
        }
    }
    return 0;
}
