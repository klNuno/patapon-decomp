#include "common.h"

typedef struct {
    u8 pad_00[0x100C];
} T0;

typedef struct {
    s32 unk_00;
    T0 unk_04;
} T;

void func_0896B17C(T0 *, const T0 *);
void func_0896B0F0(T0 *, const T0 *);
void func_089694AC(T0 *, s16);

void func_0896B084(T *arg0, T *arg1) {
    T0 temp;
    s32 unk_00 = arg0->unk_00;
    arg0->unk_00 = arg1->unk_00;
    arg1->unk_00 = unk_00;
    func_0896B17C(&temp, &arg0->unk_04);
    func_0896B0F0(&arg0->unk_04, &arg1->unk_04);
    func_0896B0F0(&arg1->unk_04, &temp);
    func_089694AC(&temp, -1);
}
