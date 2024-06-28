#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4073A1(void *a1, size_t a2)
{
  void *result; // rax
  __int64 v3; // rdx
  void *ptr; // [rsp+8h] [rbp-8h]

  if ( a2 || !a1 )
  {
    ptr = realloc(a1, a2);
    if ( !ptr )
    {
      if ( a2 )
        sub_4074EE(a1, a2, v3);
    }
    result = ptr;
  }
  else
  {
    free(a1);
    result = 0LL;
  }
  return result;
}
