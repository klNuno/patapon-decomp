#include "common.h"

#pragma divbyzerocheck on

extern "C" {

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x126C];
    s32 unk_1384;
} T;

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    T **unk_08;

    int eq2(struct Node *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct Node *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct Node *o) {
        return !(bool)eq(o);
    }
} Node;

typedef struct S0 {
    u8 pad_00[0x60C];
    Node unk_60C;
    u8 pad_618[0x78];
    u8 unk_690;

    Node *end() { return &unk_60C; }
} S0;


s32 func_0882160C(void);
s32 func_088F5BA0(s32);
void func_08897B2C(s32, u16 *, s32, f32, f32);

void func_08890550(S0 *arg0, u16 *arg1, f32 arg2) {
    struct { Node *unk_00; } temp;
    struct { Node *unk_00; } temp1;
    s32 temp2;
    struct { s32 unk_00; } temp5;
    struct { s32 unk_00; } temp6;
    struct { u16 *unk_00; } temp7;
    s32 temp3;

    if (arg0->unk_690 == 0) {
        return;
    }
    temp3 = 1;
loop:
    temp.unk_00 = arg0->unk_60C.unk_04;
    temp2 = 0;
    while (temp.unk_00->ne(arg0->end())) {
        if (func_088F5BA0((**(T ***)&temp.unk_00->unk_08)->unk_114) == 0) {
            if (temp3 != 0) {
                if ((**(T ***)&temp.unk_00->unk_08)->unk_1384 == 0) {
                    temp2++;
                }
            } else {
                temp2++;
            }
        }
        if (temp.unk_00 != NULL) {
            temp.unk_00 = temp.unk_00->unk_04;
        }
    }
    if (temp2 == 0 && (u8)temp3 == 1) {
        temp3 = 0;
        goto loop;
    }
    if (temp2 == 0) {
        temp2 = 0;
    } else {
        temp2 = func_0882160C() % temp2;
    }
    temp5.unk_00 = temp2;
    temp6.unk_00 = temp3;
    temp7.unk_00 = arg1;
    temp1.unk_00 = arg0->unk_60C.unk_04;
    while (temp1.unk_00->ne(arg0->end())) {
        if (func_088F5BA0((**(T ***)&temp1.unk_00->unk_08)->unk_114) == 0 &&
            (temp6.unk_00 == 0 || (**(T ***)&temp1.unk_00->unk_08)->unk_1384 == 0)) {
            if (temp5.unk_00 == 0) {
                func_08897B2C((s32)**(T ***)&temp1.unk_00->unk_08, temp7.unk_00, 1, arg2, 0.0f);
                return;
            }
            temp5.unk_00--;
        }
        if (temp1.unk_00 != NULL) {
            temp1.unk_00 = temp1.unk_00->unk_04;
        }
    }
}
}
