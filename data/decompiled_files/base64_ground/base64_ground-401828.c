#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401828(char *a1, size_t a2, __int64 a3, _QWORD *a4, FILE *a5)
{
  char *v5; // rbx
  int *v6; // rax
  size_t v7; // rax
  char *v8; // rbx
  int *v9; // rax
  char *v10; // rbx
  int *v11; // rax
  size_t v15; // [rsp+38h] [rbp-28h]
  size_t v16; // [rsp+48h] [rbp-18h]

  if ( a3 )
  {
    v15 = 0LL;
    while ( v15 < a2 )
    {
      v7 = a3 - *a4;
      if ( a2 - v15 <= v7 )
        v7 = a2 - v15;
      v16 = v7;
      if ( v7 )
      {
        if ( fwrite_unlocked(&a1[v15], 1uLL, v7, stdout) < v7 )
        {
          v10 = gettext("write error");
          v11 = __errno_location();
          error(1, *v11, v10);
        }
        *a4 += v16;
        v15 += v16;
      }
      else
      {
        if ( fputs_unlocked("\n", a5) < 0 )
        {
          v8 = gettext("write error");
          v9 = __errno_location();
          error(1, *v9, v8);
        }
        *a4 = 0LL;
      }
    }
  }
  else if ( fwrite_unlocked(a1, 1uLL, a2, stdout) < a2 )
  {
    v5 = gettext("write error");
    v6 = __errno_location();
    error(1, *v6, v5);
  }
}
