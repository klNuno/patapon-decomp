#include "common.h"

extern "C" {

class S_089CBCB8 {
public:
    u8 pad_00[0x50];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C(s32);
    u8 pad_54[0x1510 - 0x54];
    u8 unk_1510;
};

extern void *D_08AD1E28[];
extern void *D_08A8812C[];
extern u8 *D_08AD1F14[];
extern u8 D_08A09BE0[];
extern s32 func_0886095C(void);
extern void func_0886E558(s32);
void func_08860820(void *, s32);
void func_08864938(s32, s32);
void func_088698FC(void *, void *, void *, s32, s32, s32, s32, s32, s32);
void func_0888382C(void);
void func_08876C60(void *);
void scePowerSetClockFrequency350(s32, s32, s32);

void func_089CBCB8(S_089CBCB8 *arg0) {
    char buf[0x40];
    void *a;
    char *p;
    s32 n;

    func_0886E558((s32)arg0);
    func_08864938(func_0886095C(), 0);
    a = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0);
    p = buf;
    n = 0x40;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    func_088698FC(a, D_08A09BE0, func_0888382C, 0xC, 0, 0, 0, 0, 1);
    func_08876C60(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL);
    arg0->v3C(0);
    scePowerSetClockFrequency350(0x14D, 0x14D, 0xA6);
    arg0->unk_1510 = 0;
}

}
