#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} T;

extern void func_0895B1D8(void *, s32, T *, s32);

s32 func_0895DDE8(u8 *arg0) {
    T temp;
    temp.unk_00 = 5;
    temp.unk_08 = 2;
    temp.unk_04 = 0;
    temp.unk_0C = 0;
    func_0895B1D8(arg0 + 0x184, 1, &temp, sizeof(temp));
    return 1;
}
