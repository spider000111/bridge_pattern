// bridge_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Artist.h"
#include "IResource.h"
#include "IView.h"

int main()
{
    Artist artist_obj;
    ArtistResource art_res_obj(artist_obj);

    LongView long_view_obj(art_res_obj);
    std::cout << "output : " << long_view_obj.show() << "\n";

    TitleView title_view_obj(art_res_obj);
    std::cout << "output : " << title_view_obj.show() << "\n";

    ImageView image_view_obj(art_res_obj);
    std::cout << "output : " << image_view_obj.show() << "\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
