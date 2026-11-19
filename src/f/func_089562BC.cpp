#include "common.h"

extern "C" {
void func_0894DAD8(char *, s32, void *, void *);

typedef struct {
    u8 pad_00[0x43C0];
    char unk_43C0[1];
    u8 pad_43C1[0x1DD03];
    u8 unk_220C4[0x10];
    u8 unk_220D4[0xA4];
    u8 unk_22178;
} UnkObject;

void func_089562BC(UnkObject *arg0, s32 *arg1)
{
    if (((UnkObject *)(*arg1 + (u32)arg0))->unk_22178 == 0) {
        func_0894DAD8(arg0->unk_43C0, (s32)arg1, arg0->unk_220C4, arg0->unk_220D4);
    }
}
}
