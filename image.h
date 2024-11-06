#pragma once
#include <cstdint>
#include <memory>

const int MAX_IMAGE_WIDTH = 1024;
const int MAX_IMAGE_HEIGHT = 1024;

class Image {
public:
	int m_rowSize;
	int m_columnSize;
	std::unique_ptr<uint8_t[]> m_pixels;

	Image(int rowSize, int colSize, std::unique_ptr<uint8_t[]> pixels);
	Image(const Image& imageCopy);

	void setRows(int rowSize);
	void setColumns(int columnSize);
	void setPixels(std::unique_ptr<uint8_t[]> pixels);
	int getRows();
	int getColumns();
	uint8_t* getPixelValues();
};