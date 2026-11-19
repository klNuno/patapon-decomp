#include "common.h"

extern "C" {

typedef struct S1_0887A910 {
    u8 pad_00[0x28];
    void **unk_28;
    s32 unk_2C;
} S1_0887A910;

typedef struct S2_0887A910 {
    u8 pad_00[0x1C];
    S1_0887A910 unk_1C;
} S2_0887A910;

class V_0887A910 {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual s32 v19();
};

typedef struct Obj_0887A910 {
    u8 pad_00[4];
    S2_0887A910 *unk_04;
    u8 pad_08[0x18];
    u8 unk_20;
    u8 pad_21[3];
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[0x18];
    s32 unk_44;
} Obj_0887A910;

void func_0887AF74(void *);
void func_0887B678(void **, void **, void **);
void func_0887B2F8(void *);
void func_0887ADC0(void *, s32);

void func_0887A910(Obj_0887A910 *arg0, s32 arg1, s32 arg2) {
    S2_0887A910 *temp_v1;
    S1_0887A910 *temp_s1;
    void **p;
    void **temp2;
    s32 temp;
    void **data;
    S2_0887A910 *w;
    S1_0887A910 *q;
    void **r;
    void **e;
    void **d;

    temp_v1 = arg0->unk_04;
    if (temp_v1 != NULL) {
        temp2 = temp_v1->unk_1C.unk_28 + temp_v1->unk_1C.unk_2C;
        p = temp_v1->unk_1C.unk_28;
        temp_s1 = &temp_v1->unk_1C;
        while (p != temp2 && *p != arg0) {
            p++;
        }
        if (p != temp2) {
            func_0887B678(p, p + 1, temp2);
            temp_s1->unk_2C--;
        }
    }
    func_0887AF74(arg0);
    if (arg1 == 0) {
        arg0->unk_24 = arg2;
        arg0->unk_28 = arg2;
        func_0887B2F8(arg0);
        func_0887ADC0(arg0, arg2);
        arg0->unk_20 = 0;
    } else {
        temp = ((V_0887A910 *)arg0->unk_04)->v19();
        arg0->unk_24 = temp;
        arg0->unk_28 = temp;
        func_0887B2F8(arg0);
        func_0887ADC0(arg0, temp);
        w = arg0->unk_04;
        s32 temp3 = *(volatile s32 *)&w->unk_1C.unk_2C;
        q = &w->unk_1C;
        d = w->unk_1C.unk_28;
        e = d + temp3;
        r = d;
        while (r != e && *r != arg0) {
            r++;
        }
        if (r == e) {
            r = d + q->unk_2C;
            if (r != NULL) {
                *r = arg0;
            }
            q->unk_2C++;
        }
    }
    arg0->unk_44 = 1;
}

}
