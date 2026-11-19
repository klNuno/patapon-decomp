#include "common.h"

typedef struct T08867784 {
    u8 pad_00[4];
    struct T08867784 *volatile unk_04;
} T08867784;

void func_08867A94(s32 *, T08867784 *);
void func_088678B0(s32 *, T08867784 *, s32);

T08867784 *func_08867BE0(T08867784 *arg0) {
    s32 temp0[2];
    s32 temp1;
    T08867784 *temp;

    if (arg0->unk_04 == arg0) {
        return 0;
    }
    temp = arg0->unk_04;
    func_08867A94(&temp1, arg0);
    func_088678B0(temp0, arg0, temp1);
    return temp;
}
