#include "TXLib.h"

void drawFon()
{

    txSetFillColor (RGB(0, 0, 30));
    txRectangle (0, 0, 800, 400);//????
    txSetFillColor (TX_GREEN);
    txRectangle (0, 400, 800, 600);//?????
}

void drawDoma(int y)
{
     txSetFillColor (RGB(64, 64, 64));//??? ????
     txRectangle (158, y, 22, 397);

     txSetFillColor (RGB(64, 64, 64));//??? ???
     txRectangle (214, y, 351, 397);

}

void drawDoroga()
{
    txSetFillColor (RGB(24, 24, 24));//??????
    txRectangle (420, 400, 738, 600);

    txSetFillColor (RGB(233, 188, 7));//?????? ?? ??????
    txRectangle (570, 399, 592, 486);

    txSetFillColor (RGB(233, 188, 7));//?????? ?? ?????? ????? 2
    txRectangle (570, 525, 592, 598);
}

void drawMoon(int x)
{
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x, 98, 50);
}

 void drawPara()
{

   txSetColor (RGB(255, 0, 0));//?????
   txSetFillColor(RGB(255, 0, 0));
   txRectangle (209, 402,542, 570);

   txSetColor(RGB(12, 39, 228));//???????
   txSetFillColor(RGB(12, 39, 228));
   txLine (492, 459, 445, 510);
   txLine (492, 459, 527, 512);
   POINT chel[3] = {{492, 459}, {432, 372}, {542, 372}};
   txPolygon (chel, 3);
   txCircle(491, 345, 25);
   txLine (432, 372, 436, 453);
   txLine (542, 372, 544, 443);


   txSetColor (RGB(218, 70, 244));//???????
   txSetFillColor(RGB(218, 70, 244));
   txLine (289, 386, 289, 460);
   txLine (289, 419, 258, 452);
   txLine (289, 419, 312, 450);
   txLine (289, 460, 306, 521);
   txLine (289, 460, 261, 521);
   txCircle (289, 386, 25);



}

 void drawRicar()
{

txSetColor (TX_BLACK);//?????
txSetFillColor (RGB(147, 147, 147));
txRectangle (0, 400, 236, 189);//??????
txRectangle (236, 189, 149, 87);//?????1
txRectangle (87, 189, 0, 90);//?????2



txSetColor (TX_BLACK); //??????
txSetFillColor (RGB(145, 62, 30);
txRectangle (66, 400, 178, 244);

}


int main()
{
txCreateWindow (800, 600);

    int xMoon = 100;
    int xFon  = 100;
    int yDoma  = 360;
    int xDoroga = 100;
    int xZabor = 100;


    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);


    while(xMoon < 850)
    {
        drawFon();
        drawMoon(xMoon);
        drawDoma(yDoma);
        drawDoroga();
        drawZabor();


        xMoon += 10;
        txSleep(10);
    }

    while(yDoma > 100)//??? ????
    {
        drawFon();
        drawMoon(xMoon);
        drawDoma(yDoma);
        drawDoroga();


        yDoma -= 5;
        txSleep(15);
    }

   xMoon = -100;//???? ? ?????
    while(xMoon < 850)
    {
    drawFon();
    drawPara();
    drawMoon(xMoon);
    xMoon = xMoon + 5;
    txSleep(15);

    }

   xMoon = -100;//???-??
    while(xMoon < 500)
   {
    drawFon();
    drawMoon(xMoon);
    drawRicar();

    xMoon = xMoon + 5;
    txSleep(15);
    }






txTextCursor (false);
return 0;
}
