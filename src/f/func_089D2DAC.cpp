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
    u8 pad_00[8];
    u32 unk_08;
    T unk_0C;
} S;

void func_08858024(s32);
void func_088576F8(void);
f32 func_08856234(f32);
void func_08857D10(f32, f32, f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_089D38F0(S *);
void func_089D2EE0(S *);

void func_089D2DAC(S *arg0) {
    struct {
        u8 pad_00[8];
        L_0893CEA8 unk_08;
    } l;
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
    func_08864A30(&l.unk_08);
    func_089D38F0(arg0);
    switch (arg0->unk_08) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        func_089D2EE0(arg0);
        break;
    case 4:
    case 5:
        break;
    }
    arg0->unk_0C.unk_18();
    func_08864A68(&l.unk_08, -1);
}

}
