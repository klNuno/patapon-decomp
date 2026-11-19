#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x18];
    void *unk_1C;
    u8 pad_20[0x5C];
    u8 unk_7C;
} T;

typedef struct Unk_0893B0BC Unk_0893B0BC;
void func_08923F1C(Unk_0893B0BC *);
extern s32 D_08A46CD4[];
extern s32 D_08A46CE0[];

T *func_08920BB4(T *arg0)
{
    func_08923F1C((Unk_0893B0BC *)arg0);
    arg0->unk_00 = D_08A46CD4;
    arg0->unk_1C = D_08A46CE0;
    arg0->unk_7C = 0;
    return arg0;
}
