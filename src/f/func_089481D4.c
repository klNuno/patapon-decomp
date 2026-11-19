#include "common.h"

typedef struct {
    u32 unk_00;
    s8 unk_04[0x404];
} Str_089481D4;

extern s8 D_08A03F88[];
void func_0881F120(void *, void *, s32);
u32 func_08822BC4(char *);

void func_089481D4(Str_089481D4 *arg0, Str_089481D4 *arg1, char *arg2) {
    u32 temp;
    u32 temp2;

    temp = func_08822BC4(arg2);
    func_0881F120((s8 *)(arg1->unk_00 + (u32)arg1) + 4, arg2, temp);
    temp2 = arg1->unk_00;
    temp2 = (u32)((s8 *)temp + temp2);
    arg1->unk_00 = temp2;
    temp2 += (u32)arg1;
    ((Str_089481D4 *)temp2)->unk_04[0] = D_08A03F88[0];
    temp = arg1->unk_00;
    if (temp > 0x400) {
        temp = 0x400;
    }
    if (arg0 != arg1) {
        func_0881F120(arg0->unk_04, arg1->unk_04, temp);
        arg0->unk_00 = temp;
        arg0->unk_04[temp] = D_08A03F88[0];
    }
}
