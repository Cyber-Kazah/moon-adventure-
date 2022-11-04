#include "TXLib.h"

void drawFon()
{

    txSetFillColor (RGB(0, 0, 30));
    txRectangle (0, 0, 800, 400);//����
    txSetFillColor (TX_GREEN);
    txRectangle (0, 400, 800, 600);//�����
}

void drawDoma(int y)
{
     txSetFillColor (RGB(64, 64, 64));//��� ����
     txRectangle (158, y, 22, 397);

     txSetFillColor (RGB(64, 64, 64));//��� ���
     txRectangle (214, y, 351, 397);

}

void drawDoroga()
{
    txSetFillColor (RGB(24, 24, 24));//������
    txRectangle (420, 400, 738, 600);

    txSetFillColor (RGB(233, 188, 7));//������ �� ������
    txRectangle (570, 399, 592, 486);

    txSetFillColor (RGB(233, 188, 7));//������ �� ������ ����� 2
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

   txSetColor (RGB(255, 0, 0));//����
   txSetFillColor(RGB(255, 0, 0));
   txRectangle (209, 402,542, 570);

   txSetColor(RGB(12, 39, 228));//�������
   txSetFillColor(RGB(12, 39, 228));
   txLine (492, 459, 445, 510);
   txLine (492, 459, 527, 512);
   POINT chel[3] = {{492, 459}, {432, 372}, {542, 372}};
   txPolygon (chel, 3);
   txCircle(491, 345, 25);
   txLine (432, 372, 436, 453);
   txLine (542, 372, 544, 443);
   txTextOut (450, 204, "� ���� ���� �����, � ���� ������.");


   txSetColor (RGB(218, 70, 244));//�������
   txSetFillColor(RGB(218, 70, 244));
   txLine (289, 386, 289, 460);
   txLine (289, 419, 258, 452);
   txLine (289, 419, 312, 450);
   txLine (289, 460, 306, 521);
   txLine (289, 460, 261, 521);
   txCircle (289, 386, 25);
   txTextOut (229, 227, "� ����� ����.");



}

 void drawRicar()
{

txSetColor (TX_BLACK);//�����
txSetFillColor (RGB(147, 147, 147));
txRectangle (0, 400, 236, 189);//������
txRectangle (236, 189, 149, 87);//�����1
txRectangle (87, 189, 0, 90);//�����2



txSetColor (TX_BLACK); //������
txSetFillColor (RGB(145, 62, 30));
txRectangle (66, 400, 178, 244);



txSetColor (RGB(241, 123, 73));
txLine (192, 87, 192, 14);//���� 1
txLine (46, 87, 46, 14);//���� 2

txSetColor (TX_BLACK);
txSetFillColor (RGB(0, 255, 0));

POINT flag[3] = {{190, 71}, {246, 44}, {192, 14}};
txPolygon (flag, 3);



POINT flag2[3] = {{46, 76}, {96, 44}, {46, 14}};
txPolygon (flag2, 3);

txSetColor (RGB(255, 0, 0));
txSetFillColor(RGB(255, 0, 0));
txRectangle (438, 364, 512, 266);//���� ��������


txSetColor (TX_WHITE);
txSetFillColor(RGB(0, 255, 0));
txLine (480, 260, 480, 336);//����
txLine (445, 399, 480, 332);//����� ����
txLine (480, 336, 502, 399);//������ ����
txLine (480, 265, 523, 318);//������ ����
txLine (480, 265, 419, 265);//����� ����
txCircle (480, 239, 20);//������

txSetColor (RGB(0, 255, 0));
txTextOut (100, 185, "��� ����� �� ����� ����� ��� ���� ������.");


txSetColor (TX_WHITE);
txSetFillColor(RGB(221, 221, 0));
POINT korona[7] = {{449, 215}, {449, 188}, {467, 204}, {487, 184}, {502, 199}, {518, 188}, {518, 216}};//������
txPolygon (korona, 7);









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



        xMoon += 10;
        txSleep(10);
    }

    while(yDoma > 100)//��� ����
    {
        drawFon();
        drawMoon(xMoon);
        drawDoma(yDoma);
        drawDoroga();


        yDoma -= 5;
        txSleep(15);
    }

    xMoon = -100;//���� � �����
    while(xMoon < 850)
    {
        drawFon();
        drawPara();
        drawMoon(xMoon);
        xMoon = xMoon + 5;
        txSleep(15);

    }

    xMoon = -100;//������
    while(xMoon < 500)
    {
        drawFon();
        drawMoon(xMoon);
        drawRicar();

        xMoon = xMoon + 5;
        txSleep(15);
    }


    xMoon = 500;//������
    while(xMoon < 850)
    {

      drawFon();
      drawMoon(xMoon);





      xMoon = xMoon + 5;
      txSleep(15);

    }













txTextCursor (false);
return 0;
}
