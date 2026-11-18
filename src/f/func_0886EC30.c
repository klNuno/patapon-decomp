#include "common.h"

void func_0880416C(void *);
void func_0886E84C(void *, s32);

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} T0886EC30_V;

typedef struct {
    u8 pad_00[0x84];
    T0886EC30_V unk_84;
} T0886EC30_S;

typedef struct {
    u8 pad_00[0x434];
    T0886EC30_S unk_434;
} T0886EC30;

T0886EC30 *func_0886EC30(T0886EC30 *arg0, s16 arg1) {
    s32 *p;
    T0886EC30_V *v;

    if (arg0 != NULL) {
        if (&arg0->unk_434 != NULL) {
            p = arg0->unk_434.unk_84.unk_00;
            v = &arg0->unk_434.unk_84;
            if ((u32)p != (u32)(p + arg0->unk_434.unk_84.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_434.unk_84.unk_04);
            }
            arg0->unk_434.unk_84.unk_04 = 0;
        }
        if (arg0 != NULL) {
            func_0886E84C(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
