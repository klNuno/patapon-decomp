#include "common.h"

extern "C" {

typedef struct Node_08965AA0 {
    u8 pad_00[0x4];
    struct Node_08965AA0 *unk_04;
    void *unk_08;
} Node_08965AA0;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} Item_08965AA0;

class C_08965AA0_30 {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
};

class C_08965AA0 {
public:
    u8 pad_00[0x30];
    C_08965AA0_30 unk_30;
    u8 pad_34[0xB0];
    Node_08965AA0 *unk_E4;
    u8 pad_E8[0x18];
    u32 unk_100;

    Item_08965AA0 *Get(s32 i) {
        struct {
            Node_08965AA0 *unk_00;
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
        return (Item_08965AA0 *)it.unk_00->unk_08;
    }
};

void func_088812A4(s32, s32);

s32 func_08965AA0(C_08965AA0 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 n;
    s32 p;

    i = 0;
    n = arg0->unk_30.unk_0C();
    if (arg1 >= 0) {
        i = arg1;
        n = arg1 + 1;
    }
    for (; i < n; i++) {
        p = arg0->Get(i)->unk_08;
        if (p == 0) {
            return 0;
        }
        func_088812A4(p, arg2);
    }
    return 1;
}

}
