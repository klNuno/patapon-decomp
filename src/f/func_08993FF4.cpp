#include "common.h"

extern "C" {

class S;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[8];
    void (S::*unk_14)(s32, s32);
    S *unk_20;
} T;

void func_08993FF4(T *arg0, s32 arg1) {
    if (arg0->unk_20 != NULL && arg0->unk_14 != NULL) {
        (arg0->unk_20->*arg0->unk_14)(arg1, arg0->unk_08);
    }
}

}
