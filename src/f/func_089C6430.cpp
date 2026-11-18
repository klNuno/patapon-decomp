#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8];
    u32 unk_08;
    u8 pad_0C[0x4];
} B_089C6430;

typedef struct {
    u8 pad_00[0x44];
    B_089C6430 **unk_44;
    u32 unk_48;
} T_089C6430;

struct O_089C6430 {
    T_089C6430 *unk_00;
    B_089C6430 *unk_04;
    B_089C6430 *unk_08;
    u32 unk_0C;
    u32 unk_10;
    u32 unk_14;
    s32 unk_18;
    s32 unk_1C;

    int next() {
        u32 i = ++unk_10;
        if (unk_00->unk_48 <= i) {
            return 1;
        }
        B_089C6430 *b = unk_00->unk_44[i];
        unk_04 = b;
        unk_08 = b + 1;
        unk_0C = 0;
        unk_14 = 0;
        unk_1C = 0;
        return 0;
    }
};

void func_089C6524(O_089C6430 *);

s32 func_089C6430(O_089C6430 *arg0) {
    if (++arg0->unk_14 >= arg0->unk_08->unk_08) {
        arg0->unk_18 += arg0->unk_08->unk_08;
        arg0->unk_08 = arg0->unk_08 + arg0->unk_08->unk_08 + 1;
        arg0->unk_0C++;
        arg0->unk_14 = 0;
        arg0->unk_1C = 0;
        func_089C6524(arg0);
        if (arg0->unk_0C >= arg0->unk_04->unk_08) {
            if (arg0->next() != 0) {
                return 3;
            }
            return 2;
        }
        return 1;
    }
    return 0;
}

}
