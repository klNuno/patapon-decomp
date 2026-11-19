#include "common.h"

typedef struct { u8 pad_00[4]; s32 unk_04; } L;
typedef struct { u8 unk_00; } N;
typedef union { s32 unk_00; f32 unk_04; } Unk;

void func_0885BD64(s32 *, s32 *, s32);
void func_0885BF64(L *, N *);
void func_0885C170(s32 *, s32 *);
N *func_0885C180(s32 *);

void func_0885CA78(L *arg0) {
    s32 temp;
    volatile Unk unk_00;
    Unk unk_04;
    s32 unk_08;

    unk_00.unk_00 = arg0->unk_04;
    unk_04.unk_04 = unk_00.unk_04;
    func_0885BD64(&unk_08, &unk_04.unk_00, 0);
    func_0885BF64(arg0, func_0885C180(&unk_08));
    func_0885C170(&temp, &unk_04.unk_00);
}
