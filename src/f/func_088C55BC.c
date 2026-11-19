#include "common.h"
typedef struct T T;
typedef struct C_088C3BB8 C_088C3BB8;

void func_088C01DC(char *arg0);
void func_088C3BB8(C_088C3BB8 *arg0, f32 arg1);
void func_088C01F8(T *arg0);

typedef struct {
    u8 pad_00[0x40];
    char unk_40[1];
} A;

void func_088C55BC(A *arg0, f32 arg1) {
    func_088C01DC(arg0->unk_40);
    func_088C3BB8((C_088C3BB8 *)arg0, arg1);
    func_088C01F8((T *)arg0->unk_40);
}
