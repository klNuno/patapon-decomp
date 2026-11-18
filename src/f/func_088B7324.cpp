#include "common.h"

extern "C" {

class C_088B7324 {
public:
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(u32, s32);
    u8 pad_84[0xC];
};

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20[19];
} T_088B7324;

typedef struct {
    u8 pad_00[0x30];
    C_088B7324 unk_30[2];
    T_088B7324 *unk_150[2];
    u8 pad_158[0x48];
    u32 unk_1A0;
} S_088B7324;

u8 func_088B7324(S_088B7324 *arg0, s32 arg1, s32 arg2) {
    u8 found = 0;
    u32 i;
    u32 j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 19; j++) {
            if (arg1 == arg0->unk_150[i]->unk_20[j]) {
                arg0->unk_1A0 = i;
                arg0->unk_30[arg0->unk_1A0].v3(j + 1, arg2);
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }
    return found;
}

}
