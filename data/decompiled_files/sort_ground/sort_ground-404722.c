#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404722(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  __int64 v6; // rdi
  bool v7; // al
  char *v8; // rbx
  char *v9; // rax
  __int64 v14; // [rsp+38h] [rbp-C8h]
  unsigned __int64 i; // [rsp+40h] [rbp-C0h]
  __off_t v16; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v18; // [rsp+58h] [rbp-A8h]
  struct stat stat_buf; // [rsp+60h] [rbp-A0h] BYREF

  v17 = a5 + 1;
  v14 = a5 + 2;
  for ( i = 0LL; i < a4; ++i )
  {
    if ( i >= a2 )
    {
      if ( !strcmp(*(const char **)(8 * i + a3), "-") )
      {
        v6 = 0LL;
        v7 = (unsigned int)sub_417170(0, &stat_buf) != 0;
      }
      else
      {
        v6 = *(_QWORD *)(8 * i + a3);
        v7 = (unsigned int)sub_417160((char *)v6, &stat_buf) != 0;
      }
    }
    else
    {
      v5 = fileno(*(FILE **)(8 * i + a1));
      v6 = v5;
      v7 = (unsigned int)sub_417170(v5, &stat_buf) != 0;
    }
    if ( v7 )
    {
      v8 = *(char **)(8 * i + a3);
      v9 = gettext("stat failed");
      sub_402C5C(v9, v8);
    }
    if ( (stat_buf.st_mode & 0xF000) == 0x8000 )
    {
      v16 = stat_buf.st_size;
    }
    else
    {
      if ( qword_61D9E0 )
        return qword_61D9E0;
      v16 = 0x20000LL;
    }
    if ( !qword_61DB68 )
    {
      qword_61DB68 = qword_61D9E0;
      if ( !qword_61D9E0 )
        qword_61DB68 = sub_40456F(v6, (__int64)&stat_buf);
    }
    v18 = v17 * v16 + 1;
    if ( v16 != v18 / v17 || qword_61DB68 - v14 <= v18 )
      return qword_61DB68;
    v14 += v18;
  }
  return v14;
}
