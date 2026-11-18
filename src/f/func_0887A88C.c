#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    void **unk_28;
    s32 unk_2C;
} S1_0887A88C;

typedef struct {
    u8 pad_00[0x1C];
    S1_0887A88C unk_1C;
} S2_0887A88C;

typedef struct {
    u8 pad_00[4];
    S2_0887A88C *unk_04;
} Obj_0887A88C;

void func_0887AF74(void *);
void func_0887B678(void **, void **, void **);

void func_0887A88C(Obj_0887A88C *arg0) {
    S2_0887A88C *temp_v1;
    S1_0887A88C *temp_s1;
    void **p;
    void **temp2;

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
}
