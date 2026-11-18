#include "common.h"

typedef struct T1 { struct T1 *unk_00, *unk_04; s32 unk_08; struct T1 *unk_0C; } T1;
typedef struct {
    T1 *unk_00, *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 pad_24[4];
} T089CCE34;
typedef struct {
    u8 pad_00[4];
    u8 unk_04[8], unk_0C[0x38];
    T089CCE34 unk_44, unk_6C;
    u8 pad_94[4];
    s32 unk_98;
} T;
typedef struct { f32 unk_00, unk_04; } T2;

extern T2 D_089F4590[];
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
extern s32 func_08945908(s32, s32);
void func_08945F18(void *, s32, s32);
void func_089CCA0C(s32, s32, T2 *);
T1 *func_089CCB94(s32);
void func_089CCF60(s32 *, T089CCE34 *, s32);
void func_089CCFF8(s32 *, T089CCE34 *);

static inline s32 func_inline(T089CCE34 *arg0, T1 *arg1) {
    T1 *temp = arg0->unk_00;

    if (temp != (T1 *)arg0) {
        arg1->unk_00 = temp;
        (*(T1 *volatile *)&arg0->unk_00)->unk_04 = arg1;
        arg0->unk_00 = arg1;
        return 1;
    }
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg1;
    arg1->unk_00 = (T1 *)arg0;
    return 1;
}

void func_089CD5F8(T *arg0) {
    s32 temp0, temp1;
    T2 temp2;
    s32 temp3, temp4;
    T1 *temp5;
    s32 temp6;

    temp3 = arg0->unk_44.unk_04->unk_08;
    func_089CCFF8(&temp1, &arg0->unk_44);
    func_089CCF60(&temp0, &arg0->unk_44, temp1);
    temp2 = D_089F4590[0];
    func_089CCA0C(temp3, func_08945908((s32)arg0->unk_04, arg0->unk_98), &temp2);
    temp5 = func_089CCB94(temp3);
    if ((T1 *)&arg0->unk_6C != temp5) {
        temp6 = func_inline(&arg0->unk_6C, temp5);
        temp5->unk_04 = (T1 *)&arg0->unk_6C;
        if (temp6) {
            temp5->unk_0C = (T1 *)&arg0->unk_6C;
            arg0->unk_6C.unk_20++;
        }
    }
    func_08945F18(arg0->unk_0C, arg0->unk_98, 1);
    if (arg0->unk_98 == 49) {
        temp4 = 0x450002;
    } else if (arg0->unk_98 == 50) {
        temp4 = 0x450001;
    } else {
        temp4 = 0x450000;
    }
    func_08878864(func_089B53D8(func_088586E8()), temp4, 2, 1.0f, 0.0f, 0.0f);
}
