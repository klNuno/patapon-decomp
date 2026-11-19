#include "common.h"

extern "C" {

typedef struct T_08949C24 {
    s64 unk_00[11];
    s8 unk_58[0x100];
    s32 unk_158;
    s32 unk_15C;
} T_08949C24;

typedef struct S_08949C24 {
    u8 pad_00[8];
    T_08949C24 unk_08;
} S_08949C24;

struct W_08949C24 {
    u8 pad_00[16];
    T_08949C24 unk_10;
    W_08949C24(const T_08949C24 &arg0) : unk_10(arg0) {}
};

void func_08949C24(S_08949C24 *arg0, S_08949C24 *arg1) {
    T_08949C24 *a;
    T_08949C24 *b = &arg1->unk_08;
    a = &arg0->unk_08;
    W_08949C24 temp(*a);

    *a = *b;
    *b = temp.unk_10;
}

}
