#include "common.h"

extern "C" {

struct V {
    virtual void unk_08();
    virtual s32 unk_0C();
};

struct T {
    u8 pad_00[8];
    V *unk_08;
    u8 pad_0C[0x10];
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
};

s32 *func_0884EBA0(s32, s32);
f32 *func_0884EBB0(s32, s32);

s32 func_08971F60(T *arg0, s32 arg1) {
    s32 temp = arg0->unk_08->unk_0C();
    switch (arg1) {
    case 0:
        arg0->unk_1C = *func_0884EBA0(temp, 0x19);
        arg0->unk_20 = *func_0884EBA0(temp, 0x1A);
        arg0->unk_24 = *func_0884EBA0(temp, 0x1B);
        arg0->unk_28 = *func_0884EBA0(temp, 0x1C);
        arg0->unk_2C = *func_0884EBA0(temp, 0x1D);
        arg0->unk_30 = *func_0884EBB0(temp, 0xE);
        arg0->unk_34 = *func_0884EBB0(temp, 0xF);
        arg0->unk_38 = *func_0884EBB0(temp, 0x10);
        return 1;
    case 1:
        arg0->unk_1C = *func_0884EBA0(temp, 0x1E);
        arg0->unk_20 = *func_0884EBA0(temp, 0x1F);
        arg0->unk_24 = *func_0884EBA0(temp, 0x20);
        arg0->unk_28 = *func_0884EBA0(temp, 0x21);
        arg0->unk_2C = *func_0884EBA0(temp, 0x22);
        arg0->unk_30 = *func_0884EBB0(temp, 0x11);
        arg0->unk_34 = *func_0884EBB0(temp, 0x12);
        arg0->unk_38 = *func_0884EBB0(temp, 0x13);
        return 1;
    case 2:
        arg0->unk_1C = *func_0884EBA0(temp, 0x23);
        arg0->unk_20 = *func_0884EBA0(temp, 0x24);
        arg0->unk_24 = *func_0884EBA0(temp, 0x25);
        arg0->unk_28 = *func_0884EBA0(temp, 0x26);
        arg0->unk_2C = *func_0884EBA0(temp, 0x27);
        arg0->unk_30 = *func_0884EBB0(temp, 0x14);
        arg0->unk_34 = *func_0884EBB0(temp, 0x15);
        arg0->unk_38 = *func_0884EBB0(temp, 0x16);
        return 1;
    case 3:
        arg0->unk_1C = *func_0884EBA0(temp, 0x28);
        arg0->unk_20 = *func_0884EBA0(temp, 0x29);
        arg0->unk_24 = *func_0884EBA0(temp, 0x2A);
        arg0->unk_28 = *func_0884EBA0(temp, 0x2B);
        arg0->unk_2C = *func_0884EBA0(temp, 0x2C);
        arg0->unk_30 = *func_0884EBB0(temp, 0x17);
        arg0->unk_34 = *func_0884EBB0(temp, 0x18);
        arg0->unk_38 = *func_0884EBB0(temp, 0x19);
        return 1;
    case 4:
        arg0->unk_1C = *func_0884EBA0(temp, 0x2D);
        arg0->unk_20 = *func_0884EBA0(temp, 0x2E);
        arg0->unk_24 = *func_0884EBA0(temp, 0x2F);
        arg0->unk_28 = *func_0884EBA0(temp, 0x30);
        arg0->unk_2C = *func_0884EBA0(temp, 0x31);
        arg0->unk_30 = *func_0884EBB0(temp, 0x1A);
        arg0->unk_34 = *func_0884EBB0(temp, 0x1B);
        arg0->unk_38 = *func_0884EBB0(temp, 0x1C);
        return 1;
    case 5:
        arg0->unk_1C = *func_0884EBA0(temp, 0x32);
        arg0->unk_20 = *func_0884EBA0(temp, 0x33);
        arg0->unk_24 = *func_0884EBA0(temp, 0x34);
        arg0->unk_28 = *func_0884EBA0(temp, 0x35);
        arg0->unk_2C = *func_0884EBA0(temp, 0x36);
        arg0->unk_30 = *func_0884EBB0(temp, 0x1D);
        arg0->unk_34 = *func_0884EBB0(temp, 0x1E);
        arg0->unk_38 = *func_0884EBB0(temp, 0x1F);
        return 1;
    default:
        return 0;
    }
}

}
