#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_404546()
{
  printf(".%s \"", off_6102C8[0]);
  sub_403176((char *)qword_610A70, qword_610A78);
  if ( dword_610A80 )
    fputs_unlocked(s, stdout);
  putchar_unlocked(34);
  fwrite_unlocked(" \"", 1uLL, 2uLL, stdout);
  if ( dword_610AA0 )
    fputs_unlocked(s, stdout);
  sub_403176(string, qword_610A98);
  putchar_unlocked(34);
  fwrite_unlocked(" \"", 1uLL, 2uLL, stdout);
  sub_403176((char *)qword_610AB0, qword_610AB8);
  if ( dword_610AC0 )
    fputs_unlocked(s, stdout);
  putchar_unlocked(34);
  fwrite_unlocked(" \"", 1uLL, 2uLL, stdout);
  if ( dword_610AE0 )
    fputs_unlocked(s, stdout);
  sub_403176(qword_610AD0, qword_610AD8);
  putchar_unlocked(34);
  if ( byte_610380 || byte_610381 )
  {
    fwrite_unlocked(" \"", 1uLL, 2uLL, stdout);
    sub_403176(qword_610AF0, qword_610AF8);
    putchar_unlocked(34);
  }
  return putchar_unlocked(10);
}
