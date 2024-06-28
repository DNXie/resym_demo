#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_408781(char *a1, char *a2, char *a3)
{
  char *result; // rax
  int v5; // [rsp+20h] [rbp-20h]
  int v6; // [rsp+24h] [rbp-1Ch]
  iconv_t cd; // [rsp+28h] [rbp-18h]
  void *ptr; // [rsp+30h] [rbp-10h]
  char *v9; // [rsp+38h] [rbp-8h]

  if ( *a1 && (unsigned int)sub_40658A((unsigned __int8 *)a2, (unsigned __int8 *)a3) )
  {
    cd = iconv_open(a3, a2);
    if ( cd == (iconv_t)-1LL )
      return 0LL;
    ptr = sub_40844C(a1, cd);
    if ( ptr )
    {
      if ( iconv_close(cd) < 0 )
      {
        v6 = *__errno_location();
        free(ptr);
        *__errno_location() = v6;
        return 0LL;
      }
    }
    else
    {
      v5 = *__errno_location();
      iconv_close(cd);
      *__errno_location() = v5;
    }
    result = (char *)ptr;
  }
  else
  {
    v9 = strdup(a1);
    if ( !v9 )
      *__errno_location() = 12;
    result = v9;
  }
  return result;
}
