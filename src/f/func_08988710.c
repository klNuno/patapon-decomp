#include "common.h"

typedef struct {
    void *unk_00;
} Unk0;

typedef struct {
    Unk0 unk_00;
    u8 pad_04[4];
    char *unk_08;
    s32 unk_0C;
} Unk;

void func_0898867C(s32 *, s32 *);
void func_08988674(s32 *, s32);
void func_089887EC(char *, char *, char *);
s32 func_0898881C(s32 *);
void func_08988898(void);
s32 func_089888A0(Unk0, Unk0);
void func_08988824(Unk0, Unk0, void (*)(void));
f32 *func_089888DC(f32 *, f32 *);
s32 func_089888EC(s32 *, s32 *);

void func_08988710(Unk *arg0) {
    Unk0 temp;
    volatile Unk0 temp2;
    volatile Unk0 temp3;
    Unk0 temp4;
    Unk0 temp5;
    Unk0 temp6;
    Unk0 temp7;
    s32 temp8;

    temp3.unk_00 = arg0;
    temp5 = temp3;
    temp2.unk_00 = arg0->unk_00.unk_00;
    temp4 = temp2;
    if (func_089888EC((s32 *)&temp4, (s32 *)&temp5) != 0) {
        func_089888DC((f32 *)&temp, (f32 *)&temp5);
    } else {
        func_0898867C((s32 *)&temp6, (s32 *)arg0);
        func_08988674((s32 *)&temp7, (s32)arg0);
        arg0->unk_0C -= func_089888A0(temp6, temp7);
        func_08988824(temp4, temp5, func_08988898);
        temp8 = func_0898881C((s32 *)&temp4);
        func_089887EC(arg0->unk_08, (char *)temp8, (char *)func_0898881C((s32 *)&temp5));
        func_089888DC((f32 *)&temp, (f32 *)&temp5);
    }
}
