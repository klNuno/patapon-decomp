#include "common.h"

extern "C" {

class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

struct N {
    s32 unk_00;
    N *unk_04;
    V *unk_08;

    int func_00(N *arg0)
    {
        int temp = 0;
        if (unk_08 == arg0->unk_08 && unk_04 == arg0->unk_04) {
            temp = 1;
        }
        return temp;
    }

    int func_04(N *arg0)
    {
        int temp = 0;
        if (func_00(arg0) && unk_00 == arg0->unk_00) {
            temp = 1;
        }
        return temp;
    }

    bool func_08(N *arg0)
    {
        return !(bool)func_04(arg0);
    }
};

union I {
    N *unk_00;
    f32 unk_04;
};

struct T {
    N unk_00;
    u8 pad_0C[0x24];
    s32 unk_30;
    s32 unk_34;
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
extern void *D_08AD8DD8[];

static inline T *func_088DDE78_00()
{
    T *temp = (T *)D_08AD8DD8[0];
    return temp != NULL ? temp : NULL;
}

void func_088DDE78(void)
{
    L_0893CEA8 temp;
    I temp2;
    struct { I unk_00; u8 pad_04[4]; } temp3;
    struct { T *unk_00; } temp4;
    I *temp6;
    N *temp7;
    V *temp5;

    func_08864A30(&temp);
    temp4.unk_00 = func_088DDE78_00();
    if (temp4.unk_00->unk_30 + temp4.unk_00->unk_34 != 0) {
        N *temp8 = (temp3.unk_00.unk_00 = temp4.unk_00->unk_00.unk_04);
        temp6 = &temp3.unk_00;
        if (temp8 != NULL) {
            **(N ***)&temp6 = temp8->unk_04;
        }
        temp2 = *temp6;
        for (; (temp7 = *(N *volatile *)&temp2.unk_00, temp7->func_08(&temp4.unk_00->unk_00));) {
            temp5 = (*(N *volatile *)&temp2.unk_00)->unk_08;
            if (temp5 != NULL) {
                temp5->unk_14();
            }
            if (temp2.unk_00 != NULL) {
                temp2.unk_00 = temp2.unk_00->unk_04;
            }
        }
    }
    func_08864A68(&temp, -1);
}

}
