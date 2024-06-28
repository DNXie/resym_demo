#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4123B8()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_61D550;
  for ( i = 1; i < dword_61D530; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_61DC00 )
  {
    free(ptr[1]);
    qword_61D540 = 256LL;
    off_61D548 = &unk_61DC00;
  }
  if ( ptr != (void **)&qword_61D540 )
  {
    free(ptr);
    off_61D550 = &qword_61D540;
  }
  dword_61D530 = 1;
}
