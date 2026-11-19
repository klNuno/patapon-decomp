#include "common.h"

extern u8 D_08A44770[];
extern u8 D_08A47990[];
void func_0895B708(void *);

typedef struct {
    void *volatile unk_00;
    u8 unk_04;
    u8 pad_05[0x03];
    s32 unk_08;
} T;

T *func_0895B2C4(T *arg0, s32 arg1) {
    arg0->unk_00 = D_08A44770;
    arg0->unk_00 = D_08A47990;
    func_0895B708(&arg0->unk_04);
    arg0->unk_08 = arg1;
    return arg0;
}
