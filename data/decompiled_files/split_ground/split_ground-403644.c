#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_403644(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // rax
  const char *v6; // rbx
  int *v7; // rax
  unsigned __int64 result; // rax
  const char *v9; // rbx
  int *v10; // rax
  int *v11; // rax
  const char *v12; // rbx
  int *v13; // rax
  __int64 offset; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  unsigned __int64 v18; // [rsp+48h] [rbp-18h]

  if ( !a1 || !a2 || a1 > a2 || a5 < a2 )
    __assert_fail("k && n && k <= n && n <= file_size", "../../src/src/split.c", 0x2C6u, "bytes_chunk_extract");
  offset = (a1 - 1) * (a5 / a2);
  if ( a1 == a2 )
    v5 = a5;
  else
    v5 = a1 * (a5 / a2);
  v17 = v5;
  if ( lseek(0, offset, 1) < 0 )
  {
    v6 = s1;
    v7 = __errno_location();
    error(1, *v7, "%s", v6);
  }
  while ( 1 )
  {
    result = offset;
    if ( offset >= v17 )
      break;
    result = sub_4053C5(0LL, a3, a4);
    if ( v17 - offset <= result )
      result = v17 - offset;
    v18 = result;
    if ( result < a4 && (result = (unsigned int)*__errno_location(), (_DWORD)result) )
    {
      v9 = s1;
      v10 = __errno_location();
      error(1, *v10, "%s", v9);
    }
    else if ( !v18 )
    {
      return result;
    }
    if ( sub_405445(1LL, a3, v18) != v18 )
    {
      v11 = __errno_location();
      if ( !sub_402178(*v11) )
      {
        v12 = (const char *)sub_4060A6(off_40D563);
        v13 = __errno_location();
        error(1, *v13, "%s", v12);
      }
    }
    offset += v18;
  }
  return result;
}
