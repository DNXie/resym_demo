#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_40474A()
{
  char *v0; // rax
  __int64 v1; // rbx
  char *v2; // rax
  int v3; // eax
  int v5; // [rsp+24h] [rbp-13Ch]
  char s[280]; // [rsp+30h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+148h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  dword_610394 = 0;
  sub_4040D2(dword_610390);
  sub_404381();
  if ( !qword_6103B0 )
  {
    v0 = gettext("page number overflow");
    error(1, 0, v0);
  }
  v1 = qword_6103B0;
  v2 = gettext("Page %lu");
  sprintf(s, v2, v1);
  LODWORD(v1) = dword_610410;
  v5 = v1 - sub_40577E(s, 0LL);
  v3 = 0;
  if ( v5 >= 0 )
    v3 = v5;
  printf(
    "\n\n%*s%s%*s%s%*s%s\n\n\n",
    dword_610390,
    &locale,
    (const char *)qword_610400,
    v3 >> 1,
    " ",
    (const char *)qword_610408,
    v3 - (v3 >> 1),
    " ",
    s);
  byte_610377 = 0;
  dword_610394 = 0;
  return __readfsqword(0x28u) ^ v7;
}
