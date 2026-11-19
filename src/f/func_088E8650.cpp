#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x36B08];
    u8 *unk_36B08;
} Unk1;

typedef struct {
    u8 pad_00[0x14];
    Unk1 *unk_14;
} Unk;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0887FC68(u8 *, s32);

void func_088E8650(Unk *arg0, void *arg1)
{
    func_0887FC68(arg0->unk_14->unk_36B08 + 0x1A00, *func_0885356C(arg1, 0, 1, 4));
    func_08852F00(arg1, 0);
}

}
