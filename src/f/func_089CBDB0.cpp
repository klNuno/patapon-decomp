#include "common.h"

extern "C" {

class Unk_089CBDB0 {
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

typedef struct {
    u8 pad_00[0x2460];
    u8 unk_2460[0x1C];
    s32 unk_247C;
} G2_089CBDB0;

typedef struct {
    u8 pad_00[0x42820];
    G2_089CBDB0 *unk_42820;
} G_089CBDB0;

s32 func_08860820(void *, s32);
s32 func_0886095C(void);
void func_08864938(s32, s32);
void func_088769AC(G2_089CBDB0 *);
void func_089A8A7C(void *, s32);
void func_089CC10C(void *);
void scePowerSetClockFrequency350(s32, s32, s32);
extern void *D_08A8812C[];
extern G_089CBDB0 *D_08AD1E28[];

s32 func_089CBDB0(Unk_089CBDB0 *arg0) {
    G2_089CBDB0 *temp;

    if (arg0->unk_00[0x1510] == 1) {
        return 1;
    }
    if (func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0) != 0) {
        return 0;
    }
    scePowerSetClockFrequency350(0xDE, 0xDE, 0x6F);
    arg0->unk_00[0x1510] = 1;
    arg0->v3C(1);
    func_089CC10C(&arg0->unk_00[0x1520]);
    temp = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820;
    func_089A8A7C(temp->unk_2460, temp->unk_247C);
    func_088769AC(temp);
    func_08864938(func_0886095C(), 1);
    return 1;
}

}
