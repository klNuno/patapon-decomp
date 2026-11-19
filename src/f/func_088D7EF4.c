#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    void *unk_4C;
    u8 pad_50[0x2CF0 - 0x50];
    s32 unk_2CF0;
    s32 unk_2CF4;
    u8 unk_2CF8;
    u8 pad_2CF9[0x23];
    u8 unk_2D1C;
    u8 pad_2D1D[3];
    s32 unk_2D20;
    char unk_2D24[1];
} S;

typedef struct {
    u8 pad_00[0x1440];
    s32 unk_1440;
} T;

extern char D_089E1258[];
extern u8 D_08A462F8[];
void *func_08827A50(s32, s32);
extern void func_088CC5C0(S *, s32);
void func_08822B3C(char *, char *);

S *func_088D7EF4(T *arg0) {
    S *temp;

    if ((temp = func_08827A50(0x2F30, arg0->unk_1440)) != NULL) {
        func_088CC5C0(temp, arg0->unk_1440);
        temp->unk_4C = D_08A462F8;
        temp->unk_2CF0 = 0;
        temp->unk_2CF4 = 0;
        temp->unk_2CF8 = 0;
        temp->unk_2D1C = 1;
        temp->unk_2D20 = 0;
        func_08822B3C(temp->unk_2D24, D_089E1258);
    }
    return temp;
}
