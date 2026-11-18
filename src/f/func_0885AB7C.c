#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
} E;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
    u32 unk_10;
    u8 pad_14[0xC];
    E unk_20[1];
} T;

u8 *func_0885AB7C(u8 *arg0, u32 arg1, u32 arg2) {
    T *h;
    u8 *p;
    E *e;
    u32 i;

    if (arg0 == NULL) {
        return NULL;
    }
    h = arg0 != NULL ? (T *)arg0 : NULL;
    p = arg0 + h->unk_08;
    if (arg1 >= h->unk_10) {
        return NULL;
    }
    e = h->unk_20;
    i = 0;
    if (arg1 != 0) {
        do {
            i++;
            p += e->unk_04 * e->unk_00;
            e++;
        } while (i < arg1);
    }
    if (arg2 >= e->unk_00) {
        return NULL;
    }
    return p + e->unk_04 * arg2;
}
