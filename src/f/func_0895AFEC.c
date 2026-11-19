#include "common.h"

typedef struct T08881F98 {
    struct T08881F98 *unk_00;
    struct T08881F98 *volatile unk_04;
} T08881F98;

void func_08881D4C(s32 *, T08881F98 *);
void func_08881CDC(s32 *, T08881F98 *, s32);

T08881F98 *func_0895AFEC(T08881F98 *arg0) {
    struct { s32 unk_00; u8 pad_04[4]; } temp;
    s32 temp1;
    T08881F98 *temp2;
    if (arg0->unk_04 == arg0) {
        return NULL;
    }
    temp2 = arg0->unk_04;
    func_08881D4C(&temp1, arg0);
    func_08881CDC(&temp.unk_00, arg0, temp1);
    return temp2;
}
