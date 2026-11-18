#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xD94];
} S_0890E330_08;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} F_0890E330;

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 unk_04;
    S_0890E330_08 unk_08;
    u8 unk_DA0[0xC0];
    F_0890E330 unk_E60;
} S_0890E330;

extern u8 D_08A44CAC[];
void func_0890E3B8(void *, void *);
void func_088A1C70(void *, void *);

S_0890E330 *func_0890E330(S_0890E330 *arg0, S_0890E330 *arg1) {
    S_0890E330_08 *s;

    arg0->unk_00 = arg1->unk_00;
    arg0->unk_01 = arg1->unk_01;
    arg0->unk_04 = arg1->unk_04;
    s = &arg0->unk_08;
    func_0890E3B8(s, &arg1->unk_08);
    s->unk_00 = D_08A44CAC;
    func_088A1C70(arg0->unk_DA0, arg1->unk_DA0);
    arg0->unk_E60 = arg1->unk_E60;
    return arg0;
}
