#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[0x2438];
    T unk_2438;
    u8 pad_243C[0x6C];
    u8 unk_24A8[0x1C];
    u32 unk_24C4;
} S;

void func_0885DE4C(void *);

void func_08916D38(S *arg0) {
    u32 temp = arg0->unk_24C4;

    if (temp < 2U) {
        temp++;
        arg0->unk_24C4 = temp;
        if (temp == 2) {
            arg0->unk_2438.unk_0C();
            func_0885DE4C(arg0->unk_24A8);
        }
    }
}

}
