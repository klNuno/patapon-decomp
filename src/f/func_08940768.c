#include "common.h"

typedef struct {
    void *unk_00;
} I_08944568;

typedef struct {
    I_08944568 unk_00;
    u8 pad_04[4];
    char *unk_08;
    s32 unk_0C;
} Unk;

void func_08940664(I_08944568 *, void *);
void func_0894065C(I_08944568 *, void *);
void func_08940844(char *, char *, char *);
s32 func_08940874(s32 *);
void func_089408F0(s32);
s32 func_089408F8(I_08944568, I_08944568);
void func_0894087C(I_08944568, I_08944568, void (*)(s32));
f32 *func_08940934(f32 *, f32 *);
s32 func_08940944(s32 *, s32 *);

void func_08940768(Unk *arg0) {
    I_08944568 temp;
    volatile I_08944568 temp2;
    volatile I_08944568 temp3;
    I_08944568 temp4;
    I_08944568 temp5;
    I_08944568 temp6;
    I_08944568 temp7;
    s32 temp8;

    temp3.unk_00 = arg0;
    temp5 = temp3;
    temp2.unk_00 = arg0->unk_00.unk_00;
    temp4 = temp2;
    if (func_08940944((s32 *)&temp4, (s32 *)&temp5) != 0) {
        func_08940934((f32 *)&temp, (f32 *)&temp5);
    } else {
        func_08940664(&temp6, arg0);
        func_0894065C(&temp7, arg0);
        arg0->unk_0C -= func_089408F8(temp6, temp7);
        func_0894087C(temp4, temp5, func_089408F0);
        temp8 = func_08940874((s32 *)&temp4);
        func_08940844(arg0->unk_08, (char *)temp8, (char *)func_08940874((s32 *)&temp5));
        func_08940934((f32 *)&temp, (f32 *)&temp5);
    }
}
