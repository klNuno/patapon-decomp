#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } V4;
typedef struct { u8 pad_00[8]; f32 unk_08; } E;
typedef struct { u8 pad_00[0x10]; E *unk_10; } A;
typedef struct { u8 pad_00[0x100]; E unk_100; } B;
typedef struct {
    u8 pad_00[0x114];
    A *unk_114;
    u8 pad_118[0x2A0];
    B *unk_3B8;
    u8 pad_3BC[0x9C4];
    f32 unk_D80;
} T;

void func_08854F60(f32, V4 *, V4 *);
f32 sqrtf(f32);

s32 func_0889F264(V4 *arg0, u32 arg1, T *arg2, f32 **arg3) {
    E *e;
    A *a;
    f32 *p;
    f32 x, y, f;

    e = &arg2->unk_3B8->unk_100;
    a = arg2->unk_114;
    if (a != NULL) {
        e = a->unk_10;
    }
    arg0->unk_00 = 0.0f;
    arg0->unk_04 = 0.0f;
    arg0->unk_08 = 0.0f;
    arg0->unk_0C = 0.0f;
    p = *arg3;
    f = arg2->unk_D80;
    if (p != NULL) {
        arg0->unk_00 = *p - f;
    }
    arg0->unk_0C = 0.0f;
    y = arg0->unk_04;
    x = arg0->unk_00;
    f = sqrtf(x * x + y * y);
    if (f > 0.001f) {
        func_08854F60(1.0f / f, arg0, arg0);
    }
    func_08854F60(((f32)arg1 / 4800.0f) * e->unk_08, arg0, arg0);
    return 0;
}
