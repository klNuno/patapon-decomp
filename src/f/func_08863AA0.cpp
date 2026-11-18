#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} E08863AA0;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x15C];
} F08863AA0;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    F08863AA0 *unk_DC;
    u8 pad_E0[0x630];
    s32 unk_710;
    u8 pad_714[0x14];
    s32 unk_728;
    s32 unk_72C;
    u8 *unk_730;
    E08863AA0 *get(s32 i) {
if (i < 0 || unk_728 <= i) { return NULL; } return (E08863AA0 *)(unk_730 + unk_72C * i);
    }
} S08863AA0;

extern int sceKernelWaitSemaCB(s32, s32, s32);
extern int sceKernelSignalSema(s32, s32);

s32 func_08863AA0(S08863AA0 *arg0) {
    s32 ret;
    s32 i;
    E08863AA0 *p;

    ret = -1;
    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    i = arg0->unk_710;
    for (;;) {
        p = arg0->get(i);
        if (p == NULL) {
            break;
        }
        i = p->unk_08;
        if (p->unk_0C == 0 && arg0->unk_DC[p->unk_00].unk_08 != 6) {
            ret = p->unk_00;
            break;
        }
    }
    sceKernelSignalSema(arg0->unk_38, 1);
    return ret;
}

}
