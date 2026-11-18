#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
} U;

typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
} V;

typedef struct X {
    u8 pad_00[0x114];
    V *unk_114;
    u8 pad_118[0x288];
    struct X *unk_3A0;
    u8 pad_3A4[0x9DC];
    u8 unk_D80[0x20];
    u8 unk_DA0[0x30];
    s32 unk_DD0;
    u8 pad_DD4[0x6A10];
    f32 unk_77E4;
    u8 pad_77E8[0x1AFC];
    s32 unk_92E4;
} X;

typedef struct {
    u8 unk_00;
    s32 unk_04, unk_08, unk_0C;
    u8 unk_10[4];
    s32 unk_14, unk_18, unk_1C, unk_20, unk_24, unk_28, unk_2C;
    X *unk_30;
    void *unk_34, *unk_38;
    s32 unk_3C;
    f32 unk_40;
} T;

extern void func_0881F5C0(void *, s32, s32);
extern void func_088F5C18(T *, U *);

struct E {};
static inline void func_unk(T *arg0, const E &) {
    func_0881F5C0(arg0->unk_10, 0, 4);
}

static inline void func_unk2(T *arg0, X *arg1, s32 arg2, U *arg3) {
    switch (arg2) {
    case 0:
        arg0->unk_04 = 3;
        break;
    case 2:
        if (arg3 == NULL) {
            arg3 = arg1->unk_114->unk_10;
        }
        if (arg1->unk_3A0 != NULL) {
            func_088F5C18(arg0, arg3);
            arg0->unk_04 = 2;
            arg0->unk_0C = arg3->unk_38;
        }
        break;
    case 1:
        return;
    }
}

s32 func_08897BEC(T *arg0, X *arg1, s32 arg2, U *arg3) {
    X *temp;

    arg0->unk_0C = -1;
    func_unk(arg0, E());
    arg0->unk_00 = 1;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = -1;
    func_0881F5C0(arg0->unk_10, 0, 4);
    arg0->unk_14 = -1;
    arg0->unk_18 = 11;
    arg0->unk_30 = NULL;
    arg0->unk_34 = NULL;
    arg0->unk_38 = NULL;
    arg0->unk_3C = 0;
    arg0->unk_40 = 0.5f;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    if (arg1->unk_3A0 == NULL) {
        return 0;
    }
    temp = arg1->unk_3A0->unk_3A0;
    arg0->unk_14 = arg1->unk_DD0;
    arg0->unk_18 = 2;
    arg0->unk_30 = arg1;
    arg0->unk_34 = arg1->unk_D80;
    arg0->unk_38 = arg1->unk_DA0;
    if (temp->unk_92E4 == 0) {
        arg0->unk_40 = temp->unk_77E4;
    } else {
        arg0->unk_40 = 1.0f;
    }
    func_unk2(arg0, arg1, arg2, arg3);
    return 0;
}
}
