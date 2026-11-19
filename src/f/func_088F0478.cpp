#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32);
    virtual void unk_14();
    virtual void unk_18(f32);
};

typedef struct {
    u8 pad_00[0x18];
    T *unk_18;
} S;

void func_08852F00(void *, s32);

void func_088F0478(S *arg0, void *arg1) {
    func_08852F00(arg1, 0);
    arg0->unk_18->unk_18(0.0f);
    arg0->unk_18->unk_10(1);
}

}
