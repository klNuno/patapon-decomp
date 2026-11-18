#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} M;

typedef struct {
    u8 pad_00[0x1EB8];
    M unk_1EB8;
    M unk_1EE0;
} S0;

extern u8 D_08A473D8[];

void func_0880416C(void *);
void func_0893FD00(M *, s32);
void func_0893FD70(M *);
void func_0893FF34(S0 *);

S0 *func_0893FE8C(S0 *arg0, s16 arg1) {
    M *p;

    if (arg0 != NULL) {
        p = &arg0->unk_1EE0;
        if (p != NULL) {
            arg0->unk_1EE0.unk_24 = D_08A473D8;
            func_0893FD70(p);
            func_0893FD00(&arg0->unk_1EE0, -1);
        }
        p = &arg0->unk_1EB8;
        if (p != NULL) {
            arg0->unk_1EB8.unk_24 = D_08A473D8;
            func_0893FD70(p);
            func_0893FD00(&arg0->unk_1EB8, -1);
        }
        if (arg0 != NULL) {
            func_0893FF34(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
