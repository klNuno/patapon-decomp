#include "common.h"

extern "C" {
class Z {
public:
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
};

typedef struct {
    u8 pad_00[8];
    Z *unk_08;
} Y_08968CD4;

typedef struct {
    u8 pad_00[8];
    Y_08968CD4 *unk_08;
} N_08968CD4;

typedef struct {
    u8 unk_00[0x10];
} A_08968CD4;

class H_08968CD4 {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10_v();
    virtual s32 unk_14_v();

    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[8];
    A_08968CD4 unk_20[0x180];
    N_08968CD4 unk_1820;
    u8 pad_182C[0x1C];
    u8 unk_1848[0x28];
    u8 unk_1870;
    u8 pad_1871[3];
    f32 unk_1874;
};

typedef struct {
    u8 pad_00[8];
    H_08968CD4 *unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    u8 pad_00[0x438];
    E *unk_438;
} T;

s32 func_08966450(void *);
N_08968CD4 *func_089691F8(void *);
s32 func_0896918C(N_08968CD4 *, N_08968CD4 *);
void func_08969144(H_08968CD4 *, f32);
s32 func_08968F0C(H_08968CD4 *, Y_08968CD4 *);
N_08968CD4 *func_08968E44(N_08968CD4 *, A_08968CD4 *);
void func_08966314(N_08968CD4 *, N_08968CD4 *);
void func_0896671C(void *, N_08968CD4 *);
s32 func_08966988(N_08968CD4 *);

static inline Y_08968CD4 *func_08968F4C_1(H_08968CD4 *arg0) {
    s32 temp0 = arg0->unk_0C();
    N_08968CD4 *temp1;

    if (temp0 >= arg0->unk_10_v()) {
        return NULL;
    }
    if (func_08966450(arg0->unk_1848) != 0) {
        return NULL;
    }
    temp1 = func_089691F8(arg0->unk_1848);
    if (temp1 == NULL) {
        return NULL;
    }
    if ((u8)func_0896918C(&arg0->unk_1820, temp1) == 0) {
        return NULL;
    }
    arg0->unk_14 = func_08966988(&arg0->unk_1820);
    f32 temp2 = (f32)arg0->unk_14 / (f32)arg0->unk_10;
    if (arg0->unk_1870 != 0) {
        f32 temp3 = arg0->unk_1874;
        if (temp2 > temp3) {
            func_08969144(arg0, 0.05f + temp3);
        }
    }
    return temp1->unk_08;
}

Z *func_08968F4C(T *arg0, s32 arg1) {
    H_08968CD4 *temp0 = ((E *)((u8 *)arg0->unk_438 + (arg1 << 4)))->unk_08;
    if (temp0 == NULL) {
        return NULL;
    }
    Y_08968CD4 *temp1 = NULL;
    s32 temp2 = temp0->unk_14_v();

    for (s32 temp3 = 0; temp3 < temp2; temp3++) {
        temp1 = func_08968F4C_1(temp0);
        if (temp1 == NULL) {
            return NULL;
        }
        if (temp1->unk_08 != NULL) {
            break;
        }
        s32 temp4 = func_08968F0C(temp0, temp1);
        if (temp4 != -1) {
            N_08968CD4 *temp5 = func_08968E44(&temp0->unk_1820, &temp0->unk_20[temp4]);
            if (temp5 != NULL) {
                func_08966314(&temp0->unk_1820, temp5);
                func_0896671C(temp0->unk_1848, temp5);
                temp0->unk_14 = func_08966988(&temp0->unk_1820);
            }
        }
        temp1 = NULL;
    }

    if (temp1 == NULL) {
        return NULL;
    }
    temp1->unk_08->unk_54();
    return temp1->unk_08;
}
}
