#include "common.h"

typedef struct {
    s32 unk_00;
} Buf_0895EE78;

typedef struct {
    u8 pad_00[0x30];
    u8 unk_30[0x280 - 0x30];
    u8 unk_280[0x36C - 0x280];
    u8 unk_36C[4];
} Obj_0895EE78;

s32 func_0895C054(u8 *);
s32 func_0895BFBC(u8 *);
s32 sceMpegAvcDecodeStopYCbCr(u8 *, Buf_0895EE78 *, s32 *);
s32 func_0895CF90(u8 *);
void func_0895C064(u8 *, s32);
void func_0895BFFC(u8 *);

s32 func_0895EE78(Obj_0895EE78 *arg0) {
    Buf_0895EE78 buf;
    s32 n;
    s32 ret;
    u8 *p;
    s32 i;

    if (func_0895C054(arg0->unk_280) == 0) {
        return 1;
    }
    p = (u8 *)&buf;
    i = 4;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--i);
    }
    buf.unk_00 = func_0895BFBC(arg0->unk_280);
    n = 0;
    ret = sceMpegAvcDecodeStopYCbCr(arg0->unk_30, &buf, &n);
    if (ret != 0) {
        return ret;
    }
    if (n > 0) {
        func_0895C064(arg0->unk_280, func_0895CF90(arg0->unk_36C));
        func_0895BFFC(arg0->unk_280);
    }
    return 0;
}
