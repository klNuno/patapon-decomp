#include "common.h"

extern "C" {

typedef struct A {
    u8 pad_00[0x38];
    f32 unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    u8 unk_50;
    u8 pad_51[3];
    void *unk_54;
} A;

typedef struct X {
    u8 pad_00[0x38];
    f32 unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    u8 unk_54;
    u8 pad_55[3];
    s32 unk_58;
    f32 unk_5C;
    s32 unk_60;
    A *unk_64;
    A *unk_68;
    A *unk_6C;
    A *unk_70;
    A *unk_74;
    A *unk_78;
    A *unk_7C;
    A *unk_80;
    u8 pad_84[0xC];
    A unk_90;
    u8 pad_E8[8];
    u8 unk_F0;
    u8 pad_F1[7];
    s32 unk_F8;
    s32 unk_FC;
    void *unk_100;
} X;

extern u8 D_08A44B3C[];
extern u8 D_08A44B58[];

void func_08855354(void *);

struct E {
};

inline void ctorA(A *arg0, const E &) {
    arg0->unk_54 = D_08A44B58;
    func_08855354(arg0);
    arg0->unk_40 = 45.0f;
    arg0->unk_44 = 50.0f;
    arg0->unk_48 = 5000.0f;
    arg0->unk_4C = 100.0f;
    arg0->unk_38 = 100.0f;
    arg0->unk_50 = 1;
}

X *func_08864AC4(X *arg0) {
    arg0->unk_100 = D_08A44B3C;
    func_08855354(arg0);
    arg0->unk_40 = 45.0f;
    arg0->unk_44 = 50.0f;
    arg0->unk_48 = 5000.0f;
    arg0->unk_4C = 100.0f;
    arg0->unk_38 = 100.0f;
    arg0->unk_58 = 0;
    arg0->unk_5C = 136.0f;
    arg0->unk_60 = 0;
    ctorA(&arg0->unk_90, E());
    arg0->unk_F0 = 1;
    arg0->unk_F8 = 0;
    arg0->unk_FC = 0;
    arg0->unk_50 = 1.0f;
    arg0->unk_54 = 1;
    arg0->unk_64 = &arg0->unk_90;
    arg0->unk_68 = &arg0->unk_90;
    arg0->unk_6C = &arg0->unk_90;
    arg0->unk_70 = &arg0->unk_90;
    arg0->unk_74 = &arg0->unk_90;
    arg0->unk_78 = &arg0->unk_90;
    arg0->unk_7C = &arg0->unk_90;
    arg0->unk_80 = &arg0->unk_90;
    return arg0;
}

}
