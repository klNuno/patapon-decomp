#include "common.h"

typedef struct {
    u8 pad_00[0x10018];
    u8 unk_10018[0x218];
    void *unk_10230;
    u8 pad_10234[0xC];
    s32 unk_10240;
} T0897F1A8;

extern u8 D_08A480E4[];

void func_0897F5E4(T0897F1A8 *, s32, u8 *);
void func_0897F5CC(void *);
void func_0897F380(T0897F1A8 *, s32);

T0897F1A8 *func_0897F1A8(T0897F1A8 *arg0, s32 arg1) {
    u8 buf[0x200];
    u8 *p;
    u8 *r;
    s32 n;

    arg0->unk_10230 = D_08A480E4;
    p = buf;
    n = 0x200;
    if (p != NULL) {
        r = p;
        do { *p++ = 0; } while (--n);
    }
    func_0897F5E4(arg0, 0x80, r);
    func_0897F5CC(arg0->unk_10018);
    func_0897F380(arg0, 0);
    arg0->unk_10240 = arg1;
    return arg0;
}
