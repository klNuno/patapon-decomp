#include "common.h"

extern "C" {

class C089B3450 {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    C089B3450 **unk_00;
    u32 unk_04;
} V089B3450;

typedef struct {
    u8 pad_00[0x48];
    V089B3450 unk_48;
} T089B3450;

void func_089B3450(T089B3450 *arg0, s32 arg1, s32 arg2) {
    u32 i;
    s32 j;
    V089B3450 *v;

    i = 0;
    if (arg0->unk_48.unk_04 != 0) {
        j = 0;
        v = &arg0->unk_48;
        do {
            (*(C089B3450 **)((u8 *)v->unk_00 + j))->unk_14(arg1, arg2);
            i++;
            j += 4;
        } while (i < arg0->unk_48.unk_04);
    }
}

}
