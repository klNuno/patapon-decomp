#include "common.h"

typedef struct { u8 pad_00[0x2E3C0]; u8 unk_2E3C0[1]; } T;
typedef struct S {
    T *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
    u8 unk_164;
    u8 pad_165[0x4E7];
    u8 unk_64C;
    u8 pad_64D[3];
    f32 unk_650;
    f32 unk_654;
} S;
extern void *D_08AD1E28[];
extern s32 D_08A05DC4[];
s32 *func_08868E8C(void *, s32, s32);
void func_089579E8(s32, s32, s32, f32);
extern void *func_08958954(u8 *);
void func_08984ED4(S *, void *, s32);
extern s32 func_08985828(s32, s32);
void func_0898AD00(s32);

static inline void *func_1(void) {
    if (D_08AD1E28[0] != NULL) {
        return D_08AD1E28[0];
    } else {
        return NULL;
    }
}

void func_08984684(S *arg0, f32 arg1) {
    s32 temp2;

    temp2 = *func_08868E8C(func_1(), 7, D_08A05DC4[0]);
    func_089579E8((s32)arg0->unk_00->unk_2E3C0, temp2, 2, arg1);
    func_0898AD00(func_08985828((s32)arg0, 0));
    func_0898AD00(func_08985828((s32)arg0, 1));
    func_08984ED4(arg0, func_08958954(arg0->unk_00->unk_2E3C0), 0);
    arg0->unk_650 = 0.0f;
    arg0->unk_654 = 6.0f;
    arg0->unk_64C = 1;
    arg0->unk_164 = 1;
    arg0->unk_160 = 1;
}
