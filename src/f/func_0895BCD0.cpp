#include "common.h"

extern "C" {

struct A_0895BCD0 {
    virtual void *v08(s32, s32);
};

typedef struct {
    u8 pad_00[0x5C];
    void **unk_5C;
    u32 unk_60;
    u8 pad_64[0xA8 - 0x64];
    s32 *unk_A8;
    u32 unk_AC;
    A_0895BCD0 *unk_B0;
    s32 unk_B4;
    s32 unk_B8;
    u8 pad_BC[0xC4 - 0xBC];
    s32 unk_C4;
    u32 unk_C8;
    u8 pad_CC[0xD8 - 0xCC];
    s32 unk_D8;
    s32 unk_DC;
    s32 unk_E0;
} O_0895BCD0;

extern char D_08A04CF8[];
extern s32 D_08A04CF4[];
s32 sceKernelCreateEventFlag(const char *, s32, s32, void *);
s32 sceMpegAvcQueryYCbCrSize(s32, s32, s32, s32, s32 *);
s32 sceMpegAvcInitYCbCr(s32, s32, s32, s32, void *);

s32 func_0895BCD0(O_0895BCD0 *arg0, A_0895BCD0 *arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 size;
    u32 i;
    void *p;
    void **pp;
    s32 *pq;

    arg0->unk_B0 = arg1;
    arg0->unk_B8 = arg2;
    arg0->unk_C8 = arg3;
    arg0->unk_B4 = arg7;
    arg0->unk_D8 = arg4;
    arg0->unk_DC = arg5;
    arg0->unk_E0 = arg6;
    arg0->unk_C4 = sceKernelCreateEventFlag(D_08A04CF8, 0x200, 0, NULL);
    size = 0;
    sceMpegAvcQueryYCbCrSize(arg2, 1, arg0->unk_D8, arg0->unk_DC, &size);
    for (i = 0; i < arg0->unk_C8; i++) {
        p = arg0->unk_B0->v08(size, 0x10);
        sceMpegAvcInitYCbCr(arg2, 1, arg0->unk_D8, arg0->unk_DC, p);
        pp = &arg0->unk_5C[arg0->unk_60];
        if (pp != NULL) {
            *pp = p;
        }
        arg0->unk_60++;
        pq = &arg0->unk_A8[arg0->unk_AC];
        if (pq != NULL) {
            *pq = D_08A04CF4[0];
        }
        arg0->unk_AC++;
    }
    return 1;
}

}
