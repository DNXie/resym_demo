#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40257E(_DWORD *a1, char **a2, unsigned __int64 a3, _QWORD *a4)
{
  char *result; // rax
  char *v5; // rax
  unsigned int v6; // eax
  char v9; // [rsp+2Fh] [rbp-11h]
  char *v10; // [rsp+30h] [rbp-10h]
  char *s; // [rsp+38h] [rbp-8h]

  if ( *a1 == 4 )
    *a1 = 0;
  if ( *a1 || (s = *a2, (__int64)(a3 - (_QWORD)*a2) <= 3) || memchr(s, 10, 4uLL) )
  {
    v10 = *a2;
    while ( (unsigned __int64)v10 < a3 )
    {
      v5 = v10++;
      v9 = *v5;
      if ( *v5 != 10 )
      {
        v6 = (*a1)++;
        *((_BYTE *)a1 + v6 + 4) = v9;
        if ( *a1 == 4 )
          break;
      }
    }
    *a2 = v10;
    *a4 = (unsigned int)*a1;
    result = (char *)(a1 + 1);
  }
  else
  {
    *a2 += 4;
    *a4 = 4LL;
    result = s;
  }
  return result;
}
