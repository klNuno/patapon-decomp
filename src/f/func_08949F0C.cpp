#include "common.h"

extern "C" {

typedef struct E08949F64 {
    u32 unk_00;
} E08949F64;

typedef struct N08949F64 {
    struct N08949F64 *unk_00;
    u8 pad_04[4];
    E08949F64 unk_08;
} N08949F64;

typedef struct O08949F64 {
    u8 pad_00[0x108];
    E08949F64 *unk_108;
    u8 pad_10C[0x514 - 0x10C];
    s32 unk_514;
    s32 unk_518;
    u8 pad_51C[0x1753C - 0x51C];
    N08949F64 *unk_1753C;
} O08949F64;

void func_08949F64(O08949F64 *);

void func_08949F0C(O08949F64 *arg0) {
    struct { N08949F64 *unk_00; } it;
    E08949F64 *temp;
    s32 n;

    it.unk_00 = arg0->unk_1753C;
    n = arg0->unk_518 + arg0->unk_514;
    while (n != 0) {
        n--;
        it.unk_00 = it.unk_00->unk_00;
    }
    temp = &it.unk_00->unk_08;
    if (temp->unk_00 & 0x1000) {
        func_08949F64(arg0);
    } else {
        arg0->unk_108 = temp;
    }
}

}
