#include "common.h"
typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_08814BB4(s32);
extern void func_089856F4(s32);

void func_089C1A34(s32 arg0) {
    L_0893CEA8 temp;
    func_08864A30(&temp);
    func_08814BB4(5);
    func_089856F4(arg0);
    func_08864A68(&temp, -1);
}
