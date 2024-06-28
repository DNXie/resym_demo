#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40EAC9(const char *a1)
{
  __int64 result; // rax
  size_t v2; // rax
  __int64 i; // [rsp+10h] [rbp-10h]
  __int64 j; // [rsp+10h] [rbp-10h]
  __int64 v5; // [rsp+10h] [rbp-10h]
  struct passwd *v6; // [rsp+18h] [rbp-8h]

  for ( i = qword_61E1A0; i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_BYTE *)(i + 16) == *a1 && !strcmp((const char *)(i + 16), a1) )
      return i;
  }
  for ( j = qword_61E1A8; j; j = *(_QWORD *)(j + 8) )
  {
    if ( *(_BYTE *)(j + 16) == *a1 && !strcmp((const char *)(j + 16), a1) )
      return 0LL;
  }
  v6 = getpwnam(a1);
  v2 = strlen(a1);
  v5 = sub_414989(v2 + 17);
  strcpy((char *)(v5 + 16), a1);
  if ( v6 )
  {
    *(_DWORD *)v5 = v6->pw_uid;
    *(_QWORD *)(v5 + 8) = qword_61E1A0;
    qword_61E1A0 = v5;
    result = v5;
  }
  else
  {
    *(_QWORD *)(v5 + 8) = qword_61E1A8;
    qword_61E1A8 = v5;
    result = 0LL;
  }
  return result;
}
