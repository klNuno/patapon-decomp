#include "common.h"

typedef struct {
    u8 pad_00[0xA175C];
    s32 unk_A175C;
    s32 unk_A1760;
    u8 pad_A1764[4];
    u8 unk_A1768[0x10A48];
    u8 unk_B21B0;
} T088DEBA8;

void func_089C66F0(void *, s32, s32, s32);
extern s32 func_089C6964(void *, s32);
void func_089C6974(void *, s32);

void func_088DEBA8(T088DEBA8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    arg0->unk_B21B0 = 1;
    arg0->unk_A175C = -1;
    arg0->unk_A1760 = arg1;
    func_089C66F0(arg0->unk_A1768, arg3, arg4, arg5);
    func_089C6964(arg0->unk_A1768, arg6);
    func_089C6974(arg0->unk_A1768, arg2);
}
