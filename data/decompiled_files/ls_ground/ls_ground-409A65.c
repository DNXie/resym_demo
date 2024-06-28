#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_409A65(__int64 a1, unsigned __int64 a2)
{
  const char *v2; // rdx
  int v3; // eax
  const char *v4; // rdx
  int v5; // eax
  int v6; // eax
  size_t v8; // [rsp+18h] [rbp-2B8h]
  char v9[664]; // [rsp+20h] [rbp-2B0h] BYREF
  unsigned __int64 v10; // [rsp+2B8h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  sub_402CFD();
  if ( byte_61D6D9 )
  {
    v2 = sub_4087F5((__int64)v9, 0x28CuLL, a1);
    if ( dword_61D69C == 4 )
      v3 = 0;
    else
      v3 = dword_61D674;
    printf("%*s ", v3, v2);
  }
  if ( byte_61D6AB )
  {
    if ( *(_BYTE *)(a1 + 176) != 1 )
      v4 = "?";
    else
      v4 = (const char *)sub_40DD65(*(_QWORD *)(a1 + 80), v9, (unsigned int)dword_61D6AC, 512LL, qword_61D6B0);
    if ( dword_61D69C == 4 )
      v5 = 0;
    else
      v5 = dword_61D678;
    printf("%*s ", v5, v4);
  }
  if ( byte_61D670 )
  {
    if ( dword_61D69C == 4 )
      v6 = 0;
    else
      v6 = dword_61D680;
    printf("%*s ", v6, *(const char **)(a1 + 168));
  }
  v8 = sub_409818((__int64 *)a1, 0, 0LL, a2);
  if ( dword_61D6BC )
    v8 += (unsigned __int8)sub_409D72(
                             *(unsigned __int8 *)(a1 + 176),
                             *(unsigned int *)(a1 + 40),
                             *(unsigned int *)(a1 + 160));
  return v8;
}
