#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40325C(_QWORD *a1)
{
  __int64 result; // rax
  const char *v2; // rbx
  int *v3; // rax
  const char *v4; // rbx
  int *v5; // rax
  int i; // [rsp+14h] [rbp-1Ch]
  _DWORD *v7; // [rsp+18h] [rbp-18h]

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result != 3 )
  {
    if ( ferror_unlocked((FILE *)*a1) )
    {
      v2 = (const char *)a1[1];
      v3 = __errno_location();
      error(1, *v3, "%s", v2);
    }
    if ( fileno((FILE *)*a1) && (unsigned int)sub_40B42C(*a1) )
    {
      v4 = (const char *)a1[1];
      v5 = __errno_location();
      error(1, *v5, "%s", v4);
    }
    if ( byte_610370 != 1 )
    {
      v7 = qword_610340;
      for ( i = dword_61025C; i; --i )
      {
        v7[4] = 3;
        if ( !v7[11] )
          v7[12] = 0;
        v7 += 16;
      }
    }
    else
    {
      *((_DWORD *)a1 + 4) = 3;
      *((_DWORD *)a1 + 12) = 0;
    }
    result = (unsigned int)--dword_6103A8;
  }
  return result;
}
