#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    void *unk_80;
} E_08861AEC;

typedef struct {
    u8 pad_00[0xC];
    void (*unk_0C)(void *);
    u8 pad_10[0x738];
    E_08861AEC *unk_748;
} A_08861AEC;

void func_0881F5C0(void *, s32, s32);

void func_08861C68(A_08861AEC *arg0, s32 arg1)
{
    E_08861AEC *temp = &arg0->unk_748[arg1];

    if (temp->unk_80 != NULL) {
        if (temp->unk_80 != NULL) {
            arg0->unk_0C(temp->unk_80);
        }
        func_0881F5C0(temp, 0, 0x84);
    }
}
