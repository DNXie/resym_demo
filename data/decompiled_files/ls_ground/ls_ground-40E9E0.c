#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40E9E0(__uid_t a1)
{
  const char *v1; // rax
  size_t v2; // rax
  __int64 result; // rax
  __int64 i; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]
  struct passwd *v6; // [rsp+20h] [rbp-10h]
  char *s; // [rsp+28h] [rbp-8h]

  v5 = 0LL;
  for ( i = qword_61E1A0; i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a1 )
    {
      v5 = i;
      break;
    }
  }
  if ( !v5 )
  {
    v6 = getpwuid(a1);
    if ( v6 )
      v1 = v6->pw_name;
    else
      v1 = (const char *)&unk_4190F0;
    s = (char *)v1;
    v2 = strlen(v1);
    v5 = sub_414989(v2 + 17);
    *(_DWORD *)v5 = a1;
    strcpy((char *)(v5 + 16), s);
    *(_QWORD *)(v5 + 8) = qword_61E1A0;
    qword_61E1A0 = v5;
  }
  if ( *(_BYTE *)(v5 + 16) )
    result = v5 + 16;
  else
    result = 0LL;
  return result;
}
