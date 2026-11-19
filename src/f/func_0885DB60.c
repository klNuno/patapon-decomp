#include "common.h"

typedef struct T {
    u8 pad_00[0x44];
    struct T *unk_44;
    struct T *unk_48;
} T;

T *func_0885DB60(T *arg0, s32 arg1)
{
    T *temp;

    if (arg1 < 0) {
        return NULL;
    }
    temp = arg0->unk_44;
    if (temp == NULL) {
        return NULL;
    }
    for (; arg1 > 0; --arg1) {
        if (temp == NULL) {
            return NULL;
        }
        temp = temp->unk_48;
    }
    return temp;
}
