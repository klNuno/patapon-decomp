#include "common.h"

typedef struct N_0896077C {
    struct N_0896077C *unk_00;
    struct N_0896077C *unk_04;
    void *unk_08;
    struct N_0896077C *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} N_0896077C;

typedef struct {
    u8 pad_00[0x38];
    N_0896077C unk_38;
} L_0896077C;

typedef struct {
    u8 pad_00[0x10];
    L_0896077C *unk_10;
} M_0896077C;

typedef struct {
    u8 pad_00[0x20];
    M_0896077C *unk_20;
    u8 pad_24[0x60 - 0x24];
    u8 unk_60[0xD4 - 0x60];
    u8 unk_D4;
    u8 pad_D5[7];
    s32 unk_DC;
    u8 *unk_E0;
    u8 pad_E4[0x174 - 0xE4];
    N_0896077C *unk_174;
    N_0896077C *unk_178;
    void *unk_17C;
    N_0896077C *unk_180;
} T_0896077C;

void func_089602BC(T_0896077C *);
s32 func_08962D2C(L_0896077C *);
s32 func_089608F4(u8 *);
void func_089603DC(u8 *);
void func_0896089C(u8 *, u8 *);
void func_08960884(u8 *, u8 *);

void func_0896077C(T_0896077C *arg0, u8 *arg1) {
    N_0896077C *node;
    N_0896077C *head;
    u8 *b;
    s32 r;

    func_089602BC(arg0);
    arg0->unk_D4 = 1;
    arg0->unk_DC = func_08962D2C(arg0->unk_20->unk_10);
    if (arg1 != NULL) {
        b = (u8 *)arg0;
        if (arg0 != NULL) {
            b = arg0->unk_60;
        }
        if (b != NULL) {
            if (func_089608F4(b)) {
                func_089603DC(b);
            }
            func_0896089C(arg1 + 0x84, b);
            func_089608F4(b);
            func_08960884(b, arg1 + 0x60);
        }
        arg0->unk_E0 = arg1;
    }
    arg0->unk_17C = arg0;
    head = &arg0->unk_20->unk_10->unk_38;
    node = (N_0896077C *)&arg0->unk_174;
    if (head != node) {
        if (head->unk_00 != head) {
            arg0->unk_174 = head->unk_00;
            head->unk_00->unk_04 = node;
            head->unk_00 = node;
            r = 1;
        } else {
            head->unk_00 = node;
            head->unk_04 = node;
            arg0->unk_174 = head;
            r = 1;
        }
        arg0->unk_178 = head;
        if (r) {
            arg0->unk_180 = head;
            head->unk_20++;
        }
    }
}
