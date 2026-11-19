#include "common.h"

typedef struct S_0895F0B8 S_0895F0B8;
typedef struct L L;

struct L {
    L *unk_00;
    L *unk_04;
    u8 pad_08[0x1C];
};

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
    s32 unk_24;
    L unk_28;
    void *unk_4C;
    s32 unk_50;
} S0895A908;

void func_08881A78(void *);
L *func_088820C8(L *);
void func_0895A994(S0895A908 *);
void func_0895EFB8(S_0895F0B8 *, s32);
extern u8 D_08A4538C[];
extern u8 D_08A47958[];

S0895A908 *func_0895A890(S0895A908 *arg0, s32 arg1)
{
    L *temp;

    func_0895EFB8((S_0895F0B8 *)arg0, arg1);
    arg0->unk_08 = D_08A47958;
    arg0->unk_20 = 0;
    temp = &arg0->unk_28;
    arg0->unk_24 = 0;
    arg0->unk_4C = D_08A4538C;
    func_088820C8(temp);
    temp->unk_04 = temp;
    temp->unk_00 = temp;
    func_08881A78(temp);
    arg0->unk_50 = 0;
    func_0895A994(arg0);
    return arg0;
}
