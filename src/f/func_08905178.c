#include "common.h"

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0;
} T;
typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} U;
extern s32 func_088C6464(void *);
extern void func_088DEFA0(T *);
extern void func_08852F00(void *, s32);

void func_08905178(U *arg0, void *arg1) {
    func_088C6464(&arg0->unk_10->unk_506F0);
    func_088DEFA0(arg0->unk_10);
    func_08852F00(arg1, 0);
}
