#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x1C];
} E1_0891E928;

typedef struct {
    E1_0891E928 *unk_00;
    s32 unk_04;
} V1_0891E928;

typedef struct {
    u8 pad_00[0x50];
} E2_0891E928;

typedef struct {
    E2_0891E928 *unk_00;
    s32 unk_04;
} V2_0891E928;

typedef struct {
    u8 pad_00[0x2804];
    V2_0891E928 unk_2804;
    u8 pad_280C[0x4C];
} M2_0891E928;

typedef struct {
    u8 pad_00[0x1C04];
    V1_0891E928 unk_1C04;
} M1_0891E928;

typedef struct {
    void *unk_00;
    u8 pad_04[0x7C];
    M2_0891E928 unk_80;
    M1_0891E928 unk_28D8;
} O_0891E928;

extern u8 D_08A46BD0[];
void func_0880416C(void *);
void func_088AF070(void *, s32);

O_0891E928 *func_0891E928(O_0891E928 *arg0, s16 arg1) {
    E1_0891E928 *p;
    V1_0891E928 *v;
    E2_0891E928 *q;
    V2_0891E928 *w;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46BD0;
        if (&arg0->unk_28D8 != NULL) {
            p = arg0->unk_28D8.unk_1C04.unk_00;
            v = &arg0->unk_28D8.unk_1C04;
            if ((u32)p != (u32)(p + arg0->unk_28D8.unk_1C04.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_28D8.unk_1C04.unk_04);
            }
            arg0->unk_28D8.unk_1C04.unk_04 = 0;
        }
        if (&arg0->unk_80 != NULL) {
            q = arg0->unk_80.unk_2804.unk_00;
            w = &arg0->unk_80.unk_2804;
            if ((u32)q != (u32)(q + arg0->unk_80.unk_2804.unk_04)) {
                do {
                    q++;
                } while (q != w->unk_00 + arg0->unk_80.unk_2804.unk_04);
            }
            arg0->unk_80.unk_2804.unk_04 = 0;
        }
        func_088AF070(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
