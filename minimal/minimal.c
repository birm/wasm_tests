#include <stdio.h>
#include <sys/time.h>
#include <emscripten/emscripten.h>

int EMSCRIPTEN_KEEPALIVE getTimeNow (int argc, char **argv)
{
  int iRet;
  struct timeval tv;

  iRet = gettimeofday (&tv, NULL); // timezone structure is obsolete
  if (iRet == 0)
  {
    printf ("Seconds/USeconds since epoch: %d/%d\n",
            (int)tv.tv_sec, (int)tv.tv_usec);
    return (int)tv.tv_sec;
  }
  else
  {
    perror ("gettimeofday");
  }

  return iRet;
}
