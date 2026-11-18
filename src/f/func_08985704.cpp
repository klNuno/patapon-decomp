#include "common.h"

extern "C" {

class T08985704_O {
public:
    virtual s32 *func_00(void *, s32);
};

struct T08985704_B0 {
    u8 pad_00[0x90];
};

struct T08985704_B1 {
    u8 pad_00[0x4];
};

struct T08985704_D : T08985704_B0, T08985704_B1 {
};

typedef struct T08985704_S {
    s32 unk_00;
    T08985704_O *unk_04;
    T08985704_D *unk_08;
    s32 *unk_0C;
} T08985704_S;

typedef struct T08985704_H {
    u8 pad_00[0x28];
    s32 unk_28;
} T08985704_H;

typedef struct T08985704_A {
    T08985704_H *unk_00;
    u8 pad_04[0x110];
    T08985704_S *unk_114;
    s32 unk_118;
    u8 unk_11C[1];
} T08985704_A;

T08985704_D *func_08827A50(s32, s32);
T08985704_O *func_08827AD4(void);
T08985704_D *func_0898A680(void *, s32);
void func_088CE1EC(void *, T08985704_B1 *);

s32 func_08985704(T08985704_S *arg0, T08985704_A *arg1) {
    s32 a;
    T08985704_D *temp;
    T08985704_S *e;

    a = arg1->unk_00->unk_28;
    temp = func_08827A50(0x370, a);
    if (temp != NULL) {
        temp = func_0898A680(temp, arg1->unk_118);
    }
    arg0->unk_00 = a;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = temp;
    arg0->unk_0C = arg0->unk_04->func_00(temp, arg0->unk_00);
    *arg0->unk_0C = 1;
    e = &arg1->unk_114[arg1->unk_118];
    if (e != NULL) {
        e->unk_00 = arg0->unk_00;
        e->unk_04 = arg0->unk_04;
        e->unk_08 = arg0->unk_08;
        e->unk_0C = arg0->unk_0C;
        if (e->unk_08 != NULL) {
            (*e->unk_0C)++;
        }
    }
    arg1->unk_118++;
    func_088CE1EC(arg1->unk_11C, arg0->unk_08);
    return 0;
}

}
