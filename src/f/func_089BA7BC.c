#include "common.h"

typedef struct {
    u8 pad_00[0xFB0];
    u8 *unk_FB0;
    void *unk_FB4;
} T;

typedef struct {
    u8 pad_00[0x14A8];
    T unk_14A8;
} G_089BA824;

typedef struct {
    u8 pad_00[0x2610];
    s32 unk_2610;
    u8 pad_2614[0x404];
    s32 *unk_2A18;
    void *unk_2A1C;
} U;

extern G_089BA824 *D_08AD1F14[];

u8 *func_089BA7BC(U *arg0) {
    G_089BA824 *temp = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    T *temp2 = &temp->unk_14A8;
    if (temp2->unk_FB4 == NULL) {
        return NULL;
    }
    if (arg0->unk_2A1C == NULL) {
        return NULL;
    }
    return temp2->unk_FB0 + arg0->unk_2A18[arg0->unk_2610] * 0x28 + 4;
}
