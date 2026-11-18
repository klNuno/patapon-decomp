#include "common.h"

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    s32 unk_08;
    struct L *unk_0C;
} N;

typedef struct L {
    u8 pad_00[0x20];
    s32 unk_20;
} L;

void func_08880530(L *, N *);

void func_08880160(N *arg0) {
    L *l;
    L *l2;
    s32 f;
    s32 f2;

    l = arg0->unk_0C;
    if (l != NULL) {
        if ((N *)l != arg0) {
            f = 0;
            if (arg0->unk_00 != NULL) {
                arg0->unk_00->unk_04 = arg0->unk_04;
                f = 1;
            }
            if (arg0->unk_04 != NULL) {
                arg0->unk_04->unk_00 = arg0->unk_00;
                f = 1;
            }
            arg0->unk_0C = NULL;
            l2 = arg0->unk_0C;
            if (l2 != NULL) {
                if ((N *)l2 != arg0) {
                    f2 = 0;
                    if (arg0->unk_00 != NULL) {
                        arg0->unk_00->unk_04 = arg0->unk_04;
                        f2 = 1;
                    }
                    if (arg0->unk_04 != NULL) {
                        arg0->unk_04->unk_00 = arg0->unk_00;
                        f2 = 1;
                    }
                    arg0->unk_0C = NULL;
                    if (arg0->unk_0C != NULL) {
                        func_08880530(arg0->unk_0C, arg0);
                    }
                    arg0->unk_0C = NULL;
                    arg0->unk_04 = NULL;
                    arg0->unk_00 = NULL;
                    if (f2) {
                        l2->unk_20--;
                    }
                }
            }
            arg0->unk_0C = NULL;
            arg0->unk_04 = NULL;
            arg0->unk_00 = NULL;
            if (f) {
                l->unk_20--;
            }
        }
    }
    arg0->unk_0C = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
}
