#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} S;

typedef struct A A;

s32 *func_0885356C(void *, s32, s32, s32);
extern char *func_08899E18(s32, s32);
void func_08894364(f32, A *, s32);
void func_08852F00(void *, s32);

void func_088E8074(S *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    T *temp1 = arg0->unk_14;
    if (temp1 != NULL) {
        s32 temp2 = *(volatile s32 *)temp;
        func_08894364(0.0f, (A *)func_08899E18(temp1->unk_36B10, 0), temp2);
    }
    func_08852F00(arg1, 0);
}
