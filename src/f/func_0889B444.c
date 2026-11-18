#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V0889B444;

typedef struct {
    u8 pad_00[0x24];
    V0889B444 unk_24;
} S0889B444;

typedef struct {
    void *unk_00;
    S0889B444 unk_04;
} T0889B444;

extern u8 D_08A458F8[];
extern u8 D_08A45908[];

void func_0880416C(void *);

T0889B444 *func_0889B444(T0889B444 *arg0, s16 arg1) {
    s32 *p;
    V0889B444 *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A458F8;
        if (&arg0->unk_04 != NULL) {
            v = &arg0->unk_04.unk_24;
            p = arg0->unk_04.unk_24.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_04.unk_24.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_04.unk_24.unk_04);
            }
            arg0->unk_04.unk_24.unk_04 = 0;
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A45908;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
