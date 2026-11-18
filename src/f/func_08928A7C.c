#include "common.h"

typedef struct { u8 pad_00[0x40]; } Mtx;
typedef struct { u8 pad_00[0x40]; Mtx unk_40; } E;
typedef struct { u8 pad_00[4]; E *unk_04; } U;
typedef struct { u8 pad_00[0x28]; U *unk_28; void *unk_2C; } T;
typedef struct { u8 pad_00[4]; s32 unk_04; s32 unk_08; } A;

s32 func_088586E8(void);
void func_08866464(Mtx *, void *, void *);
void *func_08866B80(Mtx *, s32);
void func_08866B54(Mtx *, s32, void *);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_089B53D8(s32);

s32 func_08928A7C(T *arg0, const A *arg1) {
    Mtx a, b;

    if (arg1 == NULL) {
        return 0;
    }
    func_08866464(&b, arg0->unk_2C, &arg0->unk_28->unk_04[arg1->unk_04].unk_40);
    func_08866B54(&a, 0, func_08866B80(&b, 0));
    func_08866B54(&a, 1, func_08866B80(&b, 1));
    func_08866B54(&a, 2, func_08866B80(&b, 2));
    func_08866B54(&a, 3, func_08866B80(&b, 3));
    func_08878864(func_089B53D8(func_088586E8()), arg1->unk_08, 2, 1.0f, 0.0f, 0.0f);
    return 1;
}
