#include "common.h"

typedef struct {
    u8 pad_00[0xAC];
    s32 unk_AC;
} Unk;

extern s32 func_08882F6C(s32, s32);
extern void func_0893C4F8(char *);
extern s32 func_088B64A4(s32, s32);

void func_08889044(char *arg0, s32 arg1)
{
    if ((*(Unk **)(arg0 + 0x658))->unk_AC == 1) {
        func_08882F6C(*(s32 *)(arg0 + 0x10), arg1);
    }
    if ((u8)arg1 == 0) {
        func_0893C4F8(arg0 + 0x620);
    }
    func_088B64A4((s32)(arg0 + 0x670), arg1);
    *(u8 *)(arg0 + 0x9F8) = arg1;
}
