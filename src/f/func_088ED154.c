#include "common.h"

typedef struct {
    u8 pad_00[0x14A0];
    s32 unk_14A0;
} G2_088ED154;

typedef struct {
    u8 pad_00[0x42820];
    G2_088ED154 *unk_42820;
} G_088ED154;

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
} Obj_088ED154;

extern G_088ED154 *D_08AD1E28[];

s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
s32 func_089A8D10(s32, s32);
u32 func_088AD870(s32);
void func_0881F120(void *, s32, s32);
void func_088AD774(void *, s32);
void func_08852F00(void *, s32);

void func_088ED154(Obj_088ED154 *arg0, void *arg1) {
    u16 buf[0x80];
    s32 s;
    s32 i;
    G2_088ED154 *g;
    u32 n;

    i = *func_0885356C(arg1, 0, 0, 4);
    s = func_089A8D10(arg0->unk_18, *(s32 *)(func_08852BA8(arg1) + i));
    g = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820;
    n = func_088AD870(s);
    if (n > 0x80) {
        n = 0x7F;
    }
    func_0881F120(buf, s, n * 2);
    buf[n] = 0;
    func_088AD774(buf, g->unk_14A0 + 0x45C0);
    func_08852F00(arg1, 0);
}
