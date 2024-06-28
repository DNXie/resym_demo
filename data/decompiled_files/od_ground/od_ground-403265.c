#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403265(unsigned __int64 a1)
{
  int v2; // eax
  const char *v3; // rbx
  int *v4; // rax
  bool v5; // bl
  char *v6; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-20D8h]
  bool v8; // [rsp+1Bh] [rbp-20C5h]
  int v9; // [rsp+1Ch] [rbp-20C4h]
  size_t n; // [rsp+20h] [rbp-20C0h]
  size_t v11; // [rsp+28h] [rbp-20B8h]
  struct stat stat_buf; // [rsp+30h] [rbp-20B0h] BYREF
  char ptr[8200]; // [rsp+C0h] [rbp-2020h] BYREF
  unsigned __int64 v14; // [rsp+20C8h] [rbp-18h]

  v7 = a1;
  v14 = __readfsqword(0x28u);
  v8 = 1;
  v9 = 0;
  if ( !a1 )
    return 1LL;
  while ( stream )
  {
    v2 = fileno(stream);
    if ( (unsigned int)sub_40E300(v2, &stat_buf) )
    {
      v3 = filename;
      v4 = __errno_location();
      error(0, *v4, "%s", v3);
      v8 = 0;
    }
    else
    {
      if ( (stat_buf.st_mode & 0xF000) == 0x8000 && stat_buf.st_size > 0 )
      {
        if ( stat_buf.st_size >= v7 )
        {
          if ( (unsigned int)sub_40878D(stream, v7, 1LL) )
          {
            v9 = *__errno_location();
            v8 = 0;
          }
          v7 = 0LL;
        }
        else
        {
          v7 -= stat_buf.st_size;
        }
      }
      else
      {
        n = 0x2000LL;
        while ( v7 )
        {
          if ( v7 < n )
            n = v7;
          v11 = fread_unlocked(ptr, 1uLL, n, stream);
          v7 -= v11;
          if ( v11 != n )
          {
            v9 = *__errno_location();
            v8 = 0;
            v7 = 0LL;
            break;
          }
        }
      }
      if ( !v7 )
        break;
    }
    v5 = (v8 & (unsigned __int8)sub_403028(v9)) != 0;
    v8 = (v5 & (unsigned __int8)sub_402EFF()) != 0;
  }
  if ( v7 )
  {
    v6 = gettext("cannot skip past end of combined input");
    error(1, 0, v6);
  }
  return v8;
}
