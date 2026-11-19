#include "common.h"

extern "C" {

s32 *func_08810674(s32 *);
s32 func_08810698(s32 *);
void func_088128A4(void);
u32 func_08812C00(void *);
s32 func_08812CD8(s32, u32, s32);

struct Unk00 {};

static inline s32 func_08812C68_inline(s32 arg0, u32 arg1, const Unk00 &) {
    return func_08812CD8(arg0, arg1, 0);
}

void func_08812C68(s32 *arg0, u32 arg1) {
    if (func_08812C00(arg0) < arg1) {
        func_088128A4();
    }
    *arg0 = func_08812C68_inline(func_08810698(arg0), arg1, Unk00());
    *func_08810674(arg0) = arg1;
}

}
