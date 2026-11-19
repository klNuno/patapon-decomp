#include "common.h"

extern "C" {

void func_0890DA3C(void *);
void func_0890D618(s32 *, void *);
void func_0890D610(s32 *, void *);
void func_0890D698(s32 *, void *, s32, s32);

typedef struct {
    u8 pad_00[0x7D4C0];
    u8 unk_7D4C0;
} Unk00;

void func_0890E4B4(Unk00 *arg0) {
    s32 temp;
    s32 temp2;
    s32 temp3;

    func_0890DA3C(arg0);
    func_0890D618(&temp2, &arg0->unk_7D4C0);
    func_0890D610(&temp3, &arg0->unk_7D4C0);
    func_0890D698(&temp, &arg0->unk_7D4C0, temp2, temp3);
}

}
