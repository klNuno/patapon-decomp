#include "common.h"

typedef struct {
    u8 pad_00[0x410];
    s32 *unk_410;
    s32 unk_414;
} T;

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_08946FCC;

typedef struct {
    u8 pad_00[0x410];
    Vec_08946FCC unk_410;
} Obj_08946FCC;

typedef struct {
    u8 pad_00[8];
    T unk_08;
} Obj;

T *func_08947050(T *, const T *);
Obj_08946FCC *func_08946FCC(Obj_08946FCC *, Obj_08946FCC *);
T *func_08946CE8(T *, s16);

void func_08946F70(Obj *arg0, Obj *arg1)
{
    T temp;
    T *b;
    T *a;

    a = &arg0->unk_08;
    b = &arg1->unk_08;

    func_08947050(&temp, a);
    func_08946FCC((Obj_08946FCC *)a, (Obj_08946FCC *)b);
    func_08946FCC((Obj_08946FCC *)b, (Obj_08946FCC *)&temp);
    func_08946CE8(&temp, -1);
}
