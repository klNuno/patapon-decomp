#include "common.h"

extern "C" {

class T0 {
public:
    u8 pad_00[0x10];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual f32 unk_24(s32);
};

typedef struct {
    u8 pad_00[0x40];
    T0 *unk_40;
    u8 pad_44[8];
    s32 unk_4C;
    u8 pad_50[8];
    f32 unk_58;
    f32 unk_5C;
} T;

void func_08866350(T *arg0, f32 arg1) {
    T0 *temp = arg0->unk_40;
    if (temp != NULL) {
        f32 unk_00;
        temp->unk_20();
        unk_00 = arg0->unk_40->unk_24(arg0->unk_4C);
        arg0->unk_5C = unk_00;
        if (arg1 <= unk_00) {
            arg0->unk_58 = arg1;
        }
    }
}

}
