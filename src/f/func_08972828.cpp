#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x24];
    u32 unk_24;
    s32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
} T;

void func_08972D04(T *arg0, s32 arg1, f32 arg2);
void func_08972DCC(T *arg0, f32 arg1);

static inline void func_08972828_00(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 2, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_01(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 0, 0.5f);
        return;
    case 1:
        func_08972D04(arg0, 2, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_02(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 2, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_03(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 0, 1.0f);
        return;
    case 1:
        func_08972D04(arg0, 2, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_04(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 2, 1.0f);
        return;
    case 1:
        func_08972D04(arg0, 1, 0.5f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_05(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 0, 0.5f);
        return;
    case 1:
        func_08972D04(arg0, 2, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_06(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 1, 0.5f);
        return;
    case 1:
        func_08972D04(arg0, 2, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_07(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 0, 0.5f);
        return;
    case 1:
        func_08972D04(arg0, 1, 0.5f);
        return;
    case 2:
        func_08972D04(arg0, 2, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_08(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 3, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_09(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 0, 0.5f);
        return;
    case 1:
        func_08972D04(arg0, 3, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_0A(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 3, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_0B(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 0, 1.0f);
        return;
    case 1:
        func_08972D04(arg0, 3, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_0C(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972DCC(arg0, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_0D(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972DCC(arg0, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_0E(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972DCC(arg0, 1.0f);
        return;
    case 1:
        func_08972DCC(arg0, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_0F(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, 0, 0.5f);
        return;
    case 1:
        func_08972DCC(arg0, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

static inline void func_08972828_10(T *arg0)
{
    switch (arg0->unk_28) {
    case 0:
        func_08972D04(arg0, -1, 1.0f);
        return;
    default:
        arg0->unk_28 = -1;
        return;
    }
}

void func_08972828(T *arg0)
{
    if (arg0->unk_28 >= 0 && !((arg0->unk_30 -= 1.0f / 30.0f) >= 0.0f)) {
        switch (arg0->unk_24) {
        case 0:
            func_08972828_00(arg0);
            break;
        case 1:
            func_08972828_01(arg0);
            break;
        case 2:
            func_08972828_02(arg0);
            break;
        case 3:
            func_08972828_03(arg0);
            break;
        case 4:
            func_08972828_04(arg0);
            break;
        case 5:
            func_08972828_05(arg0);
            break;
        case 6:
            func_08972828_06(arg0);
            break;
        case 7:
            func_08972828_07(arg0);
            break;
        case 10:
        case 14:
            func_08972828_08(arg0);
            break;
        case 11:
        case 15:
            func_08972828_09(arg0);
            break;
        case 12:
        case 16:
            func_08972828_0A(arg0);
            break;
        case 13:
        case 17:
            func_08972828_0B(arg0);
            break;
        case 20:
            func_08972828_0C(arg0);
            break;
        case 21:
            func_08972828_0D(arg0);
            break;
        case 22:
            func_08972828_0E(arg0);
            break;
        case 23:
            func_08972828_0F(arg0);
            break;
        case 8:
        case 9:
        case 18:
        case 19:
            break;
        default:
            func_08972828_10(arg0);
            break;
        }
    }
}

}
