#include "common.h"

extern void *D_08AD1E28[];
extern char D_08A072BC[];
extern char D_08A072CC[];

s32 func_08868CAC(void *, s32, char *, s32);
void func_08865FE4(void *, s32);

typedef struct {
    u8 unk_00[0x90];
    u8 unk_90[0x90];
    f32 unk_120;
    f32 unk_124;
    f32 unk_128;
} UnkObject;

static inline void *temp0(void)
{
    void *temp = D_08AD1E28[0];
    if (temp != NULL) {
        return temp;
    } else {
        return NULL;
    }
}

void func_089A5784(UnkObject *arg0, const f32 *arg1, f32 arg2)
{
    void *temp = temp0();
    func_08865FE4(arg0, func_08868CAC(temp, 0xA, D_08A072BC, 1));
    func_08865FE4(&arg0->unk_90, func_08868CAC(temp, 0xA, D_08A072CC, 1));
    arg0->unk_120 = arg1[0];
    arg0->unk_124 = arg1[1];
    arg0->unk_128 = arg2;
}
