#include "common.h"

extern "C" {

typedef struct { f32 unk_00, unk_04; } T0;
typedef struct {
    u8 pad_00[0x28];
    s32 unk_28, unk_2C, unk_30;
    u8 pad_34[0x10];
    s32 unk_44, unk_48;
    u8 pad_4C[8];
    s32 unk_54, unk_58;
} T3;
typedef struct N {
    struct N *unk_00, *unk_04;
    u8 pad_08[4];
    struct N *unk_0C;
    u8 pad_10[0x10];
    T3 *unk_20;
} N;
typedef struct {
    u8 pad_00[8];
    N *unk_08;
} E;
class T {
public:
    virtual s32 unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};
typedef struct {
    u8 pad_00[0x10];
    s32 unk_10, unk_14;
    u8 pad_18[0x4408];
    u8 unk_4420[0x28];
    u8 unk_4448[0x28];
    u8 unk_4470;
    u8 pad_4471[3];
    f32 unk_4474;
} U;
typedef struct {
    u8 pad_00[0x20];
    s32 unk_20, unk_24;
    struct {
        N *unk_00, *unk_04;
        u8 pad_08[0x18];
        s32 unk_20;
        u8 pad_24[4];
    } unk_28;
    U *unk_50;
} S;
typedef struct {
    s32 unk_00, unk_04, unk_08, unk_0C;
    T0 unk_10, unk_18;
    s32 unk_20;
} R;

T3 *func_08880C8C(s32);
s32 func_08881BA8(char *arg0);
extern s32 func_08882F6C(s32, s32);
extern void func_088830C8(T3 *, T0 *, T0 *);
void func_0895AF38(U *, f32);
s32 func_0895AF80(void *, E *);
E *func_0895AFEC(void *);
s32 func_0895B048(char *arg0);

inline N *func_0895ACD8_1(U *arg0) {
    s32 temp = ((T *)arg0)->unk_0C();
    if (temp >= ((T *)arg0)->unk_10()) {
        return NULL;
    }
    if (func_0895B048((char *)arg0->unk_4448) != 0) {
        return NULL;
    }
    E *temp2 = func_0895AFEC(arg0->unk_4448);
    if (temp2 == NULL) {
        return NULL;
    }
    if ((u8)func_0895AF80(arg0->unk_4420, temp2) == 0) {
        return NULL;
    }
    arg0->unk_14 = func_08881BA8((char *)arg0->unk_4420);
    f32 temp3 = (f32)arg0->unk_14 / (f32)arg0->unk_10;
    if (arg0->unk_4470 != 0 && temp3 > arg0->unk_4474) {
        func_0895AF38(arg0, 0.05f + arg0->unk_4474);
    }
    return temp2->unk_08;
}

inline s32 func_0895ACD8_2(S *arg0, N *arg1) {
    N *temp = (N *)&arg0->unk_28;
    if (arg0->unk_28.unk_00 != temp) {
        arg1->unk_00 = arg0->unk_28.unk_00;
        arg0->unk_28.unk_00->unk_04 = arg1;
        arg0->unk_28.unk_00 = arg1;
        return 1;
    } else {
        arg0->unk_28.unk_00 = arg1;
        arg0->unk_28.unk_04 = arg1;
        arg1->unk_00 = temp;
    }
    return 1;
}

s32 func_0895ACD8(S *arg0, R *arg1) {
    if (arg1 == NULL) {
        return -1;
    }
    s32 temp = arg1->unk_0C;
    if (temp >= 0x100) {
        return -1;
    }
    s32 temp2 = arg0->unk_24;
    if (temp2 == 0) {
        return -1;
    }
    T3 *temp3 = func_08880C8C(temp2);
    if (temp3 == NULL) {
        return -1;
    }
    T0 temp4, temp5;
    temp4.unk_00 = arg1->unk_10.unk_00;
    temp4.unk_04 = arg1->unk_10.unk_04;
    temp5.unk_00 = arg1->unk_18.unk_00;
    temp5.unk_04 = arg1->unk_18.unk_04;
    func_088830C8(temp3, &temp4, &temp5);
    s32 temp6 = arg1->unk_20;
    if (temp6 >= 0 && arg0->unk_20 != 0) {
        temp3->unk_2C = arg0->unk_20;
        temp3->unk_30 = temp6;
    }
    func_08882F6C((s32)temp3, 1);
    if (arg0->unk_20 != 0) {
        temp3->unk_28 = arg0->unk_20 + 0x30;
    }
    s32 temp7 = arg1->unk_08;
    s32 temp8 = arg1->unk_04;
    s32 temp9 = arg1->unk_00;
    temp3->unk_44 = temp9;
    temp3->unk_54 = temp8;
    temp3->unk_58 = temp;
    temp3->unk_48 = temp7;
    if (arg0->unk_50 != NULL) {
        U *temp10 = arg0->unk_50;
        N *temp11 = func_0895ACD8_1(temp10);
        temp11->unk_20 = temp3;
        if ((N *)&arg0->unk_28 != temp11) {
            s32 temp12 = func_0895ACD8_2(arg0, temp11);
            temp11->unk_04 = (N *)&arg0->unk_28;
            if (temp12 != 0) {
                temp11->unk_0C = (N *)&arg0->unk_28;
                arg0->unk_28.unk_20++;
            }
        }
    }
    return arg0->unk_28.unk_20 - 1;
}

}
