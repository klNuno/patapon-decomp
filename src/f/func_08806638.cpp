#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    void *unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
} S_08806638;

void *func_08804338(u32);
void func_08806710(void *);
s32 func_08806744(s32, s32);

void func_08806638(S_08806638 *arg0, s32 arg1) {
    void *p;
    s32 v;

    arg0->unk_24 = arg1;
    arg0->unk_38 = 0;
    v = 1;
    arg0->unk_34 = v;
    if (arg1 != 0) {
        v = 0;
    }
    arg0->unk_34 = v;
    arg0->unk_30 = func_08806744(0x1000, 2);
    arg0->unk_2C = 0;
    arg0->unk_28 = 6;
    arg0->unk_20 = NULL;
    try {
        if ((p = func_08804338(8)) != NULL) {
            func_08806710(p);
        }
        arg0->unk_20 = p;
    } catch (...) {
    }
    if (arg0->unk_20 == NULL) {
        arg0->unk_34 = 1;
    }
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
}

}
