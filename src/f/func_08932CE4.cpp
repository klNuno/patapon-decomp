#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    char unk_30[0x40];
    s32 unk_70;
    u8 unk_74;
    u8 unk_75;
    u8 pad_76[2];
    void *unk_78;
} S;

extern u8 D_08A47078[];
void func_08855354(char *);

struct E {};

inline S *unk_00(S *arg0, const E &, const E &, const E &, const E &, const E &, const E &, const E &, const E &) {
    arg0->unk_78 = D_08A47078;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    func_08855354(arg0->unk_30);
    arg0->unk_70 = 0;
    arg0->unk_74 = 0;
    arg0->unk_75 = 1;
    return arg0;
}


S *func_08932CE4(S *arg0) {
    return unk_00(arg0, E(), E(), E(), E(), E(), E(), E(), E());
}

}
