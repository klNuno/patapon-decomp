#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x18];
    void *unk_1C;
    u8 pad_20[0x5C];
    u8 unk_7C[0xA4];
    u8 unk_120;
    u8 unk_121;
} Unk_0893B0BC;

extern u8 D_08A47278[];
extern u8 D_08A47284[];
void func_0889B278(void *, void *);
void func_08923F1C(Unk_0893B0BC *);

Unk_0893B0BC *func_0893B0BC(Unk_0893B0BC *arg0, void *arg1)
{
    func_08923F1C(arg0);
    arg0->unk_00 = D_08A47278;
    arg0->unk_1C = D_08A47284;
    func_0889B278(arg0->unk_7C, arg1);
    arg0->unk_120 = 1;
    arg0->unk_121 = 0;
    return arg0;
}
