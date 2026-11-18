#include "common.h"

extern "C" {
class V {
public:
    u8 pad_00[0x10];
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
};

typedef struct {
    u8 pad_00[0x90];
    V *unk_90;
} H;

typedef struct {
    u8 pad_00[8];
    H *unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    u8 pad_00[0x1C];
} U;

typedef struct {
    u8 pad_00[0x20];
    E unk_20[0xE00];
    E unk_E020[0xE00];
    E unk_1C020[0xE00];
    U unk_2A020[0xE00];
    u8 pad_42820[0xA80B0];
    u8 unk_EA8D0[0x130];
    u8 unk_EAA00[0x130];
} T;

typedef struct S_0896CAB8 S_0896CAB8;

extern s32 D_089DD038[];
extern s32 D_089F8DA8[];
extern s32 D_089F8EDC[];
void func_0885DE4C(void *);
void func_08868480(void *, s32);
void func_0886853C(void *);
void func_08868554(void *, s32);
void func_08868610(void *);
void func_08868628(void *, s32);
void func_088686E4(void *);
void func_08868B2C(void *, void *);
void func_08868B70(void *, void *);
void func_08868BB4(void *, void *);
void func_0896CB54(S_0896CAB8 *, s32);
void *func_0896CE18(void *, s32, s32, s32);

void func_0886891C(T *arg0, s32 arg1) {
    u8 c[0x10], b[0x10], a[0x10];
    s32 start;
    s32 end;
    void *q;
    s32 i;
    s32 *p;
    s32 *k;
    s32 j;
    E *r;
    U *u;

    start = 0;
    end = 0xE00;
    if (arg1 != 0xF) {
        start = D_089DD038[arg1];
        end = start + 0x100;
    }
    func_0896CB54((S_0896CAB8 *)arg0->unk_EAA00, arg1);
    q = arg0->unk_EA8D0;
    i = 0;
    p = D_089F8DA8;
    k = &D_089F8EDC[arg1];
    do {
        void *temp = func_0896CE18(q, *p, 0, 1);
        if (arg1 != 0xF) {
            temp = func_0896CE18(temp, *k, 0, 1);
        }
        if (temp != NULL) {
            func_0896CB54((S_0896CAB8 *)temp, -1);
        }
        i++;
        p++;
    } while (i < 4);
    j = start;
    if (j < end) {
        r = (E *)arg0 + j;
        do {
            T *s = (T *)r;
            H *h = s->unk_20[0].unk_08;
            if (h != NULL) {
                h->unk_90->unk_34();
            }
            func_088686E4(c);
            func_08868BB4(c, s->unk_20);
            func_08868628(c, -1);
            func_08868610(b);
            func_08868B70(b, s->unk_E020);
            func_08868554(b, -1);
            j++;
            r++;
        } while (j < end);
    }
    if (start < end) {
        u = (U *)arg0 + start;
        r = (E *)arg0 + start;
        do {
            func_0885DE4C(((T *)u)->unk_2A020);
            func_0886853C(a);
            func_08868B2C(a, ((T *)r)->unk_1C020);
            func_08868480(a, -1);
            start++;
            u++;
            r++;
        } while (start < end);
    }
}
}
