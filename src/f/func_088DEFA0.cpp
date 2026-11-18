#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x1A0EC];
    s32 unk_1A0EC;
} C_088DEFA0;

typedef struct {
    u8 pad_00[0x1498];
    C_088DEFA0 *unk_1498;
} B_088DEFA0;

typedef struct {
    u8 pad_00[0x42820];
    B_088DEFA0 *unk_42820;
} A_088DEFA0;

typedef struct {
    u8 pad_00[0x48];
    u8 unk_48;
    u8 unk_49;
    u8 unk_4A;
    u8 unk_4B;
    u8 unk_4C[0x20];
    s32 unk_6C;
} P_088DEFA0;

struct V_088DEFA0_Base {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x14];
};

struct V_088DEFA0 : V_088DEFA0_Base {
    virtual void v0();
};

typedef struct {
    s32 unk_00;
    u8 unk_04[0xC];
} W_088DEFA0;

typedef struct {
    u8 pad_00[0xB21B8];
    P_088DEFA0 *unk_B21B8;
    V_088DEFA0 unk_B21BC;
    W_088DEFA0 unk_B21DC;
} S_088DEFA0;

typedef struct {
    u8 pad_00[0x8];
} T_088DEFA0;

extern A_088DEFA0 *D_08AD1E28[];

void func_0881F120(void *, void *, s32);
void func_0898B81C(T_088DEFA0 *);
void func_0898C104(T_088DEFA0 *, P_088DEFA0 *);
void func_0898C0C4(void *, s32);

void func_088DEFA0(S_088DEFA0 *arg0) {
    T_088DEFA0 t;
    W_088DEFA0 *w;

    if (arg0->unk_B21B8 == NULL) {
        return;
    }
    if (arg0->unk_B21BC.unk_00 == 0) {
        return;
    }
    arg0->unk_B21BC.v0();
    (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1498->unk_1A0EC -= arg0->unk_B21B8->unk_6C;
    w = &arg0->unk_B21DC;
    w->unk_00 = arg0->unk_B21B8->unk_48 | ((arg0->unk_B21B8->unk_49 << 8) | ((arg0->unk_B21B8->unk_4B << 24) | (arg0->unk_B21B8->unk_4A << 16)));
    func_0881F120(w->unk_04, arg0->unk_B21B8->unk_4C, 0xC);
    func_0898B81C(&t);
    func_0898C104(&t, arg0->unk_B21B8);
    arg0->unk_B21B8 = NULL;
    arg0->unk_B21BC.unk_00 = 0;
    arg0->unk_B21BC.unk_04 = 0;
    func_0898C0C4(&t, -1);
}

}
