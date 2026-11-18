#include "common.h"

typedef struct {
    void *unk_00;
} It_08907958;

typedef struct {
    It_08907958 unk_00;
    u8 pad_04[4];
    char *unk_08;
    s32 unk_0C;
} Unk;

void func_0891AEB4(s32 *, s32 *);
void func_0891AEAC(s32 *, s32);
void func_0891B024(char *, char *, char *);
s32 func_0891B054(s32 *);
void func_0891B0D0(void);
s32 func_0891B0D8(It_08907958, It_08907958);
void func_0891B05C(It_08907958, It_08907958, void (*)(void));
f32 *func_0891B114(f32 *, f32 *);
s32 func_0891B124(s32 *, s32 *);

void func_0891AF48(Unk *arg0) {
    It_08907958 temp;
    volatile It_08907958 temp2;
    volatile It_08907958 temp3;
    It_08907958 temp4;
    It_08907958 temp5;
    It_08907958 temp6;
    It_08907958 temp7;
    s32 temp8;

    temp3.unk_00 = arg0;
    temp5 = temp3;
    temp2.unk_00 = arg0->unk_00.unk_00;
    temp4 = temp2;
    if (func_0891B124((s32 *)&temp4, (s32 *)&temp5) != 0) {
        func_0891B114((f32 *)&temp, (f32 *)&temp5);
    } else {
        func_0891AEB4((s32 *)&temp6, (s32 *)arg0);
        func_0891AEAC((s32 *)&temp7, (s32)arg0);
        arg0->unk_0C -= func_0891B0D8(temp6, temp7);
        func_0891B05C(temp4, temp5, func_0891B0D0);
        temp8 = func_0891B054((s32 *)&temp4);
        func_0891B024(arg0->unk_08, (char *)temp8, (char *)func_0891B054((s32 *)&temp5));
        func_0891B114((f32 *)&temp, (f32 *)&temp5);
    }
}
