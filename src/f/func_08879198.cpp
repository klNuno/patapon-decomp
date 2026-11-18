#include "common.h"

extern "C" {

void func_0883CF04(s32, s32, f32);

typedef struct Node {
    struct Node *unk_00;
    u8 pad_04[4];
    u32 unk_08;
    s32 unk_0C;
} Node;

typedef struct {
    Node *unk_00;

    inline s32 eq(const Node *arg0) const { return unk_00 == arg0; }
    inline bool ne(const Node *arg0) const { return !(bool)eq(arg0); }
} Iter;

typedef struct {
    u8 pad_00[1];
    u8 unk_01;
    u8 pad_02[6];
    f32 unk_08;
} E;

typedef struct {
    u8 pad_00[4];
    E *unk_04;
} U;

typedef struct {
    u8 pad_00[0x98C];
    void *unk_98C[0xD4C];
    Node unk_3EBC;
} T;

void func_08879198(T *arg0, u32 arg1, f32 arg2, f32 arg3) {
    Iter temp;
    Node *temp2;
    temp.unk_00 = arg0->unk_3EBC.unk_00;
    temp2 = &arg0->unk_3EBC;

    if (temp.ne(temp2)) {
        do {
            s32 temp3 = temp.unk_00->unk_0C;
            u32 *temp10 = &temp.unk_00->unk_08;
            u32 temp4;
            if (temp3 >= 0) {
                temp4 = *temp10;
                if (temp4 == arg1) {
                    U *temp5 = (U *)((T *)((u8 *)arg0 + (0x40 + ((temp4 >> 16) & 0xFF)) * sizeof(void *)))->unk_98C[0];
                    E *temp6 = &temp5[(temp4 >> 8) & 0xF].unk_04[temp4 & 0xFF];
                    E *temp7 = (E *)arg0->unk_98C[0x88];
                    f32 temp8 = temp6->unk_08 * temp7[temp6->unk_01].unk_08;
                    f32 temp9 = 128.0f * temp8;
                    temp9 *= arg2;
                    func_0883CF04(temp3, (s32)temp9, arg3);
                }
            }
            temp.unk_00 = temp.unk_00->unk_00;
        } while (temp.ne(temp2));
    }
}
}
