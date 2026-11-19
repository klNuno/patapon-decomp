#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
    f32 unk_0C;
} T08923440;

typedef struct T3 T3;

void func_08878864(s32, s32, s32, f32, f32, f32);
void func_08878FE0(T3 *arg0, void *arg1, f32 arg2);

void func_08923440(s32 *arg0, T08923440 *arg1) {
    s32 temp;

    switch (arg1->unk_00) {
    case 1:
        temp = arg1->unk_08;
        func_08878864(*arg0, temp, 2, arg1->unk_0C, 0.0f, 0.0f);
        break;
    case 2:
        temp = arg1->unk_08;
        func_08878FE0((T3 *)*arg0, (void *)temp, arg1->unk_0C);
        break;
    }
}
