#include "FlyCaptureWrapper.h"

int main() {
  FlyCameraWrapper cam;
  cam.init(14171090);  // serial

  cam.autoGain(true);
  cam.autoExposure(true);
  cam.autoShutter(true);
  cam.autoSaturation(true);

  cam.start();

  char key;
  do {
    cam.capture();
    cv::imshow("test", cam.img);
    key = cv::waitKey(1);
  } while (key == -1);

  return 0;
}
