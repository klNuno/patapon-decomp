#include "common.h"

extern "C" {

struct T0 {
    T0 *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
};

struct T1 {
    T0 *unk_00;

    s32 unk_04(const T1 &arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(const T1 &arg0) const { return !(bool)unk_04(arg0); }
};

typedef struct {
    u8 pad_00[0x3014];
    T0 *unk_3014;
} T2;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} T;

T2 *func_088E0F08(s32);
void func_088E249C(s32, s32);

void func_088F3FCC(T *arg0) {
    T1 temp;
    T1 temp2;
    T2 *temp3 = func_088E0F08(arg0->unk_04);

    temp.unk_00 = temp3->unk_3014;
    temp2.unk_00 = (T0 *)&temp3->unk_3014;
    if (temp.unk_08(temp2)) {
        do {
            func_088E249C(temp.unk_00->unk_10, 0);
            temp.unk_00 = temp.unk_00->unk_00;
        } while (temp.unk_08(temp2));
    }
}

}
