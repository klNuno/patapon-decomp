#include "common.h"

typedef struct {
    u8 pad_00[0x37C0];
    char unk_37C0[0x1444];
    u8 unk_4C04;
} T;

void func_08913708(char *, s32);
void func_089139A4(void *, s32, void *, s32);
s32 func_08913AE0(char *);
extern u8 D_089E5E60[];

void func_0891BDA8(T *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 1) {
        func_089139A4(arg0->unk_37C0, 1, D_089E5E60, 1);
        arg0->unk_4C04 = 1;
    }
    func_08913708(arg0->unk_37C0, arg1);
    func_08913AE0(arg0->unk_37C0);
}
