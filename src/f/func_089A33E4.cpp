#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x14];
    u32 *unk_14;
    s32 unk_18;
} V_089A33E4;

typedef struct {
    u8 pad_00[0x1058];
    void *unk_1058;
    u8 pad_105C[0x14];
    u8 unk_1070[0x11A0 - 0x1070];
    u8 unk_11A0[0x1B60 - 0x11A0];
    u8 unk_1B60[0x1D10 - 0x1B60];
    u8 unk_1D10[0x90];
    u8 unk_1DA0[0x90];
    u8 unk_1E30[0x90];
    u8 unk_1EC0[0x6D0];
    u8 unk_2590[0x6D0];
    u8 unk_2C60[0x6D0];
    u8 unk_3330[0x6D0];
    u8 unk_3A00[0x6D0];
    u8 unk_40D0[0x6D0];
    u8 unk_47A0[0x4E80 - 0x47A0];
    u8 unk_4E80[0x5004 - 0x4E80];
    u8 unk_5004[0x6488 - 0x5004];
    u8 unk_6488[0x66A4 - 0x6488];
    V_089A33E4 unk_66A4;
    u8 pad_66C0[0x6700 - 0x66C0];
    u8 unk_6700[0x17148 - 0x6700];
    u8 unk_17148[0x27B90 - 0x17148];
    u8 unk_27B90[0x385DC - 0x27B90];
    u8 unk_385DC[0x39634 - 0x385DC];
    u8 unk_39634[0x3A68C - 0x39634];
    u8 unk_3A68C[0x10];
} S_089A33E4;

extern u8 D_08A48680[];
extern u8 D_08A485BC[];
void func_08925D14(void *, s32);
void func_089C6694(void *, s32);
void func_089A1584(void *, s32);
void func_089940E4(void *, s32);
void func_0899F224(void *, s32);
void func_088F23D0(void *, s32);
void func_08865F78(void *, s32);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_089BAD9C(void *, s32);
void func_089A5724(void *, s32);
void func_0880416C(void *);

S_089A33E4 *func_089A33E4(S_089A33E4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_1058 = D_08A48680;
        func_08925D14(arg0->unk_3A68C, -1);
        func_08925D14(arg0->unk_39634, -1);
        func_08925D14(arg0->unk_385DC, -1);
        func_089C6694(arg0->unk_27B90, -1);
        func_089C6694(arg0->unk_17148, -1);
        func_089C6694(arg0->unk_6700, -1);
        if (&arg0->unk_66A4 != NULL) {
            u32 *p = arg0->unk_66A4.unk_14;
            u32 *&data = arg0->unk_66A4.unk_14;
            if ((u32)p != (u32)(p + arg0->unk_66A4.unk_18)) {
                do {
                    p++;
                } while (p != data + arg0->unk_66A4.unk_18);
            }
            arg0->unk_66A4.unk_18 = 0;
        }
        func_089A1584(arg0->unk_6488, -1);
        func_089940E4(arg0->unk_5004, -1);
        func_0899F224(arg0->unk_4E80, -1);
        func_088F23D0(arg0->unk_47A0, -1);
        func_088F23D0(arg0->unk_40D0, -1);
        func_088F23D0(arg0->unk_3A00, -1);
        func_088F23D0(arg0->unk_3330, -1);
        func_088F23D0(arg0->unk_2C60, -1);
        func_088F23D0(arg0->unk_2590, -1);
        func_088F23D0(arg0->unk_1EC0, -1);
        func_08865F78(arg0->unk_1E30, -1);
        func_08865F78(arg0->unk_1DA0, -1);
        func_08865F78(arg0->unk_1D10, -1);
        func_08804000(arg0->unk_1B60, func_08865F78, 0x90, 3);
        func_089BAD9C(arg0->unk_11A0, -1);
        func_089A5724(arg0->unk_1070, -1);
        if (arg0 != NULL) {
            arg0->unk_1058 = D_08A485BC;
            func_08925D14(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
