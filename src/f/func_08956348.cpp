#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x22178];
    u8 unk_22178;
} Unk;

void func_08879978(char *, s32);

void func_08956348(u8 *arg0, u32 *arg1)
{
    Unk *temp = (Unk *)(*arg1 + (u32)arg0);
    if (temp->unk_22178 == 0) {
        func_08879978((char *)arg0 + 0x205C, (s32)arg1);
    }
}

}
