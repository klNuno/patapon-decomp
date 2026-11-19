#include "common.h"
typedef struct {
    u8 pad_00[0x14];
    u8 *unk_14;
    s32 unk_18;
} T;

u8 *func_08993F30(u8 *arg0, s32 arg1) {
    T *temp = (T *)(arg0 + arg1 * sizeof(T) + 0xC);
    u8 *temp1;
    if (temp->unk_18 == 0) {
        return NULL;
    }
    temp1 = temp->unk_14;
    if (temp1 == NULL) {
        return NULL;
    }
    return temp1 + 0xC0;
}
