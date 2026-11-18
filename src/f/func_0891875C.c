#include "common.h"

extern void *D_08AD1E28[];
extern void *D_08A8812C[];
extern u8 *D_08AD1F14[];
extern u8 D_08A0087C[];
extern void func_0886E558(s32);
void func_08860820(void *, s32);
void func_088698FC(void *, void *, void *, s32, s32, s32, s32, s32, s32);
void func_0888382C(void);
void func_08876C60(void *);
void scePowerSetClockFrequency350(s32, s32, s32);

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
} S_0891875C;

void func_0891875C(S_0891875C *arg0) {
    char buf[0x40];
    void *a;
    char *p;
    s32 n;

    func_0886E558((s32)arg0);
    a = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0);
    p = buf;
    n = 0x40;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    func_088698FC(a, D_08A0087C, func_0888382C, 3, 0, 0, 0, 0, 1);
    func_08876C60(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL);
    scePowerSetClockFrequency350(0x14D, 0x14D, 0xA6);
    arg0->unk_1510 = 0;
}
