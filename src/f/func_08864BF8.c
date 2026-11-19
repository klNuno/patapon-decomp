#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    void **unk_54;
} E08864BF8;

typedef struct {
    u8 pad_00[0x90];
    E08864BF8 unk_90;
    u8 pad_E8[0x18];
    void **unk_100;
} T08864BF8;

extern void *D_08A44B3C[];
extern void *D_08A44B58[];
void func_0880416C(void *);

T08864BF8 *func_08864BF8(T08864BF8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        E08864BF8 *p;

        arg0->unk_100 = D_08A44B3C;
        p = &arg0->unk_90;
        if (p != NULL) {
            arg0->unk_90.unk_54 = D_08A44B58;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
