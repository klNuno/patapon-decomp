#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} Temp;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    void *unk_08;
    u8 pad_0C[4];
} Obj;

extern void func_0891093C(void *, Temp *);

static inline void func_0890EEAC_00(Obj *arg0, Temp *arg1, f32 arg2)
{
    f32 a;
    f32 b;
    b = *(volatile f32 *)&arg0->unk_04 + arg2;
    a = *(volatile f32 *)&arg0->unk_00 + arg2;
    arg1->unk_04 = b;
    arg1->unk_00 = a;
}

void func_0890EEAC(Obj *arg0)
{
    Temp temp;
    u32 i;
    Obj *p;
    p = arg0;
    i = 0;
    do {
        if (p->unk_08 != NULL) {
            func_0890EEAC_00(p, &temp, 0.0f);
            func_0891093C(p->unk_08, &temp);
            i++;
        } else {
            i++;
        }
        p++;
    } while (i < 10U);
}
