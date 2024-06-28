#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40274A(__int64 a1)
{
  int v1; // eax
  char *v2; // rax
  size_t v3; // rax
  char *v4; // rax
  char *v5; // rax
  size_t v6; // rax
  unsigned int v7; // ebx
  char *v8; // rax
  const char *v9; // rbx
  char *v10; // rax
  unsigned __int8 v12; // [rsp+3Eh] [rbp-12h]
  unsigned __int8 v13; // [rsp+3Fh] [rbp-11h]

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0 )
    BYTE1(v1) = (unsigned __int16)(v1 + 255) >> 8;
  v12 = BYTE1(v1);
  v13 = *(_DWORD *)(a1 + 4);
  if ( !qword_60F340 )
  {
    v2 = gettext("run-level");
    v3 = strlen(v2);
    qword_60F340 = (char *)sub_405B39(v3 + 3);
  }
  v4 = gettext("run-level");
  sprintf(qword_60F340, "%s %c", v4, v13);
  if ( !qword_60F348 )
  {
    v5 = gettext("last=");
    v6 = strlen(v5);
    qword_60F348 = (char *)sub_405B39(v6 + 2);
  }
  if ( v12 == 78 )
    v7 = 83;
  else
    v7 = v12;
  v8 = gettext("last=");
  sprintf(qword_60F348, "%s%c", v8, v7);
  if ( (unsigned __int8)sub_403378(v12) )
    v9 = qword_60F348;
  else
    v9 = &locale;
  v10 = sub_401B3F(a1);
  return sub_401BAC(
           -1,
           (__int64)&locale,
           32,
           -1,
           (__int64)qword_60F340,
           (__int64)v10,
           &locale,
           &locale,
           (__int64)v9,
           &locale);
}
