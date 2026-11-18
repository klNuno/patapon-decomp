#include "common.h"

extern "C" {

class A0891FCA0 {
public:
    virtual void *func_08(u32, s32);
};

typedef struct E0891FCA0 {
    s32 unk_00;
    s32 unk_04;
    struct E0891FCA0 *unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} E0891FCA0;

typedef struct {
    E0891FCA0 *unk_00;
    u32 unk_04;
    A0891FCA0 *unk_08;
} T0891FCA0;

extern u8 D_08A4535C[];

T0891FCA0 *func_0891FCA0(T0891FCA0 *arg0, u32 arg1, A0891FCA0 **arg2) {
    E0891FCA0 *p;
    E0891FCA0 *end;
    E0891FCA0 *q;

    arg0->unk_00 = NULL;
    arg0->unk_04 = arg1;
    arg0->unk_08 = *arg2;
    if (arg0->unk_04 != 0) {
        p = (E0891FCA0 *)arg0->unk_08->func_08(arg0->unk_04 * sizeof(E0891FCA0), 0x10);
        arg0->unk_00 = p;
        end = p + arg0->unk_04;
        do {
            q = p++;
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
