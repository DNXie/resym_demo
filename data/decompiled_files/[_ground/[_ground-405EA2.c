#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405EA2(void *a1, size_t a2)
{
  void *result; // rax
  void *ptr; // [rsp+8h] [rbp-8h]

  if ( a2 || !a1 )
  {
    ptr = realloc(a1, a2);
    if ( !ptr )
    {
      if ( a2 )
        sub_405FEF();
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
