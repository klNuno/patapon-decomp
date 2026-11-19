#include "common.h"

typedef struct {
    s32 unk_00;
} E1_0897F240;

typedef struct {
    u8 pad_00[0x200];
} E2_0897F240;

typedef struct {
    E1_0897F240 *unk_00;
    s32 unk_04;
} V1_0897F240;

typedef struct {
    E2_0897F240 *unk_00;
    s32 unk_04;
} V2_0897F240;

typedef struct {
    u8 pad_00[0x10010];
    V2_0897F240 unk_10010;
    u8 unk_10018[0x210];
    V1_0897F240 unk_10228;
    void *unk_10230;
} A_0897F240;

void func_0880416C(void *);
extern u8 D_08A480E4[];

A_0897F240 *func_0897F240(A_0897F240 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_10230 = D_08A480E4;
        if (arg0->unk_10018 != NULL) {
            E1_0897F240 *p = arg0->unk_10228.unk_00;
            V1_0897F240 *vp = &arg0->unk_10228;
            E1_0897F240 *base = *(E1_0897F240 *volatile *)(u32)vp;
            if ((u32)p != (u32)(base + arg0->unk_10228.unk_04)) {
                s32 *sp = &arg0->unk_10228.unk_04;
                do {
                    p++;
                } while (p != base + *sp);
            }
            arg0->unk_10228.unk_04 = 0;
        }
        if (arg0 != NULL) {
            E2_0897F240 *p = arg0->unk_10010.unk_00;
            V2_0897F240 *vp = &arg0->unk_10010;
            E2_0897F240 *base = *(E2_0897F240 *volatile *)(u32)vp;
            if ((u32)p != (u32)(base + arg0->unk_10010.unk_04)) {
                s32 *sp = &arg0->unk_10010.unk_04;
                do {
                    p++;
                } while (p != base + *sp);
            }
            arg0->unk_10010.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
