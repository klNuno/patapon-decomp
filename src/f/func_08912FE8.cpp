#include "common.h"
extern "C" {
struct T0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
};

void func_0891300C(void *, const T0 *);

void func_08912FE8(void *arg0) {
    T0 temp;
    temp.unk_00 = 0;
    temp.unk_04 = 0;
    func_0891300C(arg0, &temp);
}
}
