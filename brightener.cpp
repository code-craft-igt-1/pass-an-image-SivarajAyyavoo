#include "brightener.h"

ImageBrightener::ImageBrightener(Image& inputImage) : m_inputImage(inputImage) {
}

int ImageBrightener::BrightenWholeImage() {
	// For brightening, we add a certain grayscale (25) to every pixel.
	// While brightening, some m_pixels may cross the max brightness. They are
	// called 'attenuated' m_pixels
	int attenuatedPixelCount = 0;
	for (int x = 0; x < m_inputImage.m_rowSize; x++) {
		for (int y = 0; y < m_inputImage.m_columnSize; y++) {
			if (m_inputImage.m_pixels[x * m_inputImage.m_columnSize + y] > (255 - 25)) {
				++attenuatedPixelCount;
				// m_inputImage.m_pixels[x * m_inputImage.m_rowSize + 1 + y] = 255;
				m_inputImage.m_pixels[x * m_inputImage.m_columnSize + y] = 255;
			}
			else {
				// --attenuatedPixelCount;
				// m_inputImage.m_pixels[x * m_inputImage.m_columnSize + y] += 25;
				int pixelIndex = x * m_inputImage.m_columnSize + y;
				m_inputImage.m_pixels[pixelIndex] += 25;
				// m_inputImage.m_pixels[x * m_inputImage.m_rowSize + 1 + y] += 25;
			}
		}
	}
	return attenuatedPixelCount;
}

Image ImageBrightener::GetImage() {
	return m_inputImage;
}
