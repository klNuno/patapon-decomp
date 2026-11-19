#include "common.h"

extern "C" {

class Unk1 {
public:
    u8 pad_00[0x15C];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

typedef struct {
    u8 pad_00[0x20];
    Unk1 *unk_20;
    u8 pad_24[0x30];
    u8 unk_54;
} Unk2;

void func_0898A2E0(Unk2 *arg0) {
    arg0->unk_20->unk_18();
    arg0->unk_54 = 1;
}

}
