#include "common.h"

extern "C" {
typedef struct E E;
typedef struct V V;

E *func_08812650(V *, E *, E *, s32);

E *func_08811320(V *arg0, E *arg1, E *arg2) {
    struct { s8 unk_00; } temp = { 0 };
    return func_08812650(arg0, arg1, arg2, temp.unk_00);
}
}
