#include "common.h"

typedef struct T0 {
    u8 pad_00[4];
    struct T0 *volatile unk_04;
} T0;

void func_08966298(s32 *, T0 *);
void func_089660B4(s32 *, T0 *, s32);

T0 *func_089691F8(T0 *arg0) {
    s32 temp0[2];
    s32 temp1;
    T0 *temp;

    if (arg0->unk_04 == arg0) {
        return 0;
    }
    temp = arg0->unk_04;
    func_08966298(&temp1, arg0);
    func_089660B4(temp0, arg0, temp1);
    return temp;
}
