#include "common.h"

extern u8 D_08A448AC[];
void func_0884E9D4(void *);
extern s32 func_08852990(s32);

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x360];
    u8 unk_364[0x104];
    u8 *unk_468;
    u32 unk_46C;
    u8 pad_470[4];
    u8 unk_474;
} T;

T *func_08852700(T *arg0) {
    arg0->unk_00 = D_08A448AC;
    arg0->unk_468 = (u8 *)(((u32)arg0->unk_364 & 3) + (u32)arg0 + 0x364);
    arg0->unk_46C = 0;
    func_0884E9D4(&arg0->unk_474);
    func_08852990((s32)arg0);
    return arg0;
}
