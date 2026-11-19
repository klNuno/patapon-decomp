#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

class T {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual V *unk_28();
};

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
    u8 pad_14[4];
    V unk_18;
    u8 pad_20[8];
    u8 unk_28;
} G;

V *func_088F32E0(G *arg0) {
    T *temp = arg0->unk_10;
    if (temp != NULL && arg0->unk_28 != 0) {
        arg0->unk_18 = *temp->unk_28();
    }
    return &arg0->unk_18;
}

}
