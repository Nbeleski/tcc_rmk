#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/video/tracking.hpp"

// default 1000, 50, 50, 4

#define MIN_PIXELS 2500
#define MIN_W 100
#define MIN_H 100
#define BLOB_MARGIN 4

#define CANDIDATE_FG_VALUE 10
#define FAILED_FG_VALUE 20
#define FG_VALUE 255
#define SHADOW_VALUE 127

using namespace std;
using namespace cv;

bool Compare_Vec3f(Vec3f v1, Vec3f v2);
Mat resizeFixed(Mat src);
void calcGradients(Mat& img, Mat& dx, Mat& dy, Mat& mag, Mat& ori);
void findConnectedComponents(Mat& img, vector <Rect>& out);

Mat media_binary(Mat src, int size, int value);

