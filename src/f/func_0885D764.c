#include "common.h"

typedef struct T {
    u8 pad_00[0x40];
    struct T *unk_40;
    struct T *unk_44;
    struct T *unk_48;
} T;

s32 func_0885D764(T *arg0, T *arg1) {
    T *temp;
    T *next;

    if (arg1 == NULL) {
        return 0;
    }
    if (arg1->unk_40 != NULL) {
        return 0;
    }
    arg1->unk_40 = arg0;
    temp = arg0->unk_44;
    if (temp == NULL) {
        arg0->unk_44 = arg1;
        return 1;
    }
    next = temp->unk_48;
    if (next != NULL) {
        do {
            temp = next;
            next = next->unk_48;
        } while (next != NULL);
    }
    temp->unk_48 = arg1;
    return 1;
}
