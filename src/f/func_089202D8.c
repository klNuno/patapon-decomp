#include "common.h"

typedef struct T {
    struct T *unk_00;
} T;

typedef struct {
    u8 pad_00[0x364];
    T unk_364;
} U;

f32 func_089202D8(U *arg0) {
    T *temp = arg0->unk_364.unk_00;
    T *end = &arg0->unk_364;
    f32 value = 0.0f;

    if ((temp == end) ^ 1) {
        do {
            value += 200.0f;
            temp = temp->unk_00;
        } while ((temp == end) ^ 1);
    }
    return value;
}
