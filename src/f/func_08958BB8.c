#include "common.h"

typedef struct T08958BB8_V {
    s32 *unk_00;
    s32 unk_04;
} T08958BB8_V;

typedef struct T08958BB8_M {
    u8 pad_00[0x44];
    T08958BB8_V unk_44;
} T08958BB8_M;

typedef struct T08958BB8_B {
    void *unk_00;
} T08958BB8_B;

typedef struct T08958BB8_S {
    T08958BB8_B unk_00;
    u8 pad_04[0x8];
    T08958BB8_M unk_0C;
} T08958BB8_S;

extern u8 D_08A45194[];
extern u8 D_08A47910[];
void func_0880416C(void *);
void func_08958D74(T08958BB8_S *);

T08958BB8_S *func_08958BB8(T08958BB8_S *arg0, s16 arg1) {
    s32 *p;
    T08958BB8_V *v;

    if (arg0 != NULL) {
        arg0->unk_00.unk_00 = D_08A47910;
        func_08958D74(arg0);
        if (&arg0->unk_0C != NULL) {
            v = &arg0->unk_0C.unk_44;
            p = arg0->unk_0C.unk_44.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_0C.unk_44.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_0C.unk_44.unk_04);
            }
            arg0->unk_0C.unk_44.unk_04 = 0;
        }
        if (&arg0->unk_00 != NULL) {
            arg0->unk_00.unk_00 = D_08A45194;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
