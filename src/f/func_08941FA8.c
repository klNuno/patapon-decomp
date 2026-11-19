#include "common.h"

typedef struct {
    u8 pad_00[0x19C];
    u8 unk_19C[0xC];
    u32 unk_1A8;
} Unk;

u32 func_08941FA0(void);
void func_0894065C(s32 *, void *);
void func_08941528(void *, s32, void *);

void func_08941FA8(Unk *arg0, void *arg1) {
    u32 temp = arg0->unk_1A8;
    if (temp < func_08941FA0()) {
        s32 unk_00;
        func_0894065C(&unk_00, arg0->unk_19C);
        func_08941528(arg0->unk_19C, unk_00, arg1);
    }
}
