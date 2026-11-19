#include "common.h"

extern "C" {
void func_088A6A00(void *, void *);

struct T {
    T *unk_00;
    u8 pad_04[4];
    u8 unk_08[1];
};

struct U {
    u8 pad_00[0xD94];
    u8 unk_D94[1];
};

struct I {
    T *unk_00;
};

static inline s32 ne(I arg0, I arg1)
{
    return (arg0.unk_00 == arg1.unk_00) ^ 1;
}

struct V {
    U *unk_00;
};

void func_088A6984(U **arg0, I arg1, I arg2, V arg3)
{
    if (ne(arg1, arg2)) {
        do {
            func_088A6A00(arg3.unk_00->unk_D94, arg1.unk_00->unk_08);
            arg1.unk_00 = arg1.unk_00->unk_00;
        } while (ne(arg1, arg2));
    }
    *arg0 = arg3.unk_00;
}
}
