#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
    s32 *unk_0C;
} E_0896FFC4;

typedef struct N_0896FFC4 {
    u8 pad_00[0x4];
    struct N_0896FFC4 *unk_04;
    E_0896FFC4 *unk_08;
} N_0896FFC4;

struct It_0896FFC4 {
    N_0896FFC4 *unk_00;
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

struct L_0896FFC4 {
    N_0896FFC4 *unk_00;
    u8 pad_04[0x18];
    u32 unk_1C;
    E_0896FFC4 *get1() {
        if (unk_1C < 2) {
            return NULL;
        }
        It_0896FFC4 it;
        it.unk_00 = unk_00;
        it.next();
        return it.unk_00->unk_08;
    }
};

struct Sub_0896FFC4 {
    u8 pad_00[0x224];
    L_0896FFC4 unk_224;
};

typedef struct {
    u8 pad_00[0x9600];
    Sub_0896FFC4 unk_9600;
    u8 pad_9844[0x98B0 - 0x9600 - sizeof(Sub_0896FFC4)];
    struct B_0896FFC4 *unk_98B0;
} R_0896FFC4;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_0896FFC4;

typedef struct {
    W_0896FFC4 *unk_00;
} S_0896FFC4;

struct B_0896FFC4 {
    u8 pad_00[8];
    f32 unk_08;
};

R_0896FFC4 *func_08899E18(s32, s32);
extern s32 func_0885A680(void);

void func_0896FFC4(S_0896FFC4 *arg0, f32 arg1) {
    R_0896FFC4 *temp = func_08899E18(arg0->unk_00->unk_36B10, 0);
    if (temp != NULL) {
        B_0896FFC4 *temp2 = temp->unk_98B0;
        if (temp2 != NULL) {
            temp2->unk_08 = arg1;
            Sub_0896FFC4 *temp3 = &temp->unk_9600;
            s32 *temp4 = temp3->unk_224.get1()->unk_0C;
            *temp4 = func_0885A680();
        }
    }
}

}
