#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_404997()
{
  int v0; // eax
  int v1; // edx
  int v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax

  if ( byte_610382 != 1 )
  {
    if ( byte_610380 )
    {
      sub_403176(qword_610AF0, qword_610AF8);
      putchar_unlocked(58);
      sub_40314D(dword_6108C4 + dword_6102B8 + (_DWORD)qword_610AF0 - qword_610AF8 - 1);
    }
    else
    {
      sub_403176(qword_610AF0, qword_610AF8);
      sub_40314D(dword_6108C4 + dword_6102B8 + (_DWORD)qword_610AF0 - qword_610AF8);
    }
  }
  if ( qword_610A70 >= (unsigned __int64)qword_610A78 )
  {
    v1 = (_DWORD)string - qword_610A98 + dword_610A60 - dword_6102B8;
    if ( dword_610AA0 )
      v2 = dword_610A6C;
    else
      v2 = 0;
  }
  else
  {
    sub_403176((char *)qword_610A70, qword_610A78);
    if ( dword_610A80 )
      fputs_unlocked(s, stdout);
    if ( dword_610AA0 )
      v0 = dword_610A6C;
    else
      v0 = 0;
    v1 = (_DWORD)string - qword_610A98 + dword_610A60 - dword_6102B8 - v0 + qword_610A70 - qword_610A78;
    if ( dword_610A80 )
      v2 = dword_610A6C;
    else
      v2 = 0;
  }
  sub_40314D(v1 - v2);
  if ( dword_610AA0 )
    fputs_unlocked(s, stdout);
  sub_403176(string, qword_610A98);
  sub_40314D(dword_6102B8);
  sub_403176((char *)qword_610AB0, qword_610AB8);
  if ( dword_610AC0 )
    fputs_unlocked(s, stdout);
  if ( (unsigned __int64)qword_610AD0 >= qword_610AD8 )
  {
    if ( (byte_610380 || byte_610381) && byte_610382 )
    {
      if ( dword_610AC0 )
        v6 = dword_610A6C;
      else
        v6 = 0;
      sub_40314D(dword_610A60 + qword_610AB0 - qword_610AB8 - v6);
    }
  }
  else
  {
    if ( dword_610AC0 )
      v3 = dword_610A6C;
    else
      v3 = 0;
    v4 = dword_610A60 + qword_610AB0 - qword_610AB8 - v3 + (_DWORD)qword_610AD0 - qword_610AD8;
    if ( dword_610AE0 )
      v5 = dword_610A6C;
    else
      v5 = 0;
    sub_40314D(v4 - v5);
    if ( dword_610AE0 )
      fputs_unlocked(s, stdout);
    sub_403176(qword_610AD0, qword_610AD8);
  }
  if ( byte_610380 || byte_610381 )
  {
    if ( byte_610382 )
    {
      sub_40314D(dword_6102B8);
      sub_403176(qword_610AF0, qword_610AF8);
    }
  }
  return putchar_unlocked(10);
}
