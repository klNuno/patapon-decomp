#include "common.h"

extern "C" {

extern u8 D_08A44B58[];
extern u8 D_08A45308[];

typedef struct Obj_0887F1CC {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0x4];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    u8 unk_50;
    u8 pad_51[0x3];
    void *unk_54;
} Obj_0887F1CC;

void func_08855354(Obj_0887F1CC *);

struct Unk00 {};

static inline void func_00(Obj_0887F1CC *arg0, const Unk00 &) {
    func_08855354(arg0);
}

Obj_0887F1CC *func_0887F1CC(Obj_0887F1CC *arg0) {
    arg0->unk_54 = D_08A44B58;
    func_00(arg0, Unk00());
    arg0->unk_40 = 45.0f;
    arg0->unk_44 = 50.0f;
    arg0->unk_48 = 5000.0f;
    arg0->unk_4C = 100.0f;
    arg0->unk_38 = 100.0f;
    arg0->unk_50 = 1;
    arg0->unk_54 = D_08A45308;
    arg0->unk_4C = 50.0f;
    arg0->unk_30 = 0.0f;
    arg0->unk_34 = 150.0f;
    arg0->unk_38 = 562.0f;
    return arg0;
}

}
