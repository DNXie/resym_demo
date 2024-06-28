#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_404738()
{
  __int64 v0; // rax
  int v2; // [rsp+4h] [rbp-2Ch]
  unsigned __int8 *string; // [rsp+8h] [rbp-28h]
  char *v4; // [rsp+10h] [rbp-20h]
  unsigned __int64 v5; // [rsp+28h] [rbp-8h]

  printf("\\%s ", off_6102C8[0]);
  putchar_unlocked(123);
  sub_403176((char *)qword_610A70, qword_610A78);
  fwrite_unlocked("}{", 1uLL, 2uLL, stdout);
  sub_403176(::string, qword_610A98);
  fwrite_unlocked("}{", 1uLL, 2uLL, stdout);
  v4 = (char *)qword_610AB0;
  v5 = qword_610AB8;
  string = (unsigned __int8 *)qword_610AB0;
  if ( qword_610520 )
  {
    v2 = re_match(&stru_610528, (const char *)qword_610AB0, qword_610AB8 - qword_610AB0, 0, 0LL);
    if ( v2 == -2 )
      sub_401F46();
    if ( v2 == -1 )
      v0 = 1LL;
    else
      v0 = v2;
    string += v0;
  }
  else if ( byte_6107C0[(unsigned __int8)sub_401E2D(*(_BYTE *)qword_610AB0)] )
  {
    while ( qword_610AB8 > (unsigned __int64)string && byte_6107C0[(unsigned __int8)sub_401E2D(*string)] )
      ++string;
  }
  else
  {
    ++string;
  }
  sub_403176(v4, (unsigned __int64)string);
  fwrite_unlocked("}{", 1uLL, 2uLL, stdout);
  sub_403176((char *)string, v5);
  fwrite_unlocked("}{", 1uLL, 2uLL, stdout);
  sub_403176(qword_610AD0, qword_610AD8);
  putchar_unlocked(125);
  if ( byte_610380 || byte_610381 )
  {
    putchar_unlocked(123);
    sub_403176(qword_610AF0, qword_610AF8);
    putchar_unlocked(125);
  }
  return putchar_unlocked(10);
}
