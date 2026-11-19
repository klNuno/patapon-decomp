#include "common.h"

typedef struct T08976E34 {
    u8 pad_00[4];
    struct T08976E34 *volatile unk_04;
} T08976E34;

void func_0888DA68(s32 *, T08976E34 *);
void func_0888D66C(s32 *, T08976E34 *, s32);

T08976E34 *func_0888D610(T08976E34 *arg0) {
    struct {
        s32 unk_00;
        u8 pad_04[4];
    } temp;
    s32 temp2;
    T08976E34 *temp3;

    if (arg0->unk_04 == arg0) {
        return NULL;
    }
    temp3 = arg0->unk_04;
    func_0888DA68(&temp2, arg0);
    func_0888D66C(&temp.unk_00, arg0, temp2);
    return temp3;
}
