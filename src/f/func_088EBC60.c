#include "common.h"
typedef struct {
    u8 pad_00[0x55434];
    u8 unk_55434[1];
} A;

typedef struct {
    u8 pad_00[0x14];
    A *unk_14;
} T;

void func_089701D4(void *, void *, void *);
void func_08852F00(void *, s32);

void func_088EBC60(T *arg0, void *arg1) {
    A *temp = arg0->unk_14;
    func_089701D4(temp->unk_55434, temp, arg1);
    func_08852F00(arg1, 0);
}
