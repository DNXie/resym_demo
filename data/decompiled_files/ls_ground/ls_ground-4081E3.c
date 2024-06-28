#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4081E3()
{
  __int64 result; // rax
  unsigned __int64 i; // [rsp+8h] [rbp-8h]
  unsigned __int64 j; // [rsp+8h] [rbp-8h]

  result = (unsigned int)dword_61D69C;
  if ( dword_61D69C == 2 )
    return sub_40A418();
  if ( (unsigned int)dword_61D69C > 2 )
  {
    if ( dword_61D69C == 3 )
    {
      result = sub_40A56F();
    }
    else if ( dword_61D69C == 4 )
    {
      result = sub_40A6C8();
    }
  }
  else if ( dword_61D69C )
  {
    if ( dword_61D69C == 1 )
    {
      for ( i = 0LL; ; ++i )
      {
        result = qword_61D638;
        if ( i >= qword_61D638 )
          break;
        sub_409A65(*((_QWORD *)qword_61D640 + i), 0LL);
        putchar_unlocked(10);
      }
    }
  }
  else
  {
    for ( j = 0LL; ; ++j )
    {
      result = qword_61D638;
      if ( j >= qword_61D638 )
        break;
      sub_402CFD();
      sub_408865(*((_QWORD *)qword_61D640 + j));
      putchar_unlocked(10);
      ++qword_61D7E0;
    }
  }
  return result;
}
