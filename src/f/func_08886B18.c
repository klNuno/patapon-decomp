#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
} T0;

typedef struct {
    u8 unk_00[352];
} T1;

typedef struct {
    T1 *unk_00;
    u32 unk_04;
} T;

extern T0 *func_0881E1F4(void);
extern void func_0881CF3C(void *, char *);
extern void func_0881AD0C(void);
extern char D_089FA188[];

T1 *func_08886B18(T *arg0, u32 arg1) {
    if (!(arg1 < arg0->unk_04)) {
        func_0881CF3C(func_0881E1F4()->unk_0C, D_089FA188);
        func_0881AD0C();
    }
    return &arg0->unk_00[arg1];
}
