#include "common.h"

typedef struct Unk Unk;

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05[0x1B];
    u8 unk_20[1];
} Unk2;

typedef Unk S_0885E0A4;

void func_0885EEE8(S_0885E0A4 *);
void *func_0886095C(void);
s32 func_08861624(void *);

void func_08860454(Unk2 *arg0)
{
    func_0885EEE8((S_0885E0A4 *)arg0->unk_20);
    func_08861624(func_0886095C());
    arg0->unk_04 = 0;
}
