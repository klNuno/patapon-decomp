#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Unk;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0;
} A;

typedef struct {
    u8 pad_00[0x4AD4];
    Unk unk_4AD4;
    u8 pad_4ADC[0x30];
    A *unk_4B0C;
} Obj;

extern s32 func_089AE258(s32);
s32 func_088C648C(void *);
void func_088F4618(char *, char *);

void func_088F506C(Obj *arg0)
{
    s32 temp[2];
    s32 *p;
    s32 *end;
    s32 n;
    Unk *q;
    char *a;

    func_089AE258((s32)arg0);
    n = arg0->unk_4AD4.unk_04;
    p = arg0->unk_4AD4.unk_00;
    q = &arg0->unk_4AD4;
    if ((u32)p != (u32)(p + n)) {
        end = *(s32 *volatile *)&q->unk_00 + n;
        do {
            p++;
        } while (p != end);
    }
    arg0->unk_4AD4.unk_04 = 0;
    a = (char *)func_088C648C(&arg0->unk_4B0C->unk_506F0);
    temp[0] = 0;
    temp[1] = 0;
    func_088F4618(a, (char *)temp);
}
