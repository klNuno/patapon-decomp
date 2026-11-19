#include "common.h"

void func_08889CA8(void **, void *);
void func_08889CB0(void **, void *);
void func_08889D30(void **, void *, void *, void *);
void func_088B25F4(void *);

typedef struct {
    u8 pad_00[0x618];
    u8 unk_618[0x10];
    u8 unk_628;
} T;

void func_08889FA4(T *arg0) {
    void *temp0;
    void *temp1;
    void *temp2;

    func_08889CB0(&temp1, arg0->unk_618);
    func_08889CA8(&temp2, arg0->unk_618);
    func_08889D30(&temp0, arg0->unk_618, temp1, temp2);
    func_088B25F4(&arg0->unk_628);
}
