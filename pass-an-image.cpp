#include <iostream>
#include "brightener.h"

int main() {
    int imageRowSize = 512;
    int imageColSize = 512;

    Image image(imageRowSize, imageColSize);

	std::cout << "Brightening a 512 x 512 image\n";
    ImageBrightener brightener(image);
    int attenuatedCount = brightener.BrightenWholeImage();
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
}
