#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    u8 unk_50;
    u8 pad_51[3];
    void *unk_54;
    u8 pad_58[8];
    s32 unk_60;
    u8 pad_64[0xC];
    f32 unk_70;
    f32 unk_74;
    f32 unk_78;
    f32 unk_7C;
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
} T089208E8;

extern u8 D_08A44B58[];
extern u8 D_08A46CBC[];

void func_08855354(T089208E8 *);

struct E089208E8 {
};

inline void func_089208E8_inl(T089208E8 *arg0, const E089208E8 &) {
    arg0->unk_54 = D_08A44B58;
    func_08855354(arg0);
    arg0->unk_40 = 45.0f;
    arg0->unk_44 = 50.0f;
    arg0->unk_48 = 5000.0f;
    arg0->unk_4C = 100.0f;
    arg0->unk_38 = 100.0f;
    arg0->unk_50 = 1;
}

T089208E8 *func_089208E8(T089208E8 *arg0, s32 arg1) {
    func_089208E8_inl(arg0, E089208E8());
    arg0->unk_54 = D_08A46CBC;
    arg0->unk_60 = arg1;
    arg0->unk_70 = 0.0f;
    arg0->unk_74 = 0.0f;
    arg0->unk_78 = 0.0f;
    arg0->unk_7C = 1.0f;
    arg0->unk_80 = 0.0f;
    arg0->unk_84 = 0.0f;
    arg0->unk_88 = 0.0f;
    arg0->unk_4C = 50.0f;
    arg0->unk_48 = 1500.0f;
    arg0->unk_30 = 0.0f;
    arg0->unk_34 = 0.0f;
    arg0->unk_38 = 225.0f;
    return arg0;
}

}
