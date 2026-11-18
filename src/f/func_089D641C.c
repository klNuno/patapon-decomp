#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} R;

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C[0x10];
} S_089D641C;

R *func_0884E644(s32);
s32 func_088A88C0(void);
void func_088B3328(u8 *, s32, s32);
void func_088FD120(u8 *);
void func_08915370(void *, s32);
void func_089154BC(void *, u8 *);
void func_08915524(void *, u8 *);
s32 func_089A8B74(u8 *, s32);
void sceKernelDcacheWritebackAll(void);
extern u8 *D_08AD1F14[];

void func_089D641C(S_089D641C *arg0) {
    u8 sp10[0x400];
    R *temp;

    temp = func_0884E644(func_088A88C0());
    temp->unk_04[0x70] &= 0xEF;
    temp->unk_04[0x70] &= 0xBF;
    temp->unk_04[0x70] &= 0x7F;
    func_088B3328(sp10, 0x80, func_089A8B74((D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2460, 0x20032));
    func_089154BC(arg0->unk_1C, sp10);
    func_088FD120(sp10);
    func_08915524(arg0->unk_1C, sp10);
    sceKernelDcacheWritebackAll();
    func_08915370(arg0->unk_1C, 1);
}
