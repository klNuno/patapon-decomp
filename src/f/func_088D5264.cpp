#include "common.h"

extern "C" {

class T0 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
};

typedef struct {
    u8 pad_00[0x718];
    s32 unk_718;
    u8 pad_71C[0x18];
    s32 unk_734;
} T;

void func_088D5264(T *arg0) {
    ((T0 *)arg0)->unk_28();
    if (arg0->unk_734 == 0) {
        if (arg0->unk_718 == 4) {
            ((T0 *)arg0)->unk_2C();
        }
    } else {
        ((T0 *)arg0)->unk_2C();
    }
}

}
