#include "common.h"

extern "C" {

typedef struct Obj_089794B0 Obj_089794B0;

class Unk_089CC10C_Sub {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct Unk_089CC10C {
    u8 pad_00[0xA0];
    Unk_089CC10C_Sub unk_A0;
} Unk_089CC10C;

typedef struct Unk_089CC10C_C {
    u8 pad_00[0x14];
    s32 unk_14;
} Unk_089CC10C_C;

typedef struct Unk_089CC10C_B {
    u8 pad_00[0x1490];
    Unk_089CC10C_C *unk_1490;
    u8 pad_1494[0x247C - 0x1494];
    s32 unk_247C;
} Unk_089CC10C_B;

typedef struct Unk_089CC10C_A {
    u8 pad_00[0x42820];
    Unk_089CC10C_B *unk_42820;
} Unk_089CC10C_A;

void func_08865FE4(void *, s32);
s32 func_08868CAC(Obj_089794B0 *, s32, s32, s32);
void func_089CC4EC(char *arg0, s32 arg1);
void scePowerSetClockFrequency350(s32, s32, s32);
extern s32 D_08A09C60[];
extern Obj_089794B0 *D_08AD1E28[];

void func_089CC10C(Unk_089CC10C *arg0) {
    Unk_089CC10C_B *temp_s1;
    Unk_089CC10C_C *temp_s0;

    func_08865FE4(&arg0->unk_A0, func_08868CAC(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 0xC, D_08A09C60[0], 1));
    arg0->unk_A0.unk_14(0, 0);
    temp_s1 = ((Unk_089CC10C_A *)(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL))->unk_42820;
    temp_s0 = temp_s1->unk_1490;
    func_089CC4EC((char *)arg0, 3);
    if (temp_s1->unk_247C == 0xE) {
        temp_s0->unk_14 = 2;
    }
    scePowerSetClockFrequency350(0xDE, 0xDE, 0x6F);
}

}
