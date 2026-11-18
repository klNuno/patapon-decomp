#include "common.h"

typedef struct {
    u8 pad_00[0x25EC4];
    s32 unk_25EC4;
    s32 unk_25EC8;
    u8 unk_25ECC[0x260E0 - 0x25ECC];
    u8 *unk_260E0;
    s32 unk_260E4;
    void *unk_260E8;
} S_088DAEF4;

extern u8 D_08A46380[];
s32 func_088DB064(S_088DAEF4 *);
u8 *func_088DB054(S_088DAEF4 *);
u8 *func_088DB028(S_088DAEF4 *);
void *func_08807190(u32, u8 *);
void func_088D8ED0(void *, s32);
void func_088DAD98(u8 *);
s32 func_088DAD48(S_088DAEF4 *, u32);
void func_088DAD68(u8 *, s32 *);

S_088DAEF4 *func_088DAEF4(S_088DAEF4 *arg0, s32 arg1) {
    u8 *p;
    void *q;
    u32 i;
    s32 v;

    arg0->unk_260E8 = D_08A46380;
    arg0->unk_25EC4 = func_088DB064(arg0);
    arg0->unk_25EC8 = 0x81;
    for (p = func_088DB054(arg0); p != func_088DB028(arg0); p += 0x4B4) {
        if ((q = func_08807190(0x4B4, p)) != NULL) {
            func_088D8ED0(q, arg1);
        }
    }
    arg0->unk_260E0 = (u8 *)(((u32)arg0->unk_25ECC & 0xF) + (u32)arg0) + 0x25ECC;
    arg0->unk_260E4 = 0;
    func_088DAD98(arg0->unk_25ECC);
    for (i = 0; i < 0x81; i++) {
        v = func_088DAD48(arg0, 0x80 - i);
        func_088DAD68(arg0->unk_25ECC, &v);
    }
    return arg0;
}
