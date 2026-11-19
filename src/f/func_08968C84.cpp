#include "common.h"

extern "C" {
void func_08962FF0(void *);
void func_08962FF8(void *);
void func_08967E58(void *, s32);

void func_08968C84(void *arg0)
{
    func_08962FF0(arg0);
    func_08962FF8(arg0);
    func_08967E58(arg0, 0x1E);
    func_08967E58(arg0, 0x19);
    func_08967E58(arg0, 6);
}
}
