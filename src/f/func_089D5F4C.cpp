#include "common.h"

extern "C" {

class C_089D5F4C {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

typedef struct {
    C_089D5F4C *unk_00;
    u8 pad_04[0x8];
    u8 unk_0C[0x4];
    void *unk_10[2];
    s32 unk_18;
} S089D5F4C;

void func_088148F0(s32, s32);
void func_0893F444(void *);
void func_0893F4EC(void *);

void func_089D5F4C(S089D5F4C *arg0) {
    u32 i;

    func_0893F4EC(arg0->unk_0C);
    func_0893F444(arg0->unk_0C);
    func_088148F0(4, 0);
    for (i = 0; i < 2; i++) {
        if (arg0->unk_10[i] != NULL) {
            arg0->unk_00->unk_10(arg0->unk_10[i]);
            arg0->unk_10[i] = NULL;
        }
    }
    arg0->unk_18 = 0;
}

}
