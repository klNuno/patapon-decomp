#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_088F481C;

typedef struct {
    u8 pad_00[0x24];
    V_088F481C unk_24;
    u8 pad_2C[0x4];
} M_088F481C;

typedef struct {
    u8 pad_00[0x2760];
    void *unk_2760;
    u8 pad_2764[0xC];
    u8 unk_2770[0x1220];
    u8 unk_3990[0x750];
    u8 unk_40E0[0x240];
    u8 unk_4320[0x790];
    M_088F481C unk_4AB0;
    M_088F481C unk_4AE0;
    u8 unk_4B10[0x1058];
    u8 unk_5B68[4];
} T_088F481C;

extern u8 D_08A466B4[];
void func_0880416C(void *);
void func_08925D14(void *, s32);
void func_089ADD74(void *, s32);
void func_089AEE5C(void *, s32);
void func_089AF9E8(void *, s32);
void func_089AF1C4(void *, s32);
void func_089AF5D4(void *, s32);

T_088F481C *func_088F481C(T_088F481C *arg0, s16 arg1) {
    s32 *p;
    V_088F481C *v;

    if (arg0 != NULL) {
        arg0->unk_2760 = D_08A466B4;
        func_08925D14(arg0->unk_5B68, -1);
        func_08925D14(arg0->unk_4B10, -1);
        if (&arg0->unk_4AE0 != NULL) {
            v = &arg0->unk_4AE0.unk_24;
            p = arg0->unk_4AE0.unk_24.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_4AE0.unk_24.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_4AE0.unk_24.unk_04);
            }
            arg0->unk_4AE0.unk_24.unk_04 = 0;
        }
        if (&arg0->unk_4AB0 != NULL) {
            v = &arg0->unk_4AB0.unk_24;
            p = arg0->unk_4AB0.unk_24.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_4AB0.unk_24.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_4AB0.unk_24.unk_04);
            }
            arg0->unk_4AB0.unk_24.unk_04 = 0;
        }
        func_089AEE5C(arg0->unk_4320, -1);
        func_089AF9E8(arg0->unk_40E0, -1);
        func_089AF1C4(arg0->unk_3990, -1);
        func_089AF5D4(arg0->unk_2770, -1);
        func_089ADD74(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
