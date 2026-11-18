#include "common.h"

extern "C" {

struct T {
    T *unk_00;
    T *unk_04;
    u8 unk_08[16];
};

struct Obj;

struct V {
    T *unk_00;
    u8 pad_04[4];
    T *unk_08;
    s32 unk_0C;
};

struct E {};
union I {
    f32 unk_00_F;
    f32 get(const E &arg0 = E()) const { return unk_00_F; }
    T *unk_00;
    s32 eq(const I &arg0) const { return unk_00 == arg0.unk_00; }
    bool ne(const I &arg0, const E &arg1 = E()) const { return !(bool)eq(arg0); }
};

void func_089C6290(Obj *);

void func_089C536C(I *arg0, V *arg1, I arg2, I arg3) {
    I temp;
    I end;
    s32 count;
    f32 ret;
    T *a;
    T *b;

    if (arg2.unk_00 == arg3.unk_00) {
        *arg0 = arg3;
        return;
    }
    temp.unk_00 = arg1->unk_00;
    end.unk_00 = (T *)arg1;
    count = 0;
    while (temp.ne(end)) {
        temp.unk_00 = temp.unk_00->unk_00;
        count++;
    }
    arg1->unk_0C -= count;
    temp = arg2;
    while (temp.ne(arg3)) {
        func_089C6290((Obj *)temp.unk_00->unk_08);
        temp.unk_00 = temp.unk_00->unk_00;
    }
    a = arg1->unk_08;
    ret = arg3.get();
    arg2.unk_00->unk_04->unk_00 = arg3.unk_00;
    b = arg3.unk_00->unk_04;
    arg3.unk_00->unk_04 = arg2.unk_00->unk_04;
    arg2.unk_00->unk_04 = a->unk_04;
    a->unk_04->unk_00 = arg2.unk_00;
    a->unk_04 = b;
    b->unk_00 = a;
    arg0->unk_00_F = ret;
}

}
