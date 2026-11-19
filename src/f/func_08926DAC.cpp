#include "common.h"

extern "C" {

typedef struct T T;

struct T {
    T *unk_00;
    T *unk_04;
    u8 pad_08[4];
    T *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
};

inline s32 func_08926DAC_00(T *arg0, T *arg1) {
    if (arg0->unk_00 != arg0) {
        arg1->unk_00 = arg0->unk_00;
        arg0->unk_00->unk_04 = arg1;
        arg0->unk_00 = arg1;
        return 1;
    }
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg1;
    arg1->unk_00 = arg0;
    return 1;
}

void func_08926DAC(T *arg0, T *arg1) {
    if (arg0 != arg1) {
        s32 temp = func_08926DAC_00(arg0, arg1);
        arg1->unk_04 = arg0;
        if (temp != 0) {
            arg1->unk_0C = arg0;
            arg0->unk_20++;
        }
    }
}

}
