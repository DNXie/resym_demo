#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40348D(int a1, _QWORD *a2)
{
  __int64 result; // rax

  sub_402AA9(a1);
  result = (unsigned int)sub_402D69(a1, a2) ^ 1;
  if ( !(_BYTE)result )
  {
    if ( byte_610241 )
      sub_403BF5();
    if ( (unsigned __int64)qword_6103A0 <= 1 )
    {
      qword_6103B0 = 1LL;
    }
    else
    {
      result = (unsigned int)sub_4045D9(qword_6103A0) ^ 1;
      if ( (_BYTE)result )
        return result;
      qword_6103B0 = qword_6103A0;
    }
    sub_402F8A();
    dword_6103B8 = dword_61026C;
    do
      result = sub_4038C1();
    while ( (_BYTE)result );
  }
  return result;
}
