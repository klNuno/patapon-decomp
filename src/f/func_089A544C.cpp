#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[4];
    s32 unk_106C;
    u8 pad_1070[0x3E10];
    u8 unk_4E80[1];
} T;

s32 func_08998080(s32, s32);
s32 func_0899A908(s32, s32);
s32 func_089A04FC(void *);

void func_089A544C(T *arg0) {
    s32 temp = func_08998080(arg0->unk_1064, arg0->unk_106C);
    func_0899A908(temp, func_089A04FC(arg0->unk_4E80));
}

}
