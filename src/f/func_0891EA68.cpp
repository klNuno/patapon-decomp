#include "common.h"

extern "C" {

typedef struct E1 {
    u8 pad_00[0x1C];
} E1;

typedef struct E2 {
    u8 pad_00[0x50];
} E2;

typedef struct V1 {
    E1 *unk_00;
    u32 unk_04;
} V1;

typedef struct V2 {
    E2 *unk_00;
    u32 unk_04;
} V2;

typedef struct M1 {
    u8 pad_00[0x1C04];
    V1 unk_1C04;
} M1;

typedef struct M2 {
    u8 pad_00[0x2804];
    V2 unk_2804;
} M2;

typedef struct B {
    void *unk_00;
    u8 pad_04[0x7C];
    M2 unk_80;
    u8 pad_284C[0x28D8 - 0x80 - sizeof(M2)];
    M1 unk_28D8;
} B;

typedef struct O {
    void *unk_00;
    u8 pad_04[0x93C];
    B unk_940;
} O;

void func_088AF070(B *, s32);
void func_088D4E74(O *, s32);
void func_0880416C(O *);
extern s32 D_08A46BE8[];
extern s32 D_08A46BD0[];

O *func_0891EA68(O *arg0, s16 arg1) {
    E1 *p;
    V1 *v;
    E2 *q;
    V2 *w;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46BE8;
        if (&arg0->unk_940 != NULL) {
            arg0->unk_940.unk_00 = D_08A46BD0;
            if (&arg0->unk_940.unk_28D8 != NULL) {
                p = arg0->unk_940.unk_28D8.unk_1C04.unk_00;
                v = &arg0->unk_940.unk_28D8.unk_1C04;
                if ((u32)p != (u32)(p + arg0->unk_940.unk_28D8.unk_1C04.unk_04)) {
                    do {
                        p++;
                    } while (p != v->unk_00 + arg0->unk_940.unk_28D8.unk_1C04.unk_04);
                }
                arg0->unk_940.unk_28D8.unk_1C04.unk_04 = 0;
            }
            if (&arg0->unk_940.unk_80 != NULL) {
                q = arg0->unk_940.unk_80.unk_2804.unk_00;
                w = &arg0->unk_940.unk_80.unk_2804;
                if ((u32)q != (u32)(q + arg0->unk_940.unk_80.unk_2804.unk_04)) {
                    do {
                        q++;
                    } while (q != w->unk_00 + arg0->unk_940.unk_80.unk_2804.unk_04);
                }
                arg0->unk_940.unk_80.unk_2804.unk_04 = 0;
            }
            func_088AF070(&arg0->unk_940, 0);
        }
        func_088D4E74(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
