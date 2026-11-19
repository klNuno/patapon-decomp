#include "common.h"

typedef struct T089625D0 {
    u8 pad_00[4];
    struct T089625D0 *volatile unk_04;
} T089625D0;

void func_08962320(s32 *, T089625D0 *);
void func_089622B0(s32 *, T089625D0 *, s32);

T089625D0 *func_08962A54(T089625D0 *arg0) {
    struct { s32 unk_00; s32 unk_04; } temp;
    s32 temp2;
    T089625D0 *temp3 = arg0->unk_04;
    T089625D0 *temp4 = arg0;
    if (temp3 == temp4) {
        return NULL;
    }
    temp3 = temp4->unk_04;
    func_08962320(&temp2, temp4);
    func_089622B0(&temp.unk_00, temp4, temp2);
    return temp3;
}
