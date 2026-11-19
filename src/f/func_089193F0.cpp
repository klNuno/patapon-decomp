#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
} N;

static inline s32 unk_00(N *arg0, N *arg1)
{
    return arg0 == arg1;
}

static inline bool unk_04(N *arg0, N *arg1)
{
    return !(bool)unk_00(arg0, arg1);
}

s32 func_089193F0(N *arg0, N *arg1)
{
    s32 temp = 0;

    if (unk_04(arg0, arg1)) {
        do {
            arg0 = arg0->unk_00;
            temp++;
        } while (unk_04(arg0, arg1));
    }
    return temp;
}

}
