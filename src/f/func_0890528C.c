#include "common.h"

typedef struct {
    u8 pad_00[0x45C0];
    u8 unk_45C0[4];
} C_0890528C;

typedef struct {
    u8 pad_00[0x14A0];
    C_0890528C *unk_14A0;
} B_0890528C;

typedef struct {
    u8 pad_00[0x42820];
    B_0890528C *unk_42820;
} A_0890528C;

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} Obj_0890528C;

extern A_0890528C *D_08AD1E28[];

void func_0881F120(void *, void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
void *func_089A8D10(s32, s32);
u32 func_088AD870(void *);
void func_088AD774(u16 *, void *);

void func_0890528C(Obj_0890528C *arg0, void *arg1) {
    u16 buf[0x80];
    s32 idx;
    void *s;
    B_0890528C *b;
    u32 n;
    s32 size;

    idx = *func_0885356C(arg1, 0, 0, 4);
    s = func_089A8D10(arg0->unk_48, *(s32 *)(func_08852BA8(arg1) + idx));
    b = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820;
    n = func_088AD870(s);
    if (n > 0x80) {
        n = 0x7F;
    }
    size = n * 2;
    func_0881F120(buf, s, size);
    *(u16 *)((u8 *)buf + size) = 0;
    func_088AD774(buf, b->unk_14A0->unk_45C0);
    func_08852F00(arg1, 0);
}
