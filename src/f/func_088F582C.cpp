#include "common.h"

extern "C" {

class T0 {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20(s32);
};

typedef struct {
    u8 pad_00[0x2770];
    T0 unk_2770;
} T1;

extern s32 func_089AE248(s32);

void func_088F582C(T1 *arg0) {
    func_089AE248((s32)arg0);
    arg0->unk_2770.unk_20(1);
}

}
