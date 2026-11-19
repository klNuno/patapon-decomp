#include "common.h"

typedef struct T T;
struct T {
    T *unk_00;
    u32 unk_04;
    s32 unk_08;
};
typedef struct {
    u32 unk_00;
    T *unk_04;
} U;

u32 func_088278C8(U *arg0) {
    T *temp = arg0->unk_04;
    s32 val = temp->unk_08;
    u32 result = 0;
    if (val != 2) {
        do {
            if (val == 1) {
                u32 n = (u32)temp->unk_00 - (u32)temp - 0x1C;
                if (result < n) {
                    result = n;
                }
            }
            temp = temp->unk_00;
            val = temp->unk_08;
        } while (val != 2);
    }
    return result;
}
