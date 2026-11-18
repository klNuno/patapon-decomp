#include "common.h"

typedef struct {
    f32 unk_00[3];
} Unk;

typedef struct Unk1 {
    struct Unk1 *unk_00;
    struct Unk1 *unk_04;
    u8 pad_08[6];
    u16 unk_0E;
    u8 pad_10[0x38];
    Unk unk_48;
} Unk1;

typedef struct {
    Unk1 **unk_00;
    u16 unk_04;
    u8 pad_06[0xE];
    Unk1 *unk_14;
    Unk1 *unk_18;
    u8 pad_1C[4];
    s32 unk_20;
} Unk2;

extern Unk D_089FB6C8[];
void func_0881F5C0(void *, s32, s32);

inline Unk1 *unk_00(Unk2 *arg0)
{
    Unk1 *p;
    if (arg0->unk_04 != 0) {
        p = arg0->unk_00[--arg0->unk_04];
    } else {
        p = NULL;
    }
    return p;
}

Unk1 *func_088C323C(Unk2 *arg0)
{
    Unk1 *p;
    Unk1 *q;

    if (arg0->unk_04 == 0) {
        return NULL;
    }
    p = unk_00(arg0);
    if (p == NULL) {
        return NULL;
    }
    func_0881F5C0(p, 0, 0x150);
    p->unk_0E |= 0x800;
    p->unk_48 = D_089FB6C8[0];
    arg0->unk_20++;
    q = arg0->unk_14;
    if (q != NULL) {
        p->unk_04 = q;
        arg0->unk_14->unk_00 = p;
    } else {
        p->unk_04 = NULL;
    }
    arg0->unk_14 = p;
    arg0->unk_18 = p;
    return p;
}
