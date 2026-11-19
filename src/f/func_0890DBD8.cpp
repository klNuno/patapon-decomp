#include "common.h"

extern "C" {
class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[0x74A4];
    u8 *unk_74A4;
    s32 unk_74A8;
    u8 pad_74AC[0x6024];
    A unk_7D4D0;
} S;

void func_0890DBD8(S *arg0) {
    u8 *temp;
    s32 temp3;
    u8 **temp2;
    u8 *temp4;

    ((A *)&((u8 *)arg0)[0x7D4D0])->unk_0C();
    temp = arg0->unk_74A4;
    temp2 = &arg0->unk_74A4;
    temp3 = arg0->unk_74A8 * 0x74;
    if ((u32)temp != (u32)(temp + temp3)) {
        temp4 = *(u8 *volatile *)temp2 + temp3;
        do {
            temp += 0x74;
        } while (temp != temp4);
    }
    arg0->unk_74A8 = 0;
}
}
