#include "common.h"

typedef struct { u8 pad_00[0x28]; s32 unk_28; } B;
typedef struct { u8 pad_00[8]; u32 unk_08; u8 pad_0C[0x10]; } E;
typedef struct { u8 pad_00[0x3C]; B *unk_3C; E *unk_40; } A;

f32 func_0881A010(f32);

u16 func_0889BF3C(A *arg0) {
    E *temp = arg0->unk_40;
    B *temp2;
    if (temp == NULL || (temp2 = arg0->unk_3C) == NULL) return 0x78;
    return (u16)func_0881A010(60.0f / ((f32)((E *)((u8 *)temp + temp2->unk_28 * 0x1C))->unk_08 / 1000000.0f));
}
