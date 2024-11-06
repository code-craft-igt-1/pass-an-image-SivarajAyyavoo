#pragma once
#include "image.h"

Image::Image(int rowSize, int colSize) {
	m_rowSize = rowSize;
	m_columnSize = colSize;
	m_pixels = new uint8_t[MAX_IMAGE_WIDTH * MAX_IMAGE_HEIGHT];
	randomImageGenerator();
}

Image::Image(int rowSize, int colSize, std::string imageFilePath) {
	m_rowSize = rowSize;
	m_columnSize = colSize;
	m_pixels = new uint8_t[MAX_IMAGE_WIDTH * MAX_IMAGE_HEIGHT];

	// Read the image from imageFilePath
	// Covert the image into 1D array
	// Check the size of the image and copy max of 1024 * 1024 pixel values
}

Image::Image(const Image& imageCopy) {
	m_rowSize = imageCopy.m_rowSize;
	m_columnSize = imageCopy.m_columnSize;
	m_pixels = new uint8_t[MAX_IMAGE_WIDTH * MAX_IMAGE_HEIGHT];
	for (int i = 0; i < m_rowSize; i++) {
		for (int j = 0; j < m_columnSize; j++) {
			int index = i * m_rowSize + j;
			m_pixels[index] = imageCopy.m_pixels[index];
		}
	}
}

void Image::setRows(int rowSize) {
	m_rowSize = rowSize;
}

void Image::setColumns(int columnSize) {
	m_columnSize = columnSize;
}

void Image::setPixels(uint8_t* pixels) {
	m_pixels = pixels;
}

int Image::getRows() {
	return m_rowSize;
}

int Image::getColumns() {
	return m_columnSize;
}

uint8_t* Image::getPixelValues() {
	return m_pixels;
}

void Image::randomImageGenerator()
{
	// Generate random image
	// Fill the array with random pixel values (0 to 255)
	for (int i = 0; i < m_rowSize; i++) {
		for (int j = 0; j < m_columnSize; j++) {
			int index = i * m_rowSize + j;
			m_pixels[index] = rand() % 256;  // Random value between 0 and 255
		}
	}
}