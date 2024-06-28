#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401BAC(int a1, __int64 a2, char a3, int a4, __int64 a5, __int64 a6, const char *a7, const char *a8, __int64 a9, const char *a10)
{
  size_t v10; // rax
  const char *v11; // rdx
  const char *v12; // rax
  char *v13; // rbx
  char *v18; // [rsp+88h] [rbp-58h] BYREF
  char *v19; // [rsp+90h] [rbp-50h]
  char *v20; // [rsp+98h] [rbp-48h]
  char v21[16]; // [rsp+A0h] [rbp-40h] BYREF
  char v22[24]; // [rsp+B0h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+C8h] [rbp-18h]

  v23 = __readfsqword(0x28u);
  byte_60F239 = a3;
  if ( byte_60F2C3 && byte_60F2C2 != 1 && strlen(a7) <= 6 )
    sprintf(v21, " %-6s", a7);
  else
    v21[0] = 0;
  if ( byte_60F2C2 != 1 && strlen(a8) <= 0xB )
    sprintf(v22, " %10s", a8);
  else
    v22[0] = 0;
  if ( byte_60F2C6 )
  {
    if ( strlen(a10) <= 0xB )
      v10 = 14LL;
    else
      v10 = strlen(a10) + 2;
  }
  else
  {
    v10 = 1LL;
  }
  v20 = (char *)sub_405B39(v10);
  if ( byte_60F2C6 )
    sprintf(v20, " %-12s", a10);
  else
    *v20 = 0;
  if ( byte_60F2C5 )
    v11 = (const char *)&unk_60F238;
  else
    v11 = &locale;
  if ( a2 )
    LODWORD(v12) = a2;
  else
    v12 = "   .";
  if ( (unsigned int)sub_405CF0(
                       (unsigned int)&v18,
                       (unsigned int)"%-8.*s%s %-12.*s %-*s%s%s %-8s%s",
                       a1,
                       (_DWORD)v12,
                       (_DWORD)v11,
                       a4,
                       a5,
                       dword_60F2D8,
                       a6,
                       v21,
                       v22,
                       a9,
                       v20) == -1 )
    sub_405CBB();
  v13 = v18;
  v19 = &v13[strlen(v18)];
  do
    --v19;
  while ( *v19 == 32 );
  v19[1] = 0;
  puts(v18);
  free(v18);
  free(v20);
  return __readfsqword(0x28u) ^ v23;
}
