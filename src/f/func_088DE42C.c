#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
    u8 pad_2C[0xB21C0];
    void *unk_B21EC;
} Unk;

void *func_08827A50(s32, s32);
void *func_089109A8(void *);
void func_08910AC0(void *);

void func_088DE42C(Unk *arg0) {
    if (arg0->unk_B21EC == NULL) {
        void *temp = func_08827A50(0x171480, arg0->unk_28);
        if (temp != NULL) {
            temp = func_089109A8(temp);
        }
        arg0->unk_B21EC = temp;
        func_08910AC0(temp);
    }
}
