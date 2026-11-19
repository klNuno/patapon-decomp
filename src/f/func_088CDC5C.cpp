#include "common.h"

extern "C" {
typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    char unk_20[1];
} T;

void func_08855354(char *);

struct A {};

inline void func_088CDC5C_00(char *arg0, const A &arg1) {
    func_08855354(arg0);
}

T *func_088CDC5C(T *arg0, s32 arg1) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    func_088CDC5C_00(arg0->unk_20, A());
    return arg0;
}
}
