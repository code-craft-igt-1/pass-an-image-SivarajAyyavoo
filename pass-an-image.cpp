#include <iostream>
#include "brightener.h"

int main() {
    int imageRowSize = 512;
    int imageColSize = 512;
    std::unique_ptr<uint8_t[]> imagePixelValues = std::make_unique<uint8_t[]>(imageRowSize * imageColSize);
    std::cout << "Generate an image" << std::endl;
    // Fill the array with random pixel values (0 to 255)
    for (int i = 0; i < imageRowSize; i++) {
        for (int j = 0; j < imageColSize; j++) {
            int index = i * imageRowSize + j;
            imagePixelValues[index] = rand() % 256;  // Random value between 0 and 255
        }
    }

    Image image(imageRowSize, imageColSize, std::move(imagePixelValues));

	std::cout << "Brightening a 512 x 512 image\n";
    ImageBrightener brightener(image);
    int attenuatedCount = brightener.BrightenWholeImage();
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
}
