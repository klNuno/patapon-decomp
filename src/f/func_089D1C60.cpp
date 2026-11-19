#include "common.h"

extern "C" {
class U {
public:
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

typedef struct {
    u8 pad_00[0x8494];
    U *unk_8494;
    u8 pad_8498[0x85A0];
    u8 unk_10A38;
} T;

void func_089D1C60(T *arg0) {
    if (arg0->unk_10A38 != 0) {
        arg0->unk_8494->unk_18();
    }
}
}
