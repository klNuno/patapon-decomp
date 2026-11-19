#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *arg0) { return arg0; }

struct T {
    s32 unk_00;
    s32 unk_04;

    T(const T &arg0) : unk_00(arg0.unk_00), unk_04(arg0.unk_04) {}
};

struct S {
    u8 pad_00[0x1004];
    T *unk_1004;
    s32 unk_1008;
};

S *func_0896B17C(S *arg0, const S *arg1) {
    const T *temp;
    T *temp2;
    T **temp3;
    s32 *temp4;

    arg0->unk_1004 = (T *)((u32)arg0 + ((u32)arg0 & 3));
    arg0->unk_1008 = arg1->unk_1008;
    temp2 = arg0->unk_1004;
    temp = arg1->unk_1004;
    temp3 = &arg0->unk_1004;
    if ((u32)temp2 != (u32)(temp2 + arg0->unk_1008)) {
        temp4 = &arg0->unk_1008;
        do {
            new (temp2) T(*temp++);
            temp2++;
        } while (temp2 != *temp3 + *temp4);
    }
    return arg0;
}

}
