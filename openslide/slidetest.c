#include <stdio.h>
#include <stdint.h>
#include <emscripten/emscripten.h>

uint8_t EMSCRIPTEN_KEEPALIVE getMpp (uint8_t *filedata)
{
  // convert file data to something openslide can understand
  // open it
  // get mpp-x
  uint8_t tmp = filedata[0];
  filedata[0] = filedata[1];
  filedata[1] = tmp;
  return filedata;
}
