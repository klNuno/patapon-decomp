#include "common.h"

extern "C" {

typedef struct {
    u8 * unk_00;
    u8 pad_04[0x34];
    f32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    u8 unk_44[16];
    u8 unk_54;
    u8 pad_55[0x3];
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    u8 unk_68;
    u8 pad_69[0x3];
    s32 unk_6C;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    f32 unk_8C;
    s32 unk_90;
    s32 unk_94;
    s32 unk_98;
    u8 unk_9C;
    u8 unk_9D;
    u8 pad_9E[0x2];
    s32 unk_A0;
} T;

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    T unk_08;
} N;

typedef struct {
    u8 pad_00[8];
    N *unk_08;
    s32 unk_0C;
} L;

extern u8 D_08A458E8[];
extern void func_088D7134(T *, const T *);
extern void func_088D710C(void *, const void *);

struct E {};
static inline T *func_unk(N *temp, const E &) {
    return &temp->unk_08;
}

void func_088D6F94(L *arg0, N *arg1, const T *arg2) {
    N *temp;
    N *prev;
    N *next;
    T *dest;

    temp = arg0->unk_08->unk_00;
    if (temp != arg0->unk_08) {
        next = temp->unk_00;
        if (next != NULL) {
            next->unk_04 = temp->unk_04;
        }
        prev = temp->unk_04;
        if (prev != NULL) {
            prev->unk_00 = temp->unk_00;
        }
        temp->unk_00 = NULL;
        temp->unk_04 = NULL;
    } else {
        temp = NULL;
    }
    prev = arg1->unk_04;
    dest = func_unk(temp, E());
    arg0->unk_0C++;
    prev->unk_00 = temp;
    arg1->unk_04 = temp;
    temp->unk_00 = arg1;
    temp->unk_04 = prev;
    if (dest != NULL) {
        func_088D7134(dest, arg2);
        dest->unk_00 = D_08A458E8;
        dest->unk_38 = arg2->unk_38;
        dest->unk_3C = arg2->unk_3C;
        dest->unk_40 = arg2->unk_40;
        func_088D710C(dest->unk_44, arg2->unk_44);
        dest->unk_54 = arg2->unk_54;
        dest->unk_58 = arg2->unk_58;
        dest->unk_5C = arg2->unk_5C;
        dest->unk_60 = arg2->unk_60;
        dest->unk_64 = arg2->unk_64;
        dest->unk_68 = arg2->unk_68;
        dest->unk_6C = arg2->unk_6C;
        dest->unk_70 = arg2->unk_70;
        dest->unk_74 = arg2->unk_74;
        dest->unk_78 = arg2->unk_78;
        dest->unk_7C = arg2->unk_7C;
        dest->unk_80 = arg2->unk_80;
        dest->unk_84 = arg2->unk_84;
        dest->unk_88 = arg2->unk_88;
        dest->unk_8C = arg2->unk_8C;
        dest->unk_90 = arg2->unk_90;
        dest->unk_94 = arg2->unk_94;
        dest->unk_98 = arg2->unk_98;
        dest->unk_9C = arg2->unk_9C;
        dest->unk_9D = arg2->unk_9D;
        dest->unk_A0 = arg2->unk_A0;
    }
}
}
