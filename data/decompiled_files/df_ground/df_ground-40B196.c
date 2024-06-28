#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40B196(void **a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // [rsp+20h] [rbp-10h] BYREF
  void *ptr; // [rsp+28h] [rbp-8h]

  ptr = (void *)sub_40E0CB(0LL, &v4, a2, a3);
  if ( !ptr )
    return 0xFFFFFFFFLL;
  if ( v4 <= 0x7FFFFFFF )
  {
    *a1 = ptr;
    result = v4;
  }
  else
  {
    free(ptr);
    *__errno_location() = 75;
    result = 0xFFFFFFFFLL;
  }
  return result;
}
