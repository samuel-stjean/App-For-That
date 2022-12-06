#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <vector>
#include <ctime>
#include <fstream>
#include <iterator>
#include <map>
#include <sstream>
#include <unordered_map>
#include <string>
#include <iomanip>
#include <queue>
#include "App.h"
#include "MaxHeap.h"
using namespace std;
using std::unordered_map;
using std::string;

unsigned long ConvertString(string convertString)
{
    unsigned long size = 0;
    if (convertString.at(convertString.length() - 1) == 'M')
    {
        string substring = convertString.substr(0, convertString.length() - 1);
        size = 1000000 * stoul(substring);
    }
    if (convertString.at(convertString.length() - 1) == 'k')
    {
        string substring = convertString.substr(0, convertString.length() - 1);
        size = 1000 * stoul(substring);
    }
    return size;
}

bool BoolConv(string s) {
    if (s == "True") {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string apps[10] = { "","","","","","","","","",""};
    sf::RenderWindow window(sf::VideoMode(1400,700), "App For That");
    sf::CircleShape reset(70.f);
    reset.setFillColor(sf::Color::Red);
    sf::CircleShape go(70.f);
    go.setFillColor(sf::Color::Green);

    sf::RectangleShape ds1;
    ds1.setFillColor(sf::Color::Black);
    ds1.setSize(sf::Vector2f(100, 35));
    ds1.setOutlineColor(sf::Color::Blue);
    ds1.setOutlineThickness(5);

    sf::RectangleShape ds2;
    ds2.setFillColor(sf::Color::Black);
    ds2.setSize(sf::Vector2f(100, 35));
    ds2.setOutlineColor(sf::Color::Blue);
    ds2.setOutlineThickness(5);

    sf::RectangleShape A1;
    A1.setFillColor(sf::Color::Black);
    A1.setSize(sf::Vector2f(100, 35));
    A1.setOutlineColor(sf::Color::Blue);
    A1.setOutlineThickness(5);

    sf::RectangleShape A2;
    A2.setFillColor(sf::Color::Black);
    A2.setSize(sf::Vector2f(100, 35));
    A2.setOutlineColor(sf::Color::Blue);
    A2.setOutlineThickness(5);

    sf::RectangleShape A3;
    A3.setFillColor(sf::Color::Black);
    A3.setSize(sf::Vector2f(100, 35));
    A3.setOutlineColor(sf::Color::Blue);
    A3.setOutlineThickness(5);

    sf::RectangleShape A4;
    A4.setFillColor(sf::Color::Black);
    A4.setSize(sf::Vector2f(100, 35));
    A4.setOutlineColor(sf::Color::Blue);
    A4.setOutlineThickness(5);

    sf::RectangleShape A5;
    A5.setFillColor(sf::Color::Black);
    A5.setSize(sf::Vector2f(100, 35));
    A5.setOutlineColor(sf::Color::Blue);
    A5.setOutlineThickness(5);

    sf::RectangleShape A6;
    A6.setFillColor(sf::Color::Black);
    A6.setSize(sf::Vector2f(100, 35));
    A6.setOutlineColor(sf::Color::Blue);
    A6.setOutlineThickness(5);

    sf::RectangleShape A7;
    A7.setFillColor(sf::Color::Black);
    A7.setSize(sf::Vector2f(100, 35));
    A7.setOutlineColor(sf::Color::Blue);
    A7.setOutlineThickness(5);

    sf::RectangleShape A8;
    A8.setFillColor(sf::Color::Black);
    A8.setSize(sf::Vector2f(100, 35));
    A8.setOutlineColor(sf::Color::Blue);
    A8.setOutlineThickness(5);

    sf::RectangleShape B1;
    B1.setFillColor(sf::Color::Black);
    B1.setSize(sf::Vector2f(100, 35));
    B1.setOutlineColor(sf::Color::Blue);
    B1.setOutlineThickness(5);

    sf::RectangleShape B2;
    B2.setFillColor(sf::Color::Black);
    B2.setSize(sf::Vector2f(100, 35));
    B2.setOutlineColor(sf::Color::Blue);
    B2.setOutlineThickness(5);

    sf::RectangleShape B3;
    B3.setFillColor(sf::Color::Black);
    B3.setSize(sf::Vector2f(100, 35));
    B3.setOutlineColor(sf::Color::Blue);
    B3.setOutlineThickness(5);

    sf::RectangleShape B4;
    B4.setFillColor(sf::Color::Black);
    B4.setSize(sf::Vector2f(100, 35));
    B4.setOutlineColor(sf::Color::Blue);
    B4.setOutlineThickness(5);

    sf::RectangleShape B5;
    B5.setFillColor(sf::Color::Black);
    B5.setSize(sf::Vector2f(100, 35));
    B5.setOutlineColor(sf::Color::Blue);
    B5.setOutlineThickness(5);

    sf::RectangleShape B6;
    B6.setFillColor(sf::Color::Black);
    B6.setSize(sf::Vector2f(100, 35));
    B6.setOutlineColor(sf::Color::Blue);
    B6.setOutlineThickness(5);

    sf::RectangleShape B7;
    B7.setFillColor(sf::Color::Black);
    B7.setSize(sf::Vector2f(100, 35));
    B7.setOutlineColor(sf::Color::Blue);
    B7.setOutlineThickness(5);

    sf::RectangleShape C1;
    C1.setFillColor(sf::Color::Black);
    C1.setSize(sf::Vector2f(100, 35));
    C1.setOutlineColor(sf::Color::Blue);
    C1.setOutlineThickness(5);

    sf::RectangleShape C2;
    C2.setFillColor(sf::Color::Black);
    C2.setSize(sf::Vector2f(100, 35));
    C2.setOutlineColor(sf::Color::Blue);
    C2.setOutlineThickness(5);

    sf::RectangleShape C3;
    C3.setFillColor(sf::Color::Black);
    C3.setSize(sf::Vector2f(100, 35));
    C3.setOutlineColor(sf::Color::Blue);
    C3.setOutlineThickness(5);

    sf::RectangleShape C4;
    C4.setFillColor(sf::Color::Black);
    C4.setSize(sf::Vector2f(100, 35));
    C4.setOutlineColor(sf::Color::Blue);
    C4.setOutlineThickness(5);

    sf::RectangleShape C5;
    C5.setFillColor(sf::Color::Black);
    C5.setSize(sf::Vector2f(100, 35));
    C5.setOutlineColor(sf::Color::Blue);
    C5.setOutlineThickness(5);

    sf::RectangleShape C6;
    C6.setFillColor(sf::Color::Black);
    C6.setSize(sf::Vector2f(100, 35));
    C6.setOutlineColor(sf::Color::Blue);
    C6.setOutlineThickness(5);
   
    sf::RectangleShape D1;
    D1.setFillColor(sf::Color::Black);
    D1.setSize(sf::Vector2f(100, 35));
    D1.setOutlineColor(sf::Color::Blue);
    D1.setOutlineThickness(5);

    sf::RectangleShape D2;
    D2.setFillColor(sf::Color::Black);
    D2.setSize(sf::Vector2f(100, 35));
    D2.setOutlineColor(sf::Color::Blue);
    D2.setOutlineThickness(5);

    sf::RectangleShape D3;
    D3.setFillColor(sf::Color::Black);
    D3.setSize(sf::Vector2f(100, 35));
    D3.setOutlineColor(sf::Color::Blue);
    D3.setOutlineThickness(5);

    sf::RectangleShape D4;
    D4.setFillColor(sf::Color::Black);
    D4.setSize(sf::Vector2f(100, 35));
    D4.setOutlineColor(sf::Color::Blue);
    D4.setOutlineThickness(5);

    sf::RectangleShape D5;
    D5.setFillColor(sf::Color::Black);
    D5.setSize(sf::Vector2f(100, 35));
    D5.setOutlineColor(sf::Color::Blue);
    D5.setOutlineThickness(5);

    sf::RectangleShape D6;
    D6.setFillColor(sf::Color::Black);
    D6.setSize(sf::Vector2f(100, 35));
    D6.setOutlineColor(sf::Color::Blue);
    D6.setOutlineThickness(5);

    sf::RectangleShape E1;
    E1.setFillColor(sf::Color::Black);
    E1.setSize(sf::Vector2f(100, 35));
    E1.setOutlineColor(sf::Color::Blue);
    E1.setOutlineThickness(5);

    sf::RectangleShape E2;
    E2.setFillColor(sf::Color::Black);
    E2.setSize(sf::Vector2f(100, 35));
    E2.setOutlineColor(sf::Color::Blue);
    E2.setOutlineThickness(5);

    sf::RectangleShape F1;
    F1.setFillColor(sf::Color::Black);
    F1.setSize(sf::Vector2f(100, 35));
    F1.setOutlineColor(sf::Color::Blue);
    F1.setOutlineThickness(5);

    sf::RectangleShape F2;
    F2.setFillColor(sf::Color::Black);
    F2.setSize(sf::Vector2f(100, 35));
    F2.setOutlineColor(sf::Color::Blue);
    F2.setOutlineThickness(5);

    sf::RectangleShape G1;
    G1.setFillColor(sf::Color::Black);
    G1.setSize(sf::Vector2f(100, 35));
    G1.setOutlineColor(sf::Color::Blue);
    G1.setOutlineThickness(5);

    sf::RectangleShape G2;
    G2.setFillColor(sf::Color::Black);
    G2.setSize(sf::Vector2f(100, 35));
    G2.setOutlineColor(sf::Color::Blue);
    G2.setOutlineThickness(5);

    sf::RectangleShape G3;
    G3.setFillColor(sf::Color::Black);
    G3.setSize(sf::Vector2f(100, 35));
    G3.setOutlineColor(sf::Color::Blue);
    G3.setOutlineThickness(5);

    sf::RectangleShape G4;
    G4.setFillColor(sf::Color::Black);
    G4.setSize(sf::Vector2f(100, 35));
    G4.setOutlineColor(sf::Color::Blue);
    G4.setOutlineThickness(5);

    sf::RectangleShape G5;
    G5.setFillColor(sf::Color::Black);
    G5.setSize(sf::Vector2f(100, 35));
    G5.setOutlineColor(sf::Color::Blue);
    G5.setOutlineThickness(5);

    sf::Font font;

    sf::RectangleShape app1;
    app1.setFillColor(sf::Color::Black);
    app1.setSize(sf::Vector2f(600, 40));
    app1.setOutlineColor(sf::Color::Blue);
    app1.setOutlineThickness(5);

    sf::Text a1Name;
    a1Name.setFont(font); 
    a1Name.setCharacterSize(30);
    a1Name.setFillColor(sf::Color::White);

    sf::RectangleShape app2;
    app2.setFillColor(sf::Color::Black);
    app2.setSize(sf::Vector2f(600, 40));
    app2.setOutlineColor(sf::Color::Blue);
    app2.setOutlineThickness(5);

    sf::Text a2Name;
    a2Name.setFont(font); 
    a2Name.setCharacterSize(30);
    a2Name.setFillColor(sf::Color::White);

    sf::RectangleShape app3;
    app3.setFillColor(sf::Color::Black);
    app3.setSize(sf::Vector2f(600, 40));
    app3.setOutlineColor(sf::Color::Blue);
    app3.setOutlineThickness(5);

    sf::Text a3Name;
    a3Name.setFont(font); 
    a3Name.setCharacterSize(30);
    a3Name.setFillColor(sf::Color::White);

    sf::RectangleShape app4;
    app4.setFillColor(sf::Color::Black);
    app4.setSize(sf::Vector2f(600, 40));
    app4.setOutlineColor(sf::Color::Blue);
    app4.setOutlineThickness(5);

    sf::Text a4Name;
    a4Name.setFont(font); 
    a4Name.setCharacterSize(30);
    a4Name.setFillColor(sf::Color::White);

    sf::RectangleShape app5;
    app5.setFillColor(sf::Color::Black);
    app5.setSize(sf::Vector2f(600, 40));
    app5.setOutlineColor(sf::Color::Blue);
    app5.setOutlineThickness(5);

    sf::Text a5Name;
    a5Name.setFont(font); 
    a5Name.setCharacterSize(30);
    a5Name.setFillColor(sf::Color::White);

    sf::RectangleShape app6;
    app6.setFillColor(sf::Color::Black);
    app6.setSize(sf::Vector2f(600, 40));
    app6.setOutlineColor(sf::Color::Blue);
    app6.setOutlineThickness(5);

    sf::Text a6Name;
    a6Name.setFont(font); 
    a6Name.setCharacterSize(30);
    a6Name.setFillColor(sf::Color::White);

    sf::RectangleShape app7;
    app7.setFillColor(sf::Color::Black);
    app7.setSize(sf::Vector2f(600, 40));
    app7.setOutlineColor(sf::Color::Blue);
    app7.setOutlineThickness(5);

    sf::Text a7Name;
    a7Name.setFont(font); 
    a7Name.setCharacterSize(30);
    a7Name.setFillColor(sf::Color::White);

    sf::RectangleShape app8;
    app8.setFillColor(sf::Color::Black);
    app8.setSize(sf::Vector2f(600, 40));
    app8.setOutlineColor(sf::Color::Blue);
    app8.setOutlineThickness(5);

    sf::Text a8Name;
    a8Name.setFont(font); 
    a8Name.setCharacterSize(30);
    a8Name.setFillColor(sf::Color::White);

    sf::RectangleShape app9;
    app9.setFillColor(sf::Color::Black);
    app9.setSize(sf::Vector2f(600, 40));
    app9.setOutlineColor(sf::Color::Blue);
    app9.setOutlineThickness(5);

    sf::Text a9Name;
    a9Name.setFont(font); 
    a9Name.setCharacterSize(30);
    a9Name.setFillColor(sf::Color::White);

    sf::RectangleShape app10;
    app10.setFillColor(sf::Color::Black);
    app10.setSize(sf::Vector2f(600, 40));
    app10.setOutlineColor(sf::Color::Blue);
    app10.setOutlineThickness(5);

    sf::Text a10Name;
    a10Name.setFont(font); 
    a10Name.setCharacterSize(30);
    a10Name.setFillColor(sf::Color::White);
  
    sf::Texture image;
    image.loadFromFile("Google_Play.png");
    sf::Sprite sprite(image);
    sprite.setScale(.1,.1);
    if (!font.loadFromFile("arial.ttf"))
    {
        cout << "kys" << endl;
    }

    sf::Text title;
    title.setFont(font); // font is a sf::Font
    title.setString("App For That");
    title.setCharacterSize(45);
    title.setFillColor(sf::Color::White);
    title.setStyle(sf::Text::Bold);

    sf::Text prompt;
    prompt.setFont(font); // font is a sf::Font
    prompt.setString("Pick a data structure: ");
    prompt.setCharacterSize(30);
    prompt.setFillColor(sf::Color::White);

    sf::Text dss;
    dss.setFont(font); // font is a sf::Font
    dss.setString("  Heap       Map");
    dss.setCharacterSize(30);
    dss.setFillColor(sf::Color::White);

    sf::Text goBut;
    goBut.setFont(font); // font is a sf::Font
    goBut.setString("Go");
    goBut.setCharacterSize(45);
    goBut.setFillColor(sf::Color::White);
    goBut.setStyle(sf::Text::Bold);

    sf::Text rBut;
    rBut.setFont(font); // font is a sf::Font
    rBut.setString("Reset");
    rBut.setCharacterSize(45);
    rBut.setFillColor(sf::Color::White);
    rBut.setStyle(sf::Text::Bold);

    sf::Text category;
    category.setFont(font); // font is a sf::Font
    category.setString("Category:");
    category.setCharacterSize(30);
    category.setFillColor(sf::Color::White);

    sf::Text com;
    com.setFont(font); // font is a sf::Font
    com.setString("Communication                   Sports                            Games                     Entertainment                   Lifestyle                     Music/Audio                        Tools                           Education");
    com.setCharacterSize(12);
    com.setFillColor(sf::Color::White);

    sf::Text price;
    price.setFont(font); // font is a sf::Font
    price.setString("Price:");
    price.setCharacterSize(30);
    price.setFillColor(sf::Color::White);

    sf::Text mun;
    mun.setFont(font); // font is a sf::Font
    mun.setString("           Free                                 $0-1                               $1-2                                $2-3                              $3-4                                $4-5                                 $5+");
    mun.setCharacterSize(12);
    mun.setFillColor(sf::Color::White);

    sf::Text rating;
    rating.setFont(font); // font is a sf::Font
    rating.setString("Rating:");
    rating.setCharacterSize(30);
    rating.setFillColor(sf::Color::White);

    sf::Text rate;
    rate.setFont(font); // font is a sf::Font
    rate.setString("               0                                     1                                       2                                     3                                     4                                       5");
    rate.setCharacterSize(12);
    rate.setFillColor(sf::Color::White);

    sf::Text Maturity;
   Maturity.setFont(font); // font is a sf::Font
   Maturity.setString("Maturity Rating:");
   Maturity.setCharacterSize(30);
   Maturity.setFillColor(sf::Color::White);

   sf::Text tr;
   tr.setFont(font); // font is a sf::Font
   tr.setString("        Everyone                   Everyone 10+                      Teen                              Mature                             Adult                            Unrated  ");
   tr.setCharacterSize(12);
   tr.setFillColor(sf::Color::White);

   sf::Text ads;
   ads.setFont(font); // font is a sf::Font
   ads.setString("Includes Ads:");
   ads.setCharacterSize(30);
   ads.setFillColor(sf::Color::White);

   sf::Text ad;
   ad.setFont(font); // font is a sf::Font
   ad.setString("             Yes                                  No        ");
   ad.setCharacterSize(12);
   ad.setFillColor(sf::Color::White);

   sf::Text pur;
   pur.setFont(font); // font is a sf::Font
   pur.setString("Includes In-app purchases:");
   pur.setCharacterSize(30);
   pur.setFillColor(sf::Color::White);

   sf::Text iap;
   iap.setFont(font); // font is a sf::Font
   iap.setString("             Yes                                  No        ");
   iap.setCharacterSize(12);
   iap.setFillColor(sf::Color::White);

   sf::Text size;
   size.setFont(font); // font is a sf::Font
   size.setString("App Size:");
   size.setCharacterSize(30);
   size.setFillColor(sf::Color::White);

   sf::Text as;
   as.setFont(font); // font is a sf::Font
   as.setString("         0-.5MB                            .5-1MB                          1-5MB                           5-10MB                          10+MB ");
   as.setCharacterSize(12);
   as.setFillColor(sf::Color::White);

    reset.setPosition(980,490);
    go.setPosition(1170, 490);
    rBut.setPosition(985, 530);
    goBut.setPosition(1210, 530);
    sprite.setPosition(40, 20);
    title.setPosition(200, 60);
    prompt.setPosition(600, 70);
    category.setPosition(10, 210);
    ds1.setPosition(900,73);
    ds2.setPosition(1020, 73);
    dss.setPosition(900, 70);
    A1.setPosition(150, 210);
    A2.setPosition(270, 210);
    A3.setPosition(390, 210);
    A4.setPosition(510, 210);
    A5.setPosition(630, 210);
    A6.setPosition(750, 210);
    A7.setPosition(870, 210);
    A8.setPosition(990, 210);
    com.setPosition(155, 220);
    price.setPosition(10, 280);
    B1.setPosition(150, 280);
    B2.setPosition(270, 280);
    B3.setPosition(390, 280);
    B4.setPosition(510, 280);
    B5.setPosition(630, 280);
    B6.setPosition(750, 280);
    B7.setPosition(870, 280);
    mun.setPosition(150, 290);
    rating.setPosition(10, 350);
    C1.setPosition(150, 350);
    C2.setPosition(270, 350);
    C3.setPosition(390, 350);
    C4.setPosition(510, 350);
    C5.setPosition(630, 350);
    C6.setPosition(750, 350);
    rate.setPosition(150,360);
    Maturity.setPosition(10, 420);
    D1.setPosition(270, 420);
    D2.setPosition(390, 420);
    D3.setPosition(510, 420);
    D4.setPosition(630, 420);
    D5.setPosition(750, 420);
    D6.setPosition(870, 420);
    tr.setPosition(270, 430);
    ads.setPosition(10, 490);
    E1.setPosition(270, 490);
    E2.setPosition(390, 490);
    ad.setPosition(270, 500);
    pur.setPosition(10, 560); 
    F1.setPosition(390, 560);
    F2.setPosition(510, 560);
    iap.setPosition(390, 570);
    size.setPosition(10, 630);
    G1.setPosition(150, 630);
    G2.setPosition(270, 630);
    G3.setPosition(390, 630);
    G4.setPosition(510, 630);
    G5.setPosition(630, 630);
    as.setPosition(150, 640);
    app1.setPosition(150,140); 
    a1Name.setPosition(160,140);
    app2.setPosition(150, 195);
    a2Name.setPosition(160, 195);
    app3.setPosition(150, 250);
    a3Name.setPosition(160, 250);
    app4.setPosition(150, 305);
    a4Name.setPosition(160, 305);
    app5.setPosition(150, 360);
    a5Name.setPosition(160, 360);
    app6.setPosition(150, 415);
    a6Name.setPosition(160, 415);
    app7.setPosition(150, 470);
    a7Name.setPosition(160, 470);
    app8.setPosition(150, 525);
    a8Name.setPosition(160, 525);
    app9.setPosition(150, 580);
    a9Name.setPosition(160, 580);
    app10.setPosition(150, 635);
    a10Name.setPosition(160, 635);

    bool catSel = false;
    bool priceSel = false;
    bool rateSel = false;
    bool matSel = false;
    bool adSel = false;
    bool iapSel = false;
    bool sizeSel = false;
    bool goPress = false;
    bool dsSel = false;
    string theCategory;
    double thePrice = 0;
    double theRating = 0;
    string contentRating;
    bool hasAds = false;
    bool inAppPur = false;
    double theSize = 0;
    int theDs = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
               window.close();
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    auto mousePosition = sf::Mouse::getPosition();
                    mousePosition = sf::Mouse::getPosition(window);
                    sf::FloatRect boxA1 = A1.getGlobalBounds();
                    sf::FloatRect boxA2 = A2.getGlobalBounds();
                    sf::FloatRect boxA3 = A3.getGlobalBounds();
                    sf::FloatRect boxA4 = A4.getGlobalBounds();
                    sf::FloatRect boxA5 = A5.getGlobalBounds();
                    sf::FloatRect boxA6 = A6.getGlobalBounds();
                    sf::FloatRect boxA7 = A7.getGlobalBounds();
                    sf::FloatRect boxA8 = A8.getGlobalBounds();
                    sf::FloatRect boxB1 = B1.getGlobalBounds();
                    sf::FloatRect boxB2 = B2.getGlobalBounds();
                    sf::FloatRect boxB3 = B3.getGlobalBounds();
                    sf::FloatRect boxB4 = B4.getGlobalBounds();
                    sf::FloatRect boxB5 = B5.getGlobalBounds();
                    sf::FloatRect boxB6 = B6.getGlobalBounds();
                    sf::FloatRect boxB7 = B7.getGlobalBounds();
                    sf::FloatRect boxC1 = C1.getGlobalBounds();
                    sf::FloatRect boxC2 = C2.getGlobalBounds();
                    sf::FloatRect boxC3 = C3.getGlobalBounds();
                    sf::FloatRect boxC4 = C4.getGlobalBounds();
                    sf::FloatRect boxC5 = C5.getGlobalBounds();
                    sf::FloatRect boxC6 = C6.getGlobalBounds();
                    sf::FloatRect boxD1 = D1.getGlobalBounds();
                    sf::FloatRect boxD2 = D2.getGlobalBounds();
                    sf::FloatRect boxD3 = D3.getGlobalBounds();
                    sf::FloatRect boxD4 = D4.getGlobalBounds();
                    sf::FloatRect boxD5 = D5.getGlobalBounds();
                    sf::FloatRect boxD6 = D6.getGlobalBounds();
                    sf::FloatRect boxE1 = E1.getGlobalBounds();
                    sf::FloatRect boxE2 = E2.getGlobalBounds();
                    sf::FloatRect boxF1 = F1.getGlobalBounds();
                    sf::FloatRect boxF2 = F2.getGlobalBounds();
                    sf::FloatRect boxG1 = G1.getGlobalBounds();
                    sf::FloatRect boxG2 = G2.getGlobalBounds();
                    sf::FloatRect boxG3 = G3.getGlobalBounds();
                    sf::FloatRect boxG4 = G4.getGlobalBounds();
                    sf::FloatRect boxG5 = G5.getGlobalBounds();
                    sf::FloatRect boxds1 = ds1.getGlobalBounds();
                    sf::FloatRect boxds2 = ds2.getGlobalBounds();
                    sf::FloatRect boxReset = reset.getGlobalBounds();
                    sf::FloatRect boxGo = go.getGlobalBounds();
                    sf::Vector2f mousePosFloat(mousePosition.x, mousePosition.y);
                        if (boxA1.contains(mousePosFloat) && catSel == false)
                        {
                            A1.setOutlineColor(sf::Color::Red);
                            theCategory = "Communication";
                            catSel = true;
                        }
                        else if (boxA2.contains(mousePosFloat) && catSel == false)
                        {
                            A2.setOutlineColor(sf::Color::Red);
                            theCategory = "Sports";
                            catSel = true;
                        }
                        else if (boxA3.contains(mousePosFloat) && catSel == false)
                        {
                            A3.setOutlineColor(sf::Color::Red);
                            theCategory = "Arcade";
                            catSel = true;
                        }
                        else if (boxA4.contains(mousePosFloat) && catSel == false)
                        {
                            A4.setOutlineColor(sf::Color::Red);
                            theCategory = "Entertainment";
                            catSel = true;
                        }
                        else if (boxA5.contains(mousePosFloat) && catSel == false)
                        {
                            A5.setOutlineColor(sf::Color::Red);
                            theCategory = "Lifestyle";
                            catSel = true;
                        }
                        else if (boxA6.contains(mousePosFloat) && catSel == false)
                        {
                            A6.setOutlineColor(sf::Color::Red);
                            theCategory = "Music & Audio";
                            catSel = true;
                        }
                        else if (boxA7.contains(mousePosFloat) && catSel == false)
                        {
                            A7.setOutlineColor(sf::Color::Red);
                            theCategory = "Tools";
                            catSel = true;
                        }
                        else if (boxA8.contains(mousePosFloat) && catSel == false)
                        {
                            A8.setOutlineColor(sf::Color::Red);
                            theCategory = "Education";
                            catSel = true;
                        }

                        if (boxB1.contains(mousePosFloat) && priceSel == false)
                        {
                            B1.setOutlineColor(sf::Color::Red);
                            thePrice = 0;
                            priceSel = true;
                        }
                        else if (boxB2.contains(mousePosFloat) && priceSel == false)
                        {
                            B2.setOutlineColor(sf::Color::Red);
                            thePrice = 1;
                            priceSel = true;
                        }
                        else if (boxB3.contains(mousePosFloat) && priceSel == false)
                        {
                            B3.setOutlineColor(sf::Color::Red);
                            thePrice = 2;
                            priceSel = true;
                        }
                        else if (boxB4.contains(mousePosFloat) && priceSel == false)
                        {
                            B4.setOutlineColor(sf::Color::Red);
                            thePrice = 3;
                            priceSel = true;
                        }
                        else if (boxB5.contains(mousePosFloat) && priceSel == false)
                        {
                            B5.setOutlineColor(sf::Color::Red);
                            thePrice = 4;
                            priceSel = true;
                        }
                        else if (boxB6.contains(mousePosFloat) && priceSel == false)
                        {
                            B6.setOutlineColor(sf::Color::Red);
                            thePrice = 5;
                            priceSel = true;
                        }
                        else if (boxB7.contains(mousePosFloat) && priceSel == false)
                        {
                            B7.setOutlineColor(sf::Color::Red);
                            thePrice = 6;
                            priceSel = true;
                        }
                        if (boxC1.contains(mousePosFloat) && rateSel == false)
                        {
                            C1.setOutlineColor(sf::Color::Red);
                            theRating = 0;
                            rateSel = true;
                        }
                        else if (boxC2.contains(mousePosFloat) && rateSel == false)
                        {
                            C2.setOutlineColor(sf::Color::Red);
                            theRating = 1;
                            rateSel = true;
                        }
                        else if (boxC3.contains(mousePosFloat) && rateSel == false)
                        {
                            C3.setOutlineColor(sf::Color::Red);
                            theRating = 2;
                            rateSel = true;
                        }
                        else if (boxC4.contains(mousePosFloat) && rateSel == false)
                        {
                            C4.setOutlineColor(sf::Color::Red);
                            theRating = 3;
                            rateSel = true;
                        }
                        else if (boxC5.contains(mousePosFloat) && rateSel == false)
                        {
                            C5.setOutlineColor(sf::Color::Red);
                            theRating = 4;
                            rateSel = true;
                        }
                        else if (boxC6.contains(mousePosFloat) && rateSel == false)
                        {
                            C6.setOutlineColor(sf::Color::Red);
                            theRating = 5;
                            rateSel = true;
                        }
                        if (boxD1.contains(mousePosFloat) && matSel == false)
                        {
                            D1.setOutlineColor(sf::Color::Red);
                            contentRating = "Everyone";
                            matSel = true;
                        }
                        else if (boxD2.contains(mousePosFloat) && matSel == false)
                        {
                            D2.setOutlineColor(sf::Color::Red);
                            contentRating = "Everyone 10+";
                            matSel = true;
                        }
                        else if (boxD3.contains(mousePosFloat) && matSel == false)
                        {
                            D3.setOutlineColor(sf::Color::Red);
                            contentRating = "Teen";
                            matSel = true;
                        }
                        else if (boxD4.contains(mousePosFloat) && matSel == false)
                        {
                            D4.setOutlineColor(sf::Color::Red);
                            contentRating = "Mature 17+";
                            matSel = true;
                        }
                        else if (boxD5.contains(mousePosFloat) && matSel == false)
                        {
                            D5.setOutlineColor(sf::Color::Red);
                            contentRating = "Adult only 18+";
                            matSel = true;
                        }
                        else if (boxD6.contains(mousePosFloat) && matSel == false)
                        {
                            D6.setOutlineColor(sf::Color::Red);
                            contentRating = "Unrated";
                            matSel = true;
                        }
                        if (boxE1.contains(mousePosFloat) && adSel == false)
                        {
                            E1.setOutlineColor(sf::Color::Red);
                            hasAds = true;
                            adSel = true;
                            
                        }
                        else if (boxE2.contains(mousePosFloat) && adSel == false)
                        {
                            E2.setOutlineColor(sf::Color::Red);
                            hasAds = false;
                            adSel = true;
                            
                        }
                        if (boxF1.contains(mousePosFloat) && iapSel == false)
                        {
                            F1.setOutlineColor(sf::Color::Red);
                            inAppPur = true;
                            iapSel = true;
                        }
                        else if (boxF2.contains(mousePosFloat) && iapSel == false)
                        {
                            F2.setOutlineColor(sf::Color::Red);
                            inAppPur = false;
                            iapSel = true;
                        }
                        if (boxG1.contains(mousePosFloat) && sizeSel == false)
                        {
                            G1.setOutlineColor(sf::Color::Red);
                            theSize = 500000;
                            sizeSel = true;
                        }
                        else if (boxG2.contains(mousePosFloat) && sizeSel == false)
                        {
                            G2.setOutlineColor(sf::Color::Red);
                            theSize = 1000000;
                            sizeSel = true;
                        }
                        else if (boxG3.contains(mousePosFloat) && sizeSel == false)
                        {
                            G3.setOutlineColor(sf::Color::Red);
                            theSize = 5000000;
                            sizeSel = true;
                        }
                        else if (boxG4.contains(mousePosFloat) && sizeSel == false)
                        {
                            G4.setOutlineColor(sf::Color::Red);
                            theSize = 10000000;
                            sizeSel = true;
                        }
                        else if (boxG5.contains(mousePosFloat) && sizeSel == false)
                        {
                            G5.setOutlineColor(sf::Color::Red);
                            theSize = 10000001;
                            sizeSel = true;
                        }
                        if (boxds1.contains(mousePosFloat) && dsSel == false)
                        {
                            ds1.setOutlineColor(sf::Color::Red);
                            theDs = 1;
                            dsSel = true;
                        }
                        else if (boxds2.contains(mousePosFloat) && dsSel == false)
                        {
                            ds2.setOutlineColor(sf::Color::Red);
                            theDs = 2;
                            dsSel = true;
                        }
                 
                        if (boxReset.contains(mousePosFloat))
                        {
                            catSel = false;
                            priceSel = false;
                            rateSel = false;
                            matSel = false;
                            adSel = false;
                            iapSel = false;
                            sizeSel = false;
                            goPress = false;
                            dsSel = false;
                            int theDs = 0;
                            A1.setOutlineColor(sf::Color::Blue);
                            A2.setOutlineColor(sf::Color::Blue);
                            A3.setOutlineColor(sf::Color::Blue);
                            A4.setOutlineColor(sf::Color::Blue);
                            A5.setOutlineColor(sf::Color::Blue);
                            A6.setOutlineColor(sf::Color::Blue);
                            A7.setOutlineColor(sf::Color::Blue);
                            A8.setOutlineColor(sf::Color::Blue);
                            B1.setOutlineColor(sf::Color::Blue);
                            B2.setOutlineColor(sf::Color::Blue);
                            B3.setOutlineColor(sf::Color::Blue);
                            B4.setOutlineColor(sf::Color::Blue);
                            B5.setOutlineColor(sf::Color::Blue);
                            B6.setOutlineColor(sf::Color::Blue);
                            B7.setOutlineColor(sf::Color::Blue);
                            C1.setOutlineColor(sf::Color::Blue);
                            C2.setOutlineColor(sf::Color::Blue);
                            C3.setOutlineColor(sf::Color::Blue);
                            C4.setOutlineColor(sf::Color::Blue);
                            C5.setOutlineColor(sf::Color::Blue);
                            C6.setOutlineColor(sf::Color::Blue);
                            D1.setOutlineColor(sf::Color::Blue);
                            D2.setOutlineColor(sf::Color::Blue);
                            D3.setOutlineColor(sf::Color::Blue);
                            D4.setOutlineColor(sf::Color::Blue);
                            D5.setOutlineColor(sf::Color::Blue);
                            D6.setOutlineColor(sf::Color::Blue);
                            E1.setOutlineColor(sf::Color::Blue);
                            E2.setOutlineColor(sf::Color::Blue);
                            F1.setOutlineColor(sf::Color::Blue);
                            F2.setOutlineColor(sf::Color::Blue);
                            G1.setOutlineColor(sf::Color::Blue);
                            G2.setOutlineColor(sf::Color::Blue);
                            G3.setOutlineColor(sf::Color::Blue);
                            G4.setOutlineColor(sf::Color::Blue);
                            G5.setOutlineColor(sf::Color::Blue);
                            ds1.setOutlineColor(sf::Color::Blue);
                            ds2.setOutlineColor(sf::Color::Blue);
                        }
                        if (boxGo.contains(mousePosFloat))
                        {
                            if (catSel && rateSel && priceSel && matSel && adSel && iapSel && sizeSel && dsSel) {
                                if (theDs == 1)
                                {
                                    map<double, vector<App>> appRanks;
                                    MaxHeap heap(100201);
                                    App source(theCategory, thePrice, theRating, contentRating, hasAds, inAppPur, theSize);
                                    string fileName = "DataCategories.csv";
                                    ifstream aFile(fileName);
                                    string line;
                                    getline(aFile, line);
                                    string appName;
                                    string appID;
                                    string category;
                                    string rating;
                                    string ratingCount;
                                    string installs;
                                    string minInstalls;
                                    string maxInstalls;
                                    string free;
                                    string price;
                                    string currency;
                                    string size;
                                    string minimumAndroid;
                                    string developerID;
                                    string developerWebsite;
                                    string developerEmail;
                                    string firstHalfDateAdded;
                                    string secondHalfDateAdded;
                                    string dateAdded;
                                    string firstHalfDateUpdated;
                                    string secondHalfDateUpdated;
                                    string dateUpdated;
                                    string maturityLevel;
                                    string privacyPolicy;
                                    string adSupported;
                                    string inAppPurchases;
                                    string editorsChoice;
                                    string scrapedTime;
                                    string trashString;

                                    int count = 0;
                                    vector<string> vec;
                                    if (aFile.is_open())
                                    {
                                        while (getline(aFile, line) && count <= 100200)
                                        {
                                            istringstream stream(line);
                                            getline(stream, trashString, ',');
                                            getline(stream, appName, ',');
                                            getline(stream, appID, ',');
                                            getline(stream, category, ',');
                                            getline(stream, rating, ',');
                                            getline(stream, ratingCount, ',');
                                            getline(stream, installs, ',');
                                            getline(stream, minInstalls, ',');
                                            getline(stream, maxInstalls, ',');
                                            getline(stream, free, ',');
                                            getline(stream, price, ',');
                                            getline(stream, currency, ',');
                                            getline(stream, size, ',');
                                            getline(stream, minimumAndroid, ',');
                                            getline(stream, developerID, ',');
                                            getline(stream, developerWebsite, ',');
                                            getline(stream, developerEmail, ',');
                                            getline(stream, dateAdded, ',');
                                            getline(stream, dateUpdated, ',');
                                            getline(stream, maturityLevel, ',');
                                            getline(stream, privacyPolicy, ',');
                                            getline(stream, adSupported, ',');
                                            getline(stream, inAppPurchases, ',');
                                            getline(stream, editorsChoice, ',');
                                            getline(stream, scrapedTime, ',');

                                            double tempRating = stod(rating);
                                            unsigned long long tempRatingCount = stoull(ratingCount);
                                            unsigned long long tempInstalls = stoull(installs);
                                            bool tempFree = BoolConv(free);
                                            double tempPrice = stod(price);
                                            unsigned long tempSize = ConvertString(size);
                                            bool tempAds = BoolConv(adSupported);
                                            bool tempInAppPurchases = BoolConv(inAppPurchases);
                                            bool tempEditorsChoice = BoolConv(editorsChoice);

                                            App a(appName, category, tempRating, tempRatingCount, tempInstalls, tempFree, tempPrice, currency, tempSize, minimumAndroid, maturityLevel, tempAds, tempInAppPurchases, tempEditorsChoice, 0.0);
                                            a.Rank(source);
                                            count++;

                                            appRanks[a.GetRank()].push_back(a);
                                            heap.Insert(a);
                                        }
                                       
                                        for (unsigned int i = 0; i < 10; i++) {
                                            vec.push_back(heap.Extract().GetName());
                                        }
                                    }
                                    for (int i = 0; i < 10; i++)
                                    {
                                        string temp =vec[i];

                                        if (temp.size() > 30)
                                        {
                                            temp = temp.substr(0, 30);
                                        }
                                        apps[i] = temp;

                                    }
                                }
                                else if (theDs == 2)
                                {
                                    map<double, vector<App>> appRanks;
                                    App source(theCategory, thePrice, theRating, contentRating, hasAds, inAppPur, theSize);
                                    string fileName = "DataCategories.csv";
                                    ifstream aFile(fileName);
                                    string line;
                                    getline(aFile, line);
                                    string appName;
                                    string appID;
                                    string holdCategory;
                                    string holdRating;
                                    string ratingCount;
                                    string installs;
                                    string minInstalls;
                                    string maxInstalls;
                                    string free;
                                    string tempPrice;
                                    string currency;
                                    string holdSize;
                                    string minimumAndroid;
                                    string developerID;
                                    string developerWebsite;
                                    string developerEmail;
                                    string firstHalfDateAdded;
                                    string secondHalfDateAdded;
                                    string dateAdded;
                                    string firstHalfDateUpdated;
                                    string secondHalfDateUpdated;
                                    string dateUpdated;
                                    string maturityLevel;
                                    string privacyPolicy;
                                    string adSupported;
                                    string inAppPurchases;
                                    string editorsChoice;
                                    string scrapedTime;
                                    string trashString;

                                    int count = 0;
                                    if (aFile.is_open())
                                    {
                                        while (getline(aFile, line) && count <= 100200)
                                        {
                                            istringstream stream(line);
                                            getline(stream, trashString, ',');
                                            getline(stream, appName, ',');
                                            getline(stream, appID, ',');
                                            getline(stream, holdCategory, ',');
                                            getline(stream, holdRating, ',');
                                            getline(stream, ratingCount, ',');
                                            getline(stream, installs, ',');
                                            getline(stream, minInstalls, ',');
                                            getline(stream, maxInstalls, ',');
                                            getline(stream, free, ',');
                                            getline(stream, tempPrice, ',');
                                            getline(stream, currency, ',');
                                            getline(stream, holdSize, ',');
                                            getline(stream, minimumAndroid, ',');
                                            getline(stream, developerID, ',');
                                            getline(stream, developerWebsite, ',');
                                            getline(stream, developerEmail, ',');
                                            getline(stream, dateAdded, ',');
                                            getline(stream, dateUpdated, ',');
                                            getline(stream, maturityLevel, ',');
                                            getline(stream, privacyPolicy, ',');
                                            getline(stream, adSupported, ',');
                                            getline(stream, inAppPurchases, ',');
                                            getline(stream, editorsChoice, ',');
                                            getline(stream, scrapedTime, ',');

                                            double tempRating = stod(holdRating);
                                            unsigned long long tempRatingCount = stoull(ratingCount);
                                            unsigned long long tempInstalls = stoull(installs);
                                            bool tempFree = BoolConv(free);
                                            double thetempPrice = stod(tempPrice);
                                            unsigned long tempSize = ConvertString(holdSize);
                                            bool tempAds = BoolConv(adSupported);
                                            bool tempInAppPurchases = BoolConv(inAppPurchases);
                                            bool tempEditorsChoice = BoolConv(editorsChoice);

                                            App a(appName, holdCategory, tempRating, tempRatingCount, tempInstalls, tempFree, thetempPrice, currency, tempSize, minimumAndroid, maturityLevel, tempAds, tempInAppPurchases, tempEditorsChoice, 0.0);
                                            a.Rank(source);
                                            count++;

                                            appRanks[a.GetRank()].push_back(a);
                                        }

                                    }
                                    int count2 = 0;
                                    vector<string> x;
                                    map<double, vector<App>>::reverse_iterator itr;
                                    for (itr = appRanks.rbegin(); itr != appRanks.rend(); itr++)
                                    {
                                        for (int i = 0; i < itr->second.size(); i++)
                                        {
                                            string temp = itr->second[i].GetName();

                                            if (temp.size() > 30)
                                            {
                                                temp = temp.substr(0, 30);
                                            }
                                            x.push_back(temp);
                                            count2++;
                                            if (count2 == 10)
                                            {
                                                break;
                                            }
                                        }
                                        if (count2 == 10)
                                        {
                                            break;
                                        }

                                    }



                                    for (int i = 0; i < 10; i++)
                                    {
                                        apps[i] = x[i];
                                    }
                                }
                          
                            }
                            a1Name.setString("App 1: " + apps[0]);
                            a2Name.setString("App 2: " + apps[1]);
                            a3Name.setString("App 3: " + apps[2]);
                            a4Name.setString("App 4: " + apps[3]);
                            a5Name.setString("App 5: " + apps[4]);
                            a6Name.setString("App 6: " + apps[5]);
                            a7Name.setString("App 7: " + apps[6]);
                            a8Name.setString("App 8: " + apps[7]);
                            a9Name.setString("App 9: " + apps[8]);
                            a10Name.setString("App 10: " + apps[9]);

                            goPress = true;
                            window.clear();
                            window.draw(sprite);
                            window.draw(title);
                            window.draw(reset);
                            window.draw(rBut);
                            window.draw(go);
                            window.draw(goBut);
                            window.draw(app1);
                            window.draw(a1Name);
                            window.draw(app2);
                            window.draw(a2Name);
                            window.draw(app3);
                            window.draw(a3Name);
                            window.draw(app4);
                            window.draw(a4Name);
                            window.draw(app5);
                            window.draw(a5Name);
                            window.draw(app6);
                            window.draw(a6Name);
                            window.draw(app7);
                            window.draw(a7Name);
                            window.draw(app8);
                            window.draw(a8Name);
                            window.draw(app9);
                            window.draw(a9Name);
                            window.draw(app10);
                            window.draw(a10Name);
                            window.display();
                        }
                       
                        
                       
                }
            }
        }
        if (!goPress) {
            window.clear();
            window.draw(reset);
            window.draw(rBut);
            window.draw(go);
            window.draw(goBut);
            window.draw(category);
            window.draw(A1);
            window.draw(A2);
            window.draw(A3);
            window.draw(A4);
            window.draw(A5);
            window.draw(A6);
            window.draw(A7);
            window.draw(A8);
            window.draw(com);
            window.draw(B1);
            window.draw(B2);
            window.draw(B3);
            window.draw(B4);
            window.draw(B5);
            window.draw(B6);
            window.draw(B7);
            window.draw(mun);
            window.draw(C1);
            window.draw(C2);
            window.draw(C3);
            window.draw(C4);
            window.draw(C5);
            window.draw(C6);
            window.draw(rate);
            window.draw(D1);
            window.draw(D2);
            window.draw(D3);
            window.draw(D4);
            window.draw(D5);
            window.draw(D6);
            window.draw(tr);
            window.draw(E1);
            window.draw(E2);
            window.draw(ad);
            window.draw(F1);
            window.draw(F2);
            window.draw(iap);
            window.draw(G1);
            window.draw(G2);
            window.draw(G3);
            window.draw(G4);
            window.draw(G5);
            window.draw(as);
            window.draw(sprite);
            window.draw(title);
            window.draw(prompt);
            window.draw(ds1);
            window.draw(ds2);
            window.draw(dss);
            window.draw(price);
            window.draw(rating);
            window.draw(Maturity);
            window.draw(ads);
            window.draw(pur);
            window.draw(size);
            window.display();
        }
    }
    return 0;
}