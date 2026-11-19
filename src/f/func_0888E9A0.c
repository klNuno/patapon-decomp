#include "common.h"

typedef struct { u8 pad_00[4]; s32 unk_04; } L_0888BDAC;
typedef struct { u8 unk_00; } N_0888BDAC;
typedef union { s32 unk_00; f32 unk_04; } Unk;

void func_0888C238(s32 *, s32 *, s32);
void func_0888BEC8(L_0888BDAC *, N_0888BDAC *);
void func_0888C220(s32 *, s32 *);
N_0888BDAC *func_0888C230(s32 *);

void func_0888E9A0(L_0888BDAC *arg0) {
    s32 temp;
    volatile Unk unk_00;
    Unk unk_04;
    s32 unk_08;

    unk_00.unk_00 = arg0->unk_04;
    unk_04.unk_04 = unk_00.unk_04;
    func_0888C238(&unk_08, &unk_04.unk_00, 0);
    func_0888BEC8(arg0, func_0888C230(&unk_08));
    func_0888C220(&temp, &unk_04.unk_00);
}
