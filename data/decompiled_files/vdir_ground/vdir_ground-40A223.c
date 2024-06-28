#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A223(__int64 a1)
{
  const char *v1; // rax
  __int64 v2; // rax
  const char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char v7; // [rsp+1Fh] [rbp-2C1h]
  size_t v8; // [rsp+20h] [rbp-2C0h] BYREF
  __int64 v9; // [rsp+28h] [rbp-2B8h]
  char v10[664]; // [rsp+30h] [rbp-2B0h] BYREF
  unsigned __int64 v11; // [rsp+2C8h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  v9 = 0LL;
  if ( byte_61D6D9 )
  {
    if ( dword_61D69C == 4 )
    {
      v1 = (const char *)sub_40EF8A(*(_QWORD *)(a1 + 24), v10);
      v2 = strlen(v1) + 1;
    }
    else
    {
      v2 = dword_61D674 + 1LL;
    }
    v9 += v2;
  }
  if ( byte_61D6AB )
  {
    if ( dword_61D69C == 4 )
    {
      if ( *(_BYTE *)(a1 + 176) != 1 )
        v3 = "?";
      else
        v3 = (const char *)sub_40DD65(*(_QWORD *)(a1 + 80), v10, (unsigned int)dword_61D6AC, 512LL, qword_61D6B0);
      v4 = strlen(v3) + 1;
    }
    else
    {
      v4 = dword_61D678 + 1LL;
    }
    v9 += v4;
  }
  if ( byte_61D670 )
  {
    if ( dword_61D69C == 4 )
      v5 = strlen(*(const char **)(a1 + 168)) + 1;
    else
      v5 = dword_61D680 + 1LL;
    v9 += v5;
  }
  sub_4092DE(0LL, *(_QWORD *)a1, qword_61D700, &v8);
  v9 += v8;
  if ( dword_61D6BC )
  {
    v7 = sub_409C3D(*(_BYTE *)(a1 + 176), *(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 160));
    v9 += v7 != 0;
  }
  return v9;
}
