#include "common.h"

extern "C" {

typedef struct Unk Unk;

struct Unk {
    Unk *unk_00;
};

inline s32 func_089799BC_00(Unk *arg0, Unk *arg1)
{
    return arg0 == arg1;
}

inline bool func_089799BC_04(Unk *arg0, Unk *arg1)
{
    return !(bool)func_089799BC_00(arg0, arg1);
}

u32 func_089799BC(Unk *arg0, Unk *arg1)
{
    u32 temp = 0;
    if (func_089799BC_04(arg0, arg1)) {
        do {
            arg0 = arg0->unk_00;
            temp++;
        } while (func_089799BC_04(arg0, arg1));
    }
    return temp;
}

}
