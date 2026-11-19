#include "common.h"

extern "C" {
class T {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[0x2770];
    T unk_2770;
    u8 pad_27CC[0x11B4];
    T unk_3980;
    u8 pad_39DC[0xE64];
    T unk_4840;
    u8 pad_489C[0x1484];
    T unk_5D20;
} U;

void func_089ADE68(void *);

void func_088F5520(U *arg0) {
    arg0->unk_2770.unk_0C();
    arg0->unk_3980.unk_0C();
    arg0->unk_4840.unk_0C();
    arg0->unk_5D20.unk_0C();
    func_089ADE68(arg0);
}
}
