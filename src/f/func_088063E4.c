#include "common.h"

typedef struct T T;

typedef struct {
    void (*unk_00)(void *, T *, s32);
    s32 unk_04;
} A;

struct T {
    u8 pad_00[4];
    A *unk_04;
    s32 unk_08;
};

void func_088063E4(T *arg0, void *arg1) {
    s32 temp = arg0->unk_08;
    if (temp != 0) {
        do {
            A *a = &arg0->unk_04[--temp];
            a->unk_00(arg1, arg0, a->unk_04);
        } while (temp != 0);
    }
}
