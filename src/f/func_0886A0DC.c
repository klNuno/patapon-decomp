#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

char *func_0886A164(char *arg0);
void func_0886A120(char *arg0, char *arg1);
void func_088694F8(void *, s32);

void func_0886A0DC(T *arg0) {
    char temp[0x10];

    func_0886A164(temp);
    func_0886A120(temp, (char *)arg0);
    func_088694F8(temp, -1);
    arg0->unk_10 = 0;
}
