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

void func_088D8874(It_08907958 *, void *);
void func_088D886C(It_08907958 *, void *);
void func_088D89E4(char *, char *, char *);
s32 func_088D8A14(s32 *);
void func_088D8A90(void);
s32 func_088D8A98(It_08907958, It_08907958);
void func_088D8A1C(It_08907958, It_08907958, void (*)(void));
f32 *func_088D8AD4(f32 *, f32 *);
s32 func_088D8AE4(s32 *, s32 *);

void func_088D8908(Unk *arg0) {
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
    if (func_088D8AE4((s32 *)&temp4, (s32 *)&temp5) != 0) {
        func_088D8AD4((f32 *)&temp, (f32 *)&temp5);
    } else {
        func_088D8874(&temp6, arg0);
        func_088D886C(&temp7, arg0);
        arg0->unk_0C -= func_088D8A98(temp6, temp7);
        func_088D8A1C(temp4, temp5, func_088D8A90);
        temp8 = func_088D8A14((s32 *)&temp4);
        func_088D89E4(arg0->unk_08, (char *)temp8, (char *)func_088D8A14((s32 *)&temp5));
        func_088D8AD4((f32 *)&temp, (f32 *)&temp5);
    }
}
