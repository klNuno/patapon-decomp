#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
} Unk;

void func_08858024(s32);
void func_088576F8(void);
f32 func_08856234(f32);
void func_08857D10(f32, f32, f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);

void func_0896D32C(Unk *arg0) {
    U temp;
    U temp2;
    U temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;

    temp6 = arg0->unk_18;
    temp5 = arg0->unk_14;
    temp4 = arg0->unk_10;
    temp.unk_08 = temp6;
    temp.unk_00 = temp4;
    temp2.unk_00 = temp4;
    temp.unk_04 = temp5;
    temp2.unk_04 = temp5;
    temp.unk_0C = 1.0f;
    temp2.unk_0C = 1.0f;
    temp3.unk_04 = 1.0f;
    temp3.unk_0C = 1.0f;
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
}
