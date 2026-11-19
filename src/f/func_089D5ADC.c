#include "common.h"

typedef struct S_089D5E1C S_089D5E1C;

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[1];
} T;

extern void *D_08A8812C[];
s32 func_08860820(void *, s32);
void func_089D5E1C(S_089D5E1C *arg0);

s32 func_089D5ADC(T *arg0) {
    void *temp;
    if (arg0->unk_1510 == 1) {
        return 1;
    }
    temp = D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL;
    if (func_08860820(temp, 0) != 0) {
        return 0;
    }
    arg0->unk_1510 = 1;
    func_089D5E1C((S_089D5E1C *)arg0->unk_1514);
    return 1;
}
