#include "common.h"

extern "C" {

typedef struct Node_08965A10 {
    u8 pad_00[0x4];
    struct Node_08965A10 *unk_04;
    void *unk_08;
} Node_08965A10;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} Item_08965A10;

class C_08965A10_30 {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
};

class C_08965A10 {
public:
    u8 pad_00[0x30];
    C_08965A10_30 unk_30;
    u8 pad_34[0xB0];
    Node_08965A10 *unk_E4;
    u8 pad_E8[0x18];
    u32 unk_100;

    Item_08965A10 *Get(s32 i) {
        struct {
            Node_08965A10 *unk_00;
        } it;
        s32 j;

        if ((u32)i >= unk_100) {
            return NULL;
        }
        it.unk_00 = unk_E4;
        for (j = 0; j < i; j++) {
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
        return (Item_08965A10 *)it.unk_00->unk_08;
    }
};

s32 func_08965A10(C_08965A10 *arg0, s32 arg1) {
    if (arg1 >= arg0->unk_30.unk_0C()) {
        return 0;
    }
    return arg0->Get(arg1)->unk_08;
}

}
