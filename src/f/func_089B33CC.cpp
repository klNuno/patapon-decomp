#include "common.h"

extern "C" {
class T {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[0x48];
    T **unk_48;
    u32 unk_4C;
} S;

void func_089B33CC(S *arg0) {
    u32 temp = 0;

    if (arg0->unk_4C != 0) {
        u32 temp2 = 0;
        T ***temp3 = &arg0->unk_48;
        do {
            (*(T **)((u8 *)*temp3 + temp2))->unk_0C();
            temp++;
            temp2 += 4;
        } while (temp < arg0->unk_4C);
    }
}
}
