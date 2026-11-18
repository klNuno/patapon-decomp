#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C[0x174];
    u8 unk_190[0x50];
    s32 unk_1E0;
    u8 pad_1E4[0x128];
    u8 unk_30C[0x22E8];
    u8 unk_25F4;
} S_089506F8;

extern f32 D_089EA4D8[];
extern f32 D_089EA4E0[];
extern u8 D_08ADA270[];

void func_0894C888(void *);
void func_0887E1A8(void *);
void func_0887E26C(void *, f32, f32, f32, f32);
void func_08879450(void *, S_089506F8 *, s32);
void func_0894CB08(void *, s32, s32);

void func_089506F8(S_089506F8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk_0C = arg2;
    arg0->unk_14 = arg3;
    arg0->unk_18 = arg4;
    arg0->unk_10 = arg1;
    arg0->unk_1E0 = 0;
    arg0->unk_25F4 = 0;
    func_0894C888(arg0->unk_1C);
    func_0887E1A8(arg0->unk_190);
    func_0887E26C(arg0->unk_190, D_089EA4D8[0], D_089EA4D8[1], D_089EA4E0[0], D_089EA4E0[1]);
    func_08879450(arg0->unk_30C, arg0, arg0->unk_18);
    func_0894CB08(arg0->unk_1C, 0, 0);
    D_08ADA270[0] = 0;
}
