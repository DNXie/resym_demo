#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_401A2C(time_t a1, time_t a2)
{
  if ( timer == 0x8000000000000000LL )
    time(&timer);
  if ( a2 >= a1 || timer - 86400 >= a1 || a1 > timer )
    return gettext(" old ");
  if ( (int)timer - (int)a1 <= 59 )
    return "  .  ";
  sprintf(
    s,
    "%02d:%02d",
    (unsigned int)(((int)timer - (int)a1) / 3600),
    (unsigned int)(((int)timer - (int)a1) % 3600 / 60));
  return s;
}
