#include "common.h"

extern "C" {

class Unk_0891882C {
public:
    u8 unk_00[0x50];
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
};

s32 func_08860820(void *, s32);
s32 *func_08868E8C(void *, s32, char *);
void func_08917284(void *, s32);
void func_0897B950(void *, s32);
void scePowerSetClockFrequency350(s32, s32, s32);
extern char D_08A00898[];
extern void *D_08A8812C[];
extern void *D_08AD1E28[];

s32 func_0891882C(Unk_0891882C *arg0) {
    if (arg0->unk_00[0x1510] == 1) {
        return 1;
    }
    if (func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0) != 0) {
        return 0;
    }
    scePowerSetClockFrequency350(0xDE, 0xDE, 0x6F);
    arg0->unk_00[0x1510] = 1;
    func_0897B950(&arg0->unk_00[0x36410], *func_08868E8C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 3, D_08A00898));
    func_08917284(&arg0->unk_00[0x1520], 1);
    arg0->v3C(0);
    return 1;
}

}
