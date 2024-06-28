#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403FE4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  _BYTE *v11; // [rsp+8h] [rbp-18h]
  __int64 i; // [rsp+10h] [rbp-10h]
  unsigned __int64 j; // [rsp+18h] [rbp-8h]

  v11 = (_BYTE *)a1;
  result = a2;
  for ( i = a2; i; --i )
  {
    if ( *v11 == byte_60E278 )
    {
      result = qword_60E368;
      if ( qword_60E3F8 < (unsigned __int64)qword_60E368 )
      {
        for ( j = qword_60E3F8; ; ++j )
        {
          result = qword_60E368;
          if ( j >= qword_60E368 )
            break;
          v7 = (int)s;
          v8 = qword_60E3F0++;
          *((_BYTE *)s + v8) = byte_60E279;
          if ( qword_60E3F0 >= n )
            sub_402B6D(a1, a2, qword_60E3F0, v7, a5, a6);
        }
      }
      qword_60E3F8 = 0LL;
    }
    else
    {
      if ( qword_60E3F8 == qword_60E368 )
      {
        ++qword_60E3E0;
      }
      else if ( qword_60E3F8 < (unsigned __int64)qword_60E368 )
      {
        v9 = (int)s;
        v10 = qword_60E3F0++;
        *((_BYTE *)s + v10) = *v11;
        if ( qword_60E3F0 >= n )
          sub_402B6D(a1, a2, qword_60E3F0, v9, a5, a6);
      }
      result = ++qword_60E3F8;
    }
    ++v11;
  }
  return result;
}
