#ifndef RADON_H
#define RADON_H

#include <opencv2/core/core.hpp>

class Radon
{
public:
    static cv::Mat radon(const cv::Mat& origin, const std::vector<float>& angles);
    static cv::Mat inverseRadon(const cv::Mat& sinogram, const std::vector<float>& angles);
};

#endif // RADON_H
