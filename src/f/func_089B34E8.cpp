#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

typedef struct {
    u8 pad_00[0x48];
    T **unk_48;
    u32 unk_4C;
} S;

void func_089B34E8(S *arg0) {
    u32 temp;
    u32 temp1;
    T ***temp2;
    temp = 0;
    if (temp < arg0->unk_4C) {
        temp1 = 0;
        temp2 = &arg0->unk_48;
        do {
            (*(T **)((u8 *)*temp2 + temp1))->unk_18();
            ++temp;
            temp1 += sizeof(T *);
        } while (temp < arg0->unk_4C);
    }
}

}
