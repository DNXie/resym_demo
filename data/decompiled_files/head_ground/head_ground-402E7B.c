#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402E7B(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  size_t v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  char *v10; // rbx
  int *v11; // rax
  int errnum; // [rsp+24h] [rbp-20CCh]
  size_t n; // [rsp+28h] [rbp-20C8h]
  unsigned __int64 v15; // [rsp+30h] [rbp-20C0h]
  struct stat stat_buf; // [rsp+40h] [rbp-20B0h] BYREF
  char ptr[8200]; // [rsp+D0h] [rbp-2020h] BYREF
  unsigned __int64 v18; // [rsp+20D8h] [rbp-18h]

  v18 = __readfsqword(0x28u);
  while ( a3 )
  {
    v15 = sub_405564(a2, ptr, 0x2000LL);
    n = 0LL;
    if ( v15 == -1LL )
    {
      v3 = sub_403DCC(a1);
      v4 = gettext("error reading %s");
      v5 = __errno_location();
      error(0, *v5, v4, v3);
      return 0LL;
    }
    if ( !v15 )
      break;
    while ( n < v15 )
    {
      v7 = n++;
      if ( ptr[v7] == 10 && !--a3 )
      {
        if ( lseek(a2, n - v15, 1) < 0 )
        {
          errnum = *__errno_location();
          if ( (unsigned int)sub_406950(a2, &stat_buf) || (stat_buf.st_mode & 0xF000) == 0x8000 )
          {
            v8 = sub_403DCC(a1);
            v9 = gettext("cannot reposition file pointer for %s");
            error(0, errnum, v9, v8);
          }
        }
        break;
      }
    }
    if ( fwrite_unlocked(ptr, 1uLL, n, stdout) < n )
    {
      v10 = gettext("write error");
      v11 = __errno_location();
      error(1, *v11, v10);
    }
  }
  return 1LL;
}
