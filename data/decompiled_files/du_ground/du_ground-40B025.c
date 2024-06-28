#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_40B025(__int64 a1)
{
  _QWORD *ptr; // [rsp+18h] [rbp-8h]

  ptr = malloc(0x18uLL);
  if ( ptr )
  {
    *ptr = sub_409151(
             1021LL,
             0LL,
             (unsigned __int64 (__fastcall *)(__int64, unsigned __int64))sub_40AF88,
             (bool (__fastcall *)(__int64, __int64))sub_40AFF3,
             (size_t)free);
    if ( !*ptr )
    {
      free(ptr);
      return 0LL;
    }
    ptr[1] = a1;
    ptr[2] = 0LL;
  }
  return ptr;
}
