#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0x28];
    u8 unk_50[0x24];
    u8 unk_74[3][0x30];
} T0899E3C8_1;

typedef struct {
    u8 pad_00[0x670];
    T0899E3C8_1 *unk_670;
} T0899E3C8_0;

void func_088763F8(void *);
void func_088763E8(void *);
void func_08876338(void *);
void func_0881F120(void *, void *, s32);

void func_0899E3C8(T0899E3C8_0 *arg0, T0899E3C8_0 *arg1) {
    T0899E3C8_1 tmp;
    u8 *p;
    s32 t;
    T0899E3C8_1 *q;

    tmp.unk_24 = -1;
    func_088763F8(tmp.unk_50);
    p = tmp.unk_74[0];
    do {
        func_088763E8(p);
        p += 0x30;
    } while (p < tmp.unk_74[3]);
    func_08876338(&tmp);
    func_0881F120(&tmp, arg0->unk_670, 0x104);
    func_0881F120(arg0->unk_670, arg1->unk_670, 0x104);
    func_0881F120(arg1->unk_670, &tmp, 0x104);
    t = arg0->unk_670->unk_24;
    arg0->unk_670->unk_24 = arg1->unk_670->unk_24;
    arg1->unk_670->unk_24 = t;
    q = arg0->unk_670;
    arg0->unk_670 = arg1->unk_670;
    arg1->unk_670 = q;
}
