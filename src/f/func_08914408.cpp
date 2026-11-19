#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x64];
    s8 unk_64;
    u8 pad_65[0x58B];
    s32 unk_5F0;
} Unk;

void func_089146F0(char *);
void func_0891470C(char *);
void func_089147B4(char *);
extern void func_08914808(char *, s32, char *);
void func_08914B28(char *);

void func_08914408(char *arg0, s32 arg1)
{
    Unk *temp = (Unk *)(arg0 + 0x1C);

    func_08914808(arg0, arg1, (char *)temp);
    if (temp->unk_64 == 0) {
        temp->unk_5F0 = 0;
    }
    func_08914B28(arg0);
    func_089146F0(arg0);
    func_0891470C(arg0);
    func_089147B4(arg0);
}

}
