#include "common.h"

typedef struct N_08892D94 N_08892D94;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} Unk_0889486C;

void func_088924BC(void *, N_08892D94 *);
void func_0889282C(s32 *, s32 *, s32);
N_08892D94 *func_08892824(s32 *);
void func_08892814(s32 *, s32 *);

void func_0889486C(Unk_0889486C *arg0)
{
    s32 unk_1C;
    volatile union { s32 unk_00; f32 unk_04; } unk_18;
    s32 unk_14;
    s32 unk_10;

    unk_18.unk_00 = arg0->unk_04;
    *(f32 *)&unk_14 = unk_18.unk_04;
    func_0889282C(&unk_10, &unk_14, 0);
    func_088924BC(arg0, func_08892824(&unk_10));
    func_08892814(&unk_1C, &unk_14);
}
