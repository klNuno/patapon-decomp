#include "common.h"

extern "C" {

class S {
public:
    u8 pad_00[0x2760];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
};

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} T;

S *func_089AE5B0(void);

void func_089AE564(T *arg0, s32 arg1) {
    arg0->unk_08 = arg1;
    func_089AE5B0()->unk_24();
}

}
