#pragma once
#include "image.h"

Image::Image(int rowSize, int colSize, std::unique_ptr<uint8_t[]> pixels) {
	m_rowSize = rowSize;
	m_columnSize = colSize;
	m_pixels = std::move(pixels);
}

Image::Image(const Image& imageCopy) {
	m_rowSize = imageCopy.m_rowSize;
	m_columnSize = imageCopy.m_columnSize;
	m_pixels = std::move(imageCopy.m_pixels);
}

void Image::setRows(int rowSize) {
	m_rowSize = rowSize;
}

void Image::setColumns(int columnSize) {
	m_columnSize = columnSize;
}

void Image::setPixels(std::unique_ptr<uint8_t[]> pixels) {
	m_pixels = std::move(pixels);
}

int Image::getRows() {
	return m_rowSize;
}

int Image::getColumns() {
	return m_columnSize;
}

uint8_t* Image::getPixelValues() {
	return m_pixels.get();
}
