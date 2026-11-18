#include "common.h"

typedef struct { u8 pad_00[0x2F5C]; s32 unk_2F5C[12]; } T1;
typedef struct { u8 pad_00[0x80]; void *unk_80[12]; } T2;
typedef struct {
    u8 pad_00[0x390];
    T1 *unk_390;
    u8 pad_394[0x24];
    T2 *unk_3B8;
} T;

s32 func_0882160C(void);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, void *, s32, f32, f32, f32);

static inline u8 func_inline(T1 *arg0, s32 arg1, s32 arg2) {
    s32 *temp = arg0->unk_2F5C;
    if (arg1 == -1) {
        return 0;
    }
    if (arg2 || temp[arg1] == 0) {
        temp[arg1] = 10;
        return 1;
    }
    return 0;
}

void func_08898574(T *arg0, s32 arg1, s32 arg2) {
    u8 temp0;
    void *temp1;
    switch (arg1) {
        case 0: case 1: case 2: case 3: case 4: case 5:
        case 7: case 8: case 9: case 11:
            temp0 = 1;
            break;
        case 6:
        case 10:
            switch (arg1) {
                case 6:
                    func_0882160C();
                case 10:
                    func_0882160C();
                    break;
            }
            temp0 = func_inline(arg0->unk_390, arg1, arg2);
            break;
        default:
            return;
    }
    if (temp0) {
        temp1 = arg0->unk_3B8->unk_80[arg1];
        if (temp1 != NULL) {
            func_08878864(func_089B53D8(func_088586E8()), temp1, 2, 1.0f, 0.0f, 0.0f);
        }
    }
}
