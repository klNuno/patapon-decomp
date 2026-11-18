#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0x14];
    u8 unk_1C[0x10A3C];
    T unk_10A58;
} S;

void func_08858024(s32);
void func_088576F8(void);
f32 func_08856234(f32);
void func_08857D10(f32, f32, f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_089D1C60(void *);
void func_089D1CA4(void *, f32 *);
f32 *func_089D1D40(void *);

void func_089D6AE8(S *arg0) {
    L_0893CEA8 l;
    f32 temp4[2];
    U temp;
    U temp2;
    U temp3;
    f32 temp6;

    temp.unk_08 = 100.0f;
    temp.unk_0C = 1.0f;
    temp2.unk_0C = 1.0f;
    temp3.unk_04 = 1.0f;
    temp3.unk_0C = 1.0f;
    temp.unk_00 = 0.0f;
    temp.unk_04 = 0.0f;
    temp2.unk_00 = 0.0f;
    temp2.unk_04 = 0.0f;
    temp2.unk_08 = 0.0f;
    temp3.unk_00 = 0.0f;
    temp3.unk_08 = 0.0f;
    func_08858024(0);
    func_088576F8();
    temp6 = temp.unk_08 * func_08856234(45.0f);
    func_08857D10((30.0f / 17.0f) * -temp6, (30.0f / 17.0f) * temp6, -temp6, temp6, 0.1f, 1000.0f);
    func_08858024(1);
    func_088576F8();
    func_08857E5C(&temp, &temp2, &temp3);
    func_08858024(2);
    func_08864A30(&l);
    switch (arg0->unk_04) {
    case 0:
    case 1:
    case 2:
    case 3:
        break;
    case 4:
    case 5:
        temp4[0] = *func_089D1D40(arg0->unk_1C);
        f32 temp7 = 240.0f - 0.5f * temp4[0];
        temp4[1] = 72.0f;
        temp4[0] = temp7;
        func_089D1CA4(arg0->unk_1C, temp4);
        func_089D1C60(arg0->unk_1C);
        break;
    case 6:
        break;
    }
    arg0->unk_10A58.unk_18();
    func_08864A68(&l, -1);
}

}
