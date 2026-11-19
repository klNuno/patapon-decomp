#include "common.h"

extern "C" {
void func_08812C68(s32 *, u32, s8);

struct S { s8 unk_00; };
struct T {};

static inline void func_08812570_inline(s32 *arg0, u32 arg1, s8 arg2, const T &)
{
    func_08812C68(arg0, arg1, arg2);
}

void func_08812570(s32 *arg0, s32 arg1, u32 arg2, S arg3)
{
    func_08812570_inline(arg0, arg2, arg3.unk_00, T());
}
}
