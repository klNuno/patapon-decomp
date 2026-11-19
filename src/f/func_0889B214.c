#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
    u8 pad_20[4];
    f32 unk_24;
} T;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
extern f32 func_0897CD20(void *, s32);
extern s32 func_0897CD40(void *, s32);

void func_0889B214(T *arg0, s32 arg1) {
    arg0->unk_24 = func_0897CD20(func_089B53D8(func_088586E8()) + 0x644, arg1);
    arg0->unk_1C = func_0897CD40(func_089B53D8(func_088586E8()) + 0x644, arg1);
}
