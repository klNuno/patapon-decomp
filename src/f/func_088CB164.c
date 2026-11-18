#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E;

typedef struct L {
    u8 pad_00[0x8];
    E **unk_08;
    s32 unk_0C;
} L;

inline s32 count(L *l) {
    if (l == NULL) {
        return 0;
    }
    return l->unk_0C;
}

inline E *get(L *l, s32 i) {
    if (l == NULL) {
        return NULL;
    }
    if (i < 0 || i >= l->unk_0C) {
        return NULL;
    }
    return l->unk_08[i];
}

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    L *unk_10;
} S;

s32 func_088CB164(S *arg0) {
    s32 i;
    L *l;
    E *e;
    s32 *p;
    s32 n;
    s32 j;

    if (arg0 == NULL) {
        return 0;
    }
    l = arg0->unk_10;
    n = 0;
    if (!(arg0->unk_0C & 0x40000000)) {
        l = (L *)((s32)l + (s32)arg0);
        p = (s32 *)((s32)l->unk_08 + (s32)arg0);
        for (i = 0; i < count(l); i++) {
            e = (E *)((s32)arg0 + *p);
            if (e->unk_00 == 10) {
                n++;
            }
            p++;
        }
        return n;
    }
    for (j = 0; j < count(l); j++) {
        e = get(l, j);
        if (e->unk_00 == 10) {
            n++;
        }
    }
    return n;
}
