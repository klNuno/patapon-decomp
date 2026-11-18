#include "common.h"

extern "C" {

typedef struct E_088E305C {
    s32 unk_00;
    s32 unk_04;
    struct E_088E305C *unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} E_088E305C;

class A_088E305C {
public:
    virtual E_088E305C *func_08(u32, s32);
};

typedef struct {
    E_088E305C *unk_00;
    u32 unk_04;
    A_088E305C *unk_08;
} S_088E305C;

extern u8 D_08A4535C[];

S_088E305C *func_088E305C(S_088E305C *arg0, u32 arg1, A_088E305C **arg2) {
    E_088E305C *p;
    E_088E305C *q;
    E_088E305C *end;

    arg0->unk_00 = NULL;
    arg0->unk_04 = arg1;
    arg0->unk_08 = *arg2;
    if (arg0->unk_04 != 0) {
        p = arg0->unk_08->func_08(arg0->unk_04 * sizeof(E_088E305C), 0x10);
        arg0->unk_00 = p;
        end = p + arg0->unk_04;
        do {
            q = p;
            p++;
            if (q != NULL) {
                q->unk_1C = D_08A4535C;
                q->unk_00 = 0;
                q->unk_04 = 0;
                q->unk_08 = NULL;
                q->unk_0C = 0;
                q->unk_20 = 0;
                q->unk_24 = 0;
                q->unk_28 = 0;
                q->unk_2C = 0;
                q->unk_08 = q;
            }
        } while (p != end);
    }
    return arg0;
}

}
