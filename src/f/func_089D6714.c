#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} T089D6714_B;

typedef struct {
    u8 pad_00[0x1490];
    T089D6714_B *unk_1490;
    u8 pad_1494[0xFE8];
    s32 unk_247C;
    u8 pad_2480[0x20];
    u8 unk_24A0;
} T089D6714_A;

typedef struct {
    u8 pad_00[0x42820];
    T089D6714_A *unk_42820;
} Obj_089794B0;

void func_089D67A4(void *);
void func_089D6CE0(void *, s32);
extern Obj_089794B0 *D_08AD1E28[];

void func_089D6714(void *arg0) {
    Obj_089794B0 *temp;
    T089D6714_A *temp_s2;
    T089D6714_B *temp_s0;
    u8 *flag;

    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    temp_s2 = temp->unk_42820;
    temp_s0 = temp_s2->unk_1490;
    flag = &temp_s2->unk_24A0;
    if (*flag == 0) {
        func_089D6CE0(arg0, 4);
    } else {
        func_089D67A4(arg0);
    }
    *flag = 1;
    if (temp_s2->unk_247C == 0xE) {
        temp_s0->unk_14 = 2;
    }
}
