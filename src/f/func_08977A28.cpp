#include "common.h"

extern "C" {

typedef struct N N;

extern void *D_08AD8DD8[];
extern void func_0892E524(N *arg0);
extern void func_0899159C(void *);

void func_08977A28(void *arg0) {
    func_0899159C((u8 *)arg0 + 0x10);
    func_0892E524(D_08AD8DD8[0] != NULL ? (N *)D_08AD8DD8[0] : NULL);
}

}
