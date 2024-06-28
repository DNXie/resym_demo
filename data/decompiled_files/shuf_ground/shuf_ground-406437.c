#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_406437(const char *a1, unsigned __int64 *a2, const char *a3)
{
  int v4; // [rsp+2Ch] [rbp-14h]
  FILE *v5; // [rsp+30h] [rbp-10h]
  char *ptr; // [rsp+38h] [rbp-8h]

  v5 = fopen(a1, a3);
  if ( !v5 )
    return 0LL;
  ptr = sub_40615A(v5, a2);
  v4 = *__errno_location();
  if ( !(unsigned int)sub_407586(v5) )
    return ptr;
  if ( ptr )
  {
    v4 = *__errno_location();
    free(ptr);
  }
  *__errno_location() = v4;
  return 0LL;
}
