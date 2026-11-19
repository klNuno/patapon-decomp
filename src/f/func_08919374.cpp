#include "common.h"

extern "C" {
struct T {
    T *unk_00;
    u8 pad_04[4];
    u8 unk_08[1];
};

typedef void (*F)(void *);


static inline s32 eq(T *arg0, T *arg1)
{
    return arg0 == arg1;
}

struct U {};

static inline bool ne(T *arg0, T *arg1, const U &, const U &)
{
    return !(bool)eq(arg0, arg1);
}

struct V {
    T *unk_00;
};

F func_08919374(V arg0, V arg1, F arg2)
{
    if (ne(arg0.unk_00, arg1.unk_00, U(), U())) {
        do {
            arg2(arg0.unk_00->unk_08);
            arg0.unk_00 = arg0.unk_00->unk_00;
        } while (ne(arg0.unk_00, arg1.unk_00, U(), U()));
    }
    return arg2;
}
}
