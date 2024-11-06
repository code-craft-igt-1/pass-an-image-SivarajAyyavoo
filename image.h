#pragma once
#include <cstdint>
#include <memory>
#include <string>

const int MAX_IMAGE_WIDTH = 1024;
const int MAX_IMAGE_HEIGHT = 1024;

class Image {
public:
	int m_rowSize;
	int m_columnSize;
	uint8_t* m_pixels;

	Image(int rowSize, int colSize);
	Image(int rowSize, int colSize, std::string imageFilePath);
	Image(const Image& imageCopy);

	void setRows(int rowSize);
	void setColumns(int columnSize);
	void setPixels(uint8_t* pixels);
	int getRows();
	int getColumns();
	uint8_t* getPixelValues();

	void randomImageGenerator();
};