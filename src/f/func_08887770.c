#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
} R_08887770;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    u32 unk_08;
} V_08887770;

R_08887770 *func_0881E1F4(void);
void func_0881CF3C(void *, char *);
void func_0881AD0C(void);
void *func_08804338(u32);
extern char D_089FA1A8[];
extern char D_089DDF44[];

void func_08887770(V_08887770 *arg0, u32 arg1) {
    void *p;
    struct { V_08887770 *unk_00; } o;

    o.unk_00 = arg0;
    if (arg1 > 0xBA2E8BU) {
        func_0881CF3C(func_0881E1F4()->unk_0C, D_089FA1A8);
        func_0881AD0C();
    }
    p = func_08804338(arg1 * 0x160);
    if (p == NULL) {
        func_0881CF3C(func_0881E1F4()->unk_0C, D_089DDF44);
        func_0881AD0C();
    }
    o.unk_00->unk_00 = p;
    o.unk_00->unk_08 = arg1;
}
