#include "/share/binary_recovery/clang-parser/defs.hh"
ssize_t __fastcall sub_4028BF(int a1, void *a2, size_t a3)
{
  __int64 v3; // rax
  char *v4; // rax
  ssize_t v7; // [rsp+20h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-8h]

  do
  {
    sub_4025C4();
    v7 = read(a1, a2, a3);
  }
  while ( v7 < 0 && *__errno_location() == 4 );
  if ( v7 > 0 && byte_60E3D9 )
  {
    if ( qword_60E5B8 > 0 && qword_60E5B8 < a3 )
    {
      v8 = qword_60E5B8;
      v3 = sub_401C0C(qword_60E5B8);
      v4 = ngettext(
             "warning: partial read (%lu byte); suggest iflag=fullblock",
             "warning: partial read (%lu bytes); suggest iflag=fullblock",
             v3);
      error(0, 0, v4, v8);
      byte_60E3D9 = 0;
    }
    qword_60E5B8 = v7;
  }
  return v7;
}
