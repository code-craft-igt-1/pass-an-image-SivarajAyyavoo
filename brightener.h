#pragma once
#include "image.h"

class ImageBrightener {
private:
	Image m_inputImage;
public:
	ImageBrightener(Image& inputImage);
	int BrightenWholeImage();
	Image GetImage();
};
