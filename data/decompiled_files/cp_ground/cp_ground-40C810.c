#include "/share/binary_recovery/clang-parser/defs.hh"
size_t *__fastcall sub_40C810(__int64 a1, void *a2, unsigned __int64 (__fastcall *a3)(__int64 a1, unsigned __int64 a2), bool (__fastcall *a4)(__int64 a1, __int64 a2), size_t a5)
{
  size_t *result; // rax
  bool (__fastcall *v7)(__int64, __int64); // [rsp+10h] [rbp-30h]
  unsigned __int64 (__fastcall *v8)(__int64, unsigned __int64); // [rsp+18h] [rbp-28h]
  void *v9; // [rsp+20h] [rbp-20h]
  size_t *ptr; // [rsp+38h] [rbp-8h]

  v9 = a2;
  v8 = a3;
  v7 = a4;
  if ( !a3 )
    v8 = sub_40C5DE;
  if ( !a4 )
    v7 = sub_40C615;
  ptr = (size_t *)malloc(0x50uLL);
  if ( !ptr )
    return 0LL;
  if ( !a2 )
    v9 = &unk_418B20;
  ptr[5] = (size_t)v9;
  if ( (unsigned __int8)sub_40C62E((__int64)ptr) == 1
    && (ptr[2] = sub_40C726(a1, (__int64)v9)) != 0
    && (*ptr = (size_t)calloc(ptr[2], 0x10uLL)) != 0 )
  {
    ptr[1] = 16 * ptr[2] + *ptr;
    ptr[3] = 0LL;
    ptr[4] = 0LL;
    ptr[6] = (size_t)v8;
    ptr[7] = (size_t)v7;
    ptr[8] = a5;
    ptr[9] = 0LL;
    result = ptr;
  }
  else
  {
    free(ptr);
    result = 0LL;
  }
  return result;
}
