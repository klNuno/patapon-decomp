#include "common.h"

void func_089B32D0(void *, s32);
extern s32 func_08975794(s32);
void func_08865EE0(void *);
void func_089457D8(void *);
void func_088F232C(void *, s32);
extern u8 D_08A4883C[];

typedef struct {
    u8 pad_00[0x58];
    u8 *unk_58;
    u8 unk_5C[0x14];
    u8 unk_70[0x90];
    u8 unk_100[0x10];
    u8 unk_110[0x6D0];
    u8 unk_7E0[0x6D0];
    s32 unk_EB0;
    s32 unk_EB4;
} Unk00;

Unk00 *func_089AE5F0(Unk00 *arg0, s32 arg1) {
    func_089B32D0(arg0, arg1);
    arg0->unk_58 = D_08A4883C;
    func_08975794((s32)arg0->unk_5C);
    func_08865EE0(arg0->unk_70);
    func_089457D8(arg0->unk_100);
    func_088F232C(arg0->unk_110, 1);
    func_088F232C(arg0->unk_7E0, 1);
    arg0->unk_EB0 = 0;
    arg0->unk_EB4 = 0;
    return arg0;
}
