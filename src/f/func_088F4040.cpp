#include "common.h"

extern "C" {

struct N {
    N *unk_00;
    u8 pad_04[0xC];
    char *unk_10;
};

struct I {
    N *unk_00;
    s32 unk_04(N *arg0) const { return unk_00 == arg0; }
    bool unk_08(N *arg0) const { return !(bool)unk_04(arg0); }
};

typedef struct {
    u8 pad_00[0x3014];
    N unk_3014;
} T;

typedef struct {
    u8 pad_00[4];
    char *unk_04;
} S;

s32 func_088E0F08(char *);
void func_088E24AC(char *arg0, s8 arg1);

void func_088F4040(S *arg0) {
    I temp;
    T *temp2 = (T *)func_088E0F08(arg0->unk_04);
    temp.unk_00 = temp2->unk_3014.unk_00;
    N *temp3 = &temp2->unk_3014;

    if (temp.unk_08(temp3)) {
        do {
            func_088E24AC(temp.unk_00->unk_10, 0);
            temp.unk_00 = temp.unk_00->unk_00;
        } while (temp.unk_08(temp3));
    }
}

}
