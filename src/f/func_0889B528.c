#include "common.h"

typedef struct T0889B528_V {
    s32 *unk_00;
    s32 unk_04;
} T0889B528_V;

typedef struct T0889B528_M {
    u8 pad_00[0x24];
    T0889B528_V unk_24;
} T0889B528_M;

typedef struct T0889B528_B {
    void *unk_00;
} T0889B528_B;

typedef struct T0889B528_C {
    T0889B528_B unk_00;
    T0889B528_M unk_04;
} T0889B528_C;

typedef struct T0889B528_S {
    T0889B528_C unk_00;
} T0889B528_S;

extern u8 D_08A458E8[];
extern u8 D_08A458F8[];
extern u8 D_08A45908[];
void func_0880416C(void *);

T0889B528_S *func_0889B528(T0889B528_S *arg0, s16 arg1) {
    s32 *p;
    T0889B528_V *v;

    if (arg0 != NULL) {
        arg0->unk_00.unk_00.unk_00 = D_08A458E8;
        if (&arg0->unk_00 != NULL) {
            arg0->unk_00.unk_00.unk_00 = D_08A458F8;
            if (&arg0->unk_00.unk_04 != NULL) {
                v = &arg0->unk_00.unk_04.unk_24;
                p = arg0->unk_00.unk_04.unk_24.unk_00;
                if ((u32)p != (u32)(p + arg0->unk_00.unk_04.unk_24.unk_04)) {
                    do {
                        p++;
                    } while (p != v->unk_00 + arg0->unk_00.unk_04.unk_24.unk_04);
                }
                arg0->unk_00.unk_04.unk_24.unk_04 = 0;
            }
            if (&arg0->unk_00.unk_00 != NULL) {
                arg0->unk_00.unk_00.unk_00 = D_08A45908;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
