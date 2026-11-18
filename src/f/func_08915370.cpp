#include "common.h"

extern "C" {

class V_08915370 {
public:
    u8 pad_00[0xC];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18(void *, s32);
};

typedef struct {
    s32 unk_00;
} C_08915370;

typedef struct {
    u8 pad_00[0x1498];
    C_08915370 *unk_1498;
} G_08915370;

typedef struct {
    u8 pad_00[0x42820];
    G_08915370 *unk_42820;
} W_08915370;

typedef struct {
    u8 pad_00[0x824];
    void *unk_824;
    u8 pad_828[0x14];
    u8 unk_83C;
    u8 pad_83D[3];
    s32 unk_840;
    f32 unk_844;
    u8 pad_848[0x1C];
    s32 unk_864;
    V_08915370 unk_868;
    V_08915370 unk_878;
    V_08915370 unk_888;
    u8 pad_898[4];
    u8 unk_89C;
    u8 pad_89D[0x483];
    u8 unk_D20[4];
} S_08915370;

extern W_08915370 *D_08AD1E28[];
void sceKernelDcacheWritebackAll(void);
s32 func_088A88C0(void);
void func_088A8950(s32);
void func_0887739C(void *);
void func_089155DC(S_08915370 *);

void func_08915370(S_08915370 *arg0, s32 arg1) {
    G_08915370 *g;
    C_08915370 *c;

    arg0->unk_864 = arg1;
    sceKernelDcacheWritebackAll();
    g = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820;
    c = g->unk_1498;
    if (arg0->unk_864 != 3) {
        func_088A8950(func_088A88C0());
        arg0->unk_824 = arg0->unk_D20;
    }
    if (arg0->unk_864 == 1) {
        c->unk_00++;
        func_0887739C(g);
        func_089155DC(arg0);
        arg0->unk_868.v18(c, 0x322C8);
    } else if (arg0->unk_864 == 2) {
        func_089155DC(arg0);
        arg0->unk_878.v18(c, 0x322C8);
    } else if (arg0->unk_864 == 3) {
        arg0->unk_888.v18(NULL, 0);
    }
    arg0->unk_840 = 0;
    arg0->unk_844 = 0.2f;
    arg0->unk_83C = 1;
    arg0->unk_89C = 1;
}

}
