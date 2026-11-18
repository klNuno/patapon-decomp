#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E_088CB260;

typedef struct L_088CB260 {
    u8 pad_00[0x8];
    E_088CB260 **unk_08;
    s32 unk_0C;
} L_088CB260;

inline s32 func_088CB260_count(L_088CB260 *l) {
    if (l == NULL) {
        return 0;
    }
    return l->unk_0C;
}

inline E_088CB260 *func_088CB260_get(L_088CB260 *l, s32 i) {
    if (l == NULL) {
        return NULL;
    }
    if (i < 0 || i >= l->unk_0C) {
        return NULL;
    }
    return l->unk_08[i];
}

typedef struct {
    u8 pad_00[0x10];
    L_088CB260 *unk_10;
} S_088CB260;

s32 func_088CB260(S_088CB260 *arg0, s32 arg1) {
    L_088CB260 *l;
    E_088CB260 *e;
    s32 n;
    s32 i;

    if (arg0 == NULL) {
        return 0;
    }
    l = arg0->unk_10;
    n = 0;
    for (i = 0; i < func_088CB260_count(l); i++) {
        e = func_088CB260_get(l, i);
        if (e->unk_00 == 10) {
            if (n == arg1) {
                return e == NULL ? 0 : e->unk_04;
            }
            n++;
        }
    }
    return 0;
}
