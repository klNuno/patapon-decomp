#include "common.h"

extern "C" {

class C_0893CD18 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32);
};

typedef struct {
    C_0893CD18 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x4];
    s32 unk_14[2];
    s32 unk_1C;
} S0893CD18;

void func_0893F4EC(void *);
void func_0893F444(void *);
void func_088148F0(s32, s32);

void func_0893CD18(S0893CD18 *arg0) {
    u32 i;

    func_0893F4EC(arg0->unk_10);
    func_0893F444(arg0->unk_10);
    func_088148F0(4, 0);
    for (i = 0; i < 2; i++) {
        if (arg0->unk_14[i] != 0) {
            arg0->unk_00->unk_10(arg0->unk_14[i]);
            arg0->unk_14[i] = 0;
        }
    }
    arg0->unk_1C = 0;
}

}
