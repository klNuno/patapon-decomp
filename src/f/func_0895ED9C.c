#include "common.h"

typedef struct {
    s32 unk_00;
} Buf_0895ED9C;

typedef struct {
    u8 pad_00[0x30];
    u8 unk_30[0xB4 - 0x30];
    s32 unk_B4;
    u8 pad_B8[0xC];
    u8 unk_C4[4];
    s32 unk_C8;
    u8 pad_CC[0x280 - 0xCC];
    u8 unk_280[0x36C - 0x280];
    u8 unk_36C[4];
} Obj_0895ED9C;

s32 func_0895C054(u8 *);
s32 func_0895BFBC(u8 *);
s32 sceMpegGetAvcAu(u8 *, s32, u8 *, s32 *);
s32 sceMpegAvcDecodeYCbCr(u8 *, u8 *, Buf_0895ED9C *, s32 *);
void func_0895CFD4(u8 *, s32);
s32 func_0895CF90(u8 *);
void func_0895C064(u8 *, s32);
void func_0895BFFC(u8 *);

s32 func_0895ED9C(Obj_0895ED9C *arg0) {
    s32 au;
    Buf_0895ED9C buf;
    s32 n;
    s32 ret;
    u8 *p;
    s32 i;

    if (func_0895C054(arg0->unk_280) == 0) {
        return 1;
    }
    if (sceMpegGetAvcAu(arg0->unk_30, arg0->unk_B4, arg0->unk_C4, &au) != 0) {
        return 0;
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
    ret = sceMpegAvcDecodeYCbCr(arg0->unk_30, arg0->unk_C4, &buf, &n);
    if (ret != 0) {
        return ret;
    }
    func_0895CFD4(arg0->unk_36C, arg0->unk_C8);
    if (n == 1) {
        func_0895C064(arg0->unk_280, func_0895CF90(arg0->unk_36C));
        func_0895BFFC(arg0->unk_280);
    }
    return 0;
}
