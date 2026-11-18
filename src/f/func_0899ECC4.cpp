#include "common.h"

extern "C" {

class Alloc_0899ECC4 {
public:
    virtual s32 v0(s32, s32);
};

struct Sub_0899ECC4;
void func_0885DE4C(Sub_0899ECC4 *);

struct Sub_0899ECC4 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    Alloc_0899ECC4 *unk_0C;
    s32 unk_10;
    u8 pad_14[0x14];
    void init(Alloc_0899ECC4 *a, s32 size) {
        s32 p;
        unk_0C = a;
        p = a->v0(size, 0x40);
        func_0885DE4C(this);
        unk_00 = p;
        unk_04 = size;
        unk_08 = 1;
        unk_10 = 0;
    }
};

typedef struct {
    u8 pad_00[0xC];
    Sub_0899ECC4 unk_0C;
    Sub_0899ECC4 unk_34[0x12];
} Struct_0899ECC4;

void func_0899ECC4(Struct_0899ECC4 *arg0, Alloc_0899ECC4 *arg1) {
    u32 i;

    arg0->unk_0C.init(arg1, 0x7A800);
    for (i = 0; i < 0x12; i++) {
        arg0->unk_34[i].init(arg1, 0x3C00);
    }
}

}
