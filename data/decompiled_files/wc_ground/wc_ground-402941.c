#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_402941(int a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax
  int i; // [rsp+14h] [rbp-1Ch]
  _DWORD *v6; // [rsp+18h] [rbp-18h]

  if ( a1 )
    v2 = a1;
  else
    v2 = 1LL;
  v6 = (_DWORD *)sub_406392(v2, 152LL);
  if ( !a1
    || a1 == 1
    && (unsigned __int8)byte_60930B
     + (unsigned __int8)byte_60930A
     + (unsigned __int8)byte_609309
     + (unsigned __int8)byte_609308
     + (unsigned __int8)byte_60930C == 1 )
  {
    *v6 = 1;
  }
  else
  {
    for ( i = 0; i < a1; ++i )
    {
      if ( *(_QWORD *)(8LL * i + a2) && strcmp(*(const char **)(8LL * i + a2), "-") )
        v3 = sub_4069B0(*(char **)(8LL * i + a2), (struct stat *)&v6[38 * i + 2]);
      else
        v3 = sub_4069C0(0, (struct stat *)&v6[38 * i + 2]);
      v6[38 * i] = v3;
    }
  }
  return v6;
}
