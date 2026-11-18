#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x30];
    V4 unk_30;
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    u8 unk_50;
    u8 pad_51[3];
    void *unk_54;
    u8 pad_58[8];
    f32 unk_60;
    f32 unk_64;
    f32 unk_68;
    f32 unk_6C;
    f32 unk_70;
} S;

void func_08855354(char *);
extern u8 D_08A44B58[];
extern u8 D_08A485E0[];
extern f32 D_089EED30[];
extern f32 D_089EED34[];
extern f32 D_089EED38[];
extern f32 D_089EED3C[];

struct E {
};

inline void ctorBase(S *arg0, const E &) {
    arg0->unk_54 = D_08A44B58;
    func_08855354((char *)arg0);
    arg0->unk_40 = 45.0f;
    arg0->unk_44 = 50.0f;
    arg0->unk_48 = 5000.0f;
    arg0->unk_4C = 100.0f;
    arg0->unk_30.unk_08 = 100.0f;
    arg0->unk_50 = 1;
}

S *func_089968D0(S *arg0) {
    ctorBase(arg0, E());
    arg0->unk_54 = D_08A485E0;
    arg0->unk_60 = 0.0f;
    arg0->unk_64 = 0.0f;
    arg0->unk_68 = 0.0f;
    arg0->unk_6C = 1.0f;
    arg0->unk_70 = 0.0f;
    arg0->unk_60 = 50.0f;
    arg0->unk_68 = 220.0f;
    arg0->unk_4C = 50.0f;
    arg0->unk_44 = 1.0f;
    arg0->unk_48 = 1500.0f;
    arg0->unk_30.unk_00 = D_089EED30[0];
    arg0->unk_30.unk_04 = D_089EED34[0];
    arg0->unk_30.unk_08 = D_089EED38[0];
    arg0->unk_30.unk_0C = D_089EED3C[0];
    return arg0;
}

}
