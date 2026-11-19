#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    u8 pad_00[0x8EC];
    u8 unk_8EC;
} U;

typedef struct {
    u8 pad_00[8];
    U *unk_08;
} V;

typedef struct {
    u8 pad_00[4];
    V *volatile unk_04;
    u8 pad_08[0x28];
    s32 unk_30;
    s32 unk_34;
} S;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} L;

extern void *D_08AD8DD8[];
void func_08864A30(L *);
void func_08864A68(L *, s32);

void func_088DDDFC(void) {
    L temp;
    func_08864A30(&temp);
    S *temp2 = (S *)D_08AD8DD8[0];
    temp2 = temp2 != NULL ? temp2 : NULL;
    if (temp2->unk_30 + temp2->unk_34 != 0) {
        U *temp3 = temp2->unk_04->unk_08;
        if (temp3 != NULL) {
            temp3->unk_8EC = 1;
            ((T *)temp2->unk_04->unk_08)->unk_14();
        }
    }
    func_08864A68(&temp, -1);
}

}
