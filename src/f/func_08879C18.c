#include "common.h"

typedef struct {
    s32 unk_00, unk_04;
    u8 pad_08[0x18];
} T;
typedef struct {
    u8 pad_00[0x104];
    T *unk_104;
    u32 unk_108;
} U;

s32 func_08879C18(U *arg0) {
    T *temp;
    volatile u32 *p;
    T *volatile *q;
    T *end;
    s32 result;

    end = arg0->unk_104 + arg0->unk_108;
    temp = arg0->unk_104;
    result = 1;
    if ((u32)temp != (u32)end) {
        p = &arg0->unk_108;
        q = &arg0->unk_104;
        do {
            if (temp->unk_04 < 4) {
                result = 0;
            }
            arg0 = (U *)(*p << 5);
            end = *q;
            ++temp;
            end = (T *)((u32)end + (u32)arg0);
        } while (temp != end);
    }
    return result;
}
