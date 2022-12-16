#include "TXLib.h"

 void drawFon()
{
    txSetFillColor (RGB(0, 0, 30));
    txRectangle (0, 0, 800, 400);//����
    txSetFillColor (TX_GREEN);
    txRectangle (0, 400, 800, 600);//�����
}

 void drawZastava()
{
 txSetFillColor (TX_BLACK);
 txRectangle (0, 0, 800, 600);

 txSetFillColor (RGB(195, 195, 195));
 txRectangle (0, 195, 795, 395);

 txSetColor (TX_WHITE);
 txSelectFont ("Comic Sans MS", 55);
 txTextOut (300, 250, "���������.");





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
   txSelectFont ("Times New Roman", 20);
   txTextOut (450, 204, "� ���� �����. �� �� ������� � ����.");


   txSetColor (RGB(218, 70, 244));//�������
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
    txSelectFont ("Times New Roman", 20);
    txTextOut (320, 156, "��� ����� �� ����� ����� ��� ���� ������.");

    txSetColor (TX_WHITE);
    txSetFillColor(RGB(221, 221, 0));
    POINT korona[7] = {{449, 215}, {449, 188}, {467, 204}, {487, 184}, {502, 199}, {518, 188}, {518, 216}};//������
    txPolygon (korona, 7);
}

 void drawPara2()
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



   txSetColor (RGB(218, 70, 244));//�������
   txSetFillColor(RGB(218, 70, 244));
   txLine (289, 386, 289, 460);
   txLine (289, 419, 258, 452);
   txLine (289, 419, 312, 450);
   txLine (289, 460, 306, 521);
   txLine (289, 460, 261, 521);
   txCircle (289, 386, 25);
   txTextOut (229, 227, "�� ������� :3 .");

  }

 void drawRicar2()
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

txSetColor (TX_WHITE);
txTextOut (535, 152, "�, � ��� ���������.");


txSetColor (TX_WHITE);
txSetFillColor(RGB(221, 221, 0));
POINT korona[7] = {{449, 215}, {449, 188}, {467, 204}, {487, 184}, {502, 199}, {518, 188}, {518, 216}};//������
txPolygon (korona, 7);

 }

 void drawNevidimka(int x)
{
    txSetColor (RGB(0, 0, 30));
    txSetFillColor (RGB(0, 0, 30));
    txCircle (x, 98, 50);


  }

 void drawYaponec()
{
   txSetColor (TX_BLACK);
   txSetFillColor(RGB(195, 195, 195));//���������
   txRectangle (428, 400, 800, 341);



   txSetColor (TX_BLACK);
   txSetFillColor (RGB(185, 122, 87));//�����
   txRectangle (477, 341, 800, 106);

    txSetColor (TX_BLACK);
    txSetFillColor (RGB(243, 233, 226));
    txRectangle (497, 323, 659, 122);//�� �������� �����

    txSetColor (TX_BLACK);
    txSetFillColor (RGB(243, 233, 226));
     txRectangle (689, 323, 800, 122);//������ �� �������� �����



   txSetColor (TX_BLACK);
   txSetFillColor (RGB(237, 28, 36));
   POINT krisha[5] = {{373, 107}, {476, 106}, {639, 1}, {800, 1}, {800, 107}};//�����
   txPolygon (krisha, 5);



    txSetColor (TX_WHITE);
   txLine (204, 306, 204, 219);//����
   txLine (111, 204, 204, 219);// ���� �����
   txLine (254, 306, 204, 219);//���� ������
   txLine (235, 398, 204, 306);//���� ������
   txLine (170, 400, 204, 306);//���� �����


   txSetColor (TX_WHITE);
   txSetFillColor (RGB(163, 73, 164));
   txCircle (202, 197, 25);//������

   txSetColor (TX_BLACK);
   txSetFillColor (RGB(247, 227, 119));
   POINT shlapa[3] = {{138, 174}, {208, 133}, {274, 174}};//�����
   txPolygon (shlapa, 3);

    txSetColor (RGB(64, 0, 0));
    txLine (270, 299, 244, 312);
    txLine (239, 302, 250, 320);


   txSetColor (TX_WHITE);
   txSetFillColor (RGB(120, 120, 120));
   POINT mech[4] = {{249, 322}, {208, 338}, {178, 336}, {242, 306}};//��� ��������!
   txPolygon (mech, 4);


   txSetColor (RGB(163, 73, 164));
   txTextOut (95, 70, "�� ������ ��������� ��� �������� ���?! �� �� ����� �����!.");



   //� ������� �� ������ ������� ���� ���� ��������, ��� ���� � ����� ��� ������ ���� 2 ���� �������





 }

 void drawNevidimka2(int x)
{

    txSetColor (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txCircle (x, 98, 50);


   }

 void drawFon2()
{
txSetFillColor (RGB(0, 0, 0));
txRectangle (0, 0, 800, 600);

   }

 void drawHoho()
{

       txSetColor (RGB(0, 255, 0));
       txTextOut (378, 255, "�� ��.");

   }

 void drawRoja()
{
    txSetColor (TX_WHITE);
    txSetFillColor (RGB(0, 255, 0));
    POINT Roja[9] = {{161, 125}, {112, 197}, {104, 350}, {135, 449}, {181, 466}, {298, 411}, {336, 358}, {359, 286}, {365, 185}};//���� ����
    txPolygon (Roja, 9);

    txSetFillColor (TX_WHITE);
    POINT Gubi[7] = {{150, 373}, {170, 373}, {182, 384}, {202, 384}, {223, 400}, {196, 411}, {157, 396}};//����
    txPolygon (Gubi, 7);

    POINT brov1[4] = {{127, 198}, {156, 187}, {206, 256}, {147, 199}};//����� ����� (�� ������)
    txPolygon (brov1, 4);


    POINT brov2[5] = {{355, 265}, {348, 241}, {266, 257}, {247, 270}, {336, 254}};//����� ������ (�� ������)
    txPolygon (brov2, 5);

    POINT glaz1[8] = {{139, 229}, {147, 232}, {152, 230}, {187, 249}, {192, 258}, {173, 265}, {145, 257}, {137, 232}};//���� ����� (�� ������)
    txPolygon (glaz1, 8);


    POINT glaz2[7] = {{264, 283}, {274, 276}, {309, 283}, {325, 293}, {307, 308}, {280, 303}, {265, 286}};//���� ������ (�� ������)
    txPolygon (glaz2, 7);


  }

 void drawPonti()
{

       txSetColor (RGB(0, 255, 0));
       txTextOut (378, 255, "�� �������� �������, ��� ��������? �� �������� >:).");



   }

 void drawOpasno(int x)
{
    //�=414 - ������� �����
    txSetColor (TX_WHITE);
    txSetFillColor (RGB(163, 73, 164));
    POINT riji[7] = {{x+414-414, 163}, {x+446-414, 306}, {x+537-414, 442}, {x+626-414, 447}, {x+721-414, 317}, {x+752-414, 154}, {x+757-414, 87}};//���� ����
    txPolygon (riji, 7);

    txSetColor (TX_WHITE);
    POINT haha[5] = {{x+527-414, 330}, {x+551-414, 323}, {x+578-414, 329}, {x+605-414, 325}, {x+632-414, 333}};//���
    txPolygon (haha, 5);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT glaz[4] = {{x+460-414, 159}, {x+475-414, 171}, {x+529-414, 169}, {x+531-414, 155}};
    txPolygon (glaz, 4);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT glaz2[4] = {{x+634-414, 154}, {x+637-414, 165}, {x+680-414, 168}, {x+709-414, 123}};
    txPolygon (glaz2, 4);

    txSetColor (TX_WHITE);
    txSetFillColor (RGB(247, 227, 119));
    POINT shlapa[3] = {{x+795-414, 78}, {x+511-414, 6}, {x+289-414, 189}};
    txPolygon (shlapa, 3);

}

 void drawDead()
{

  txSetColor (TX_WHITE);
    txSetFillColor (RGB(0, 255, 0));
    POINT Roja[9] = {{161, 125}, {112, 197}, {104, 350}, {135, 449}, {181, 466}, {298, 411}, {336, 358}, {359, 286}, {365, 185}};//���� ����
    txPolygon (Roja, 9);

    txSetFillColor (TX_WHITE);
    POINT Gubi[7] = {{150, 373}, {170, 373}, {182, 384}, {202, 384}, {223, 400}, {196, 411}, {157, 396}};//����
    txPolygon (Gubi, 7);

    POINT brov1[4] = {{127, 198}, {156, 187}, {206, 256}, {147, 199}};//����� ����� (�� ������)
    txPolygon (brov1, 4);


    POINT brov2[5] = {{355, 265}, {348, 241}, {266, 257}, {247, 270}, {336, 254}};//����� ������ (�� ������)
    txPolygon (brov2, 5);

    POINT glyz1[8] = {{139, 229}, {147, 232}, {152, 230}, {187, 249}, {192, 258}, {173, 265}, {145, 257}, {137, 232}};//���� ����� (�� ������)
    txPolygon (glyz1, 8);


    POINT glyz2[7] = {{264, 283}, {274, 276}, {309, 283}, {325, 293}, {307, 308}, {280, 303}, {265, 286}};//���� ������ (�� ������)
    txPolygon (glyz2, 7);







  }

 void drawSlova()
{



  txSetFillColor(RGB(163, 73, 164));
  txTextOut (352, 86, "�������!.");


   }

 void drawLuna()
{


  txSetColor (TX_WHITE);
  txSetFillColor (TX_WHITE);
  txCircle (355, 255, 150);


   txSetColor (RGB(195, 195, 195));
   txSetFillColor (RGB(195, 195, 195));
   txRectangle (310, 180, 555, 290);
   txRectangle (200, 215, 325, 250);//�����
   txPlaySound("The end.wav");

   txSetFillColor (TX_RED);
   txRectangle (350, 205, 535, 260);

   txSetFillColor (RGB(255, 159, 159));
   txEllipse (370, 300, 465, 500);

   txSetFillColor(RGB(163, 73, 164));
   txTextOut (450, 85, "���! ��� ��� �������, ������ 10/10.");








  }

 void drawTitri()
{
   txSetColor(TX_BLACK);
   txRectangle (0, 0, 800, 600);




   txSetColor(TX_WHITE);
   txSetFillColor(RGB(163, 73, 164));
   txDrawText   (100, 250, 700, 350, "����� \n"
                        "�� � ���� �����,\n"
                         "���� ����� �������"\n"
                         "�������-�������� �����"\n"
                         "������-����� �������"\n");









}

int main()
{
txCreateWindow (800, 600);

    int xMoon = 100;
    int xFon  = 100;
    int yDoma  = 360;
    int xDoroga = 100;
    int xZabor = 100;
    int xNevidimka = 360;
    int xNevidimka2 = 360;
    int xFon2 = 100;
    int xOpasno = 220;


    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);

    while(xNevidimka2 < 850)
    {
      txBegin();
      drawZastava();

      xNevidimka2 = xNevidimka2 + 5;
         txEnd();
         txSleep(5);



    }

    while(xMoon < 850)
    {

        txBegin();
        drawFon();
        drawMoon(xMoon);
        drawDoma(yDoma);
        drawDoroga();

        xMoon += 10;
        txEnd();
        txSleep(10);
    }

    while(yDoma > 100)//��� ����
    {
        txBegin();
        drawFon();
        drawMoon(xMoon);
        drawDoma(yDoma);
        drawDoroga();


        yDoma -= 5;
        txEnd();
        txSleep(15);
    }

    xMoon = -100;//���� � �����
    while(xMoon < 850)
    {

        txBegin();
        drawFon();
        drawPara();
        drawMoon(xMoon);
        xMoon = xMoon + 5;
        txEnd();
        txSleep(15);

    }

    xMoon = 850;//���� � ����� 2
    while(xMoon < 1200)
    {

        txBegin();
        drawFon();
        drawPara2();

        xMoon = xMoon + 20;
        txEnd();
        txSleep(10);
     }

    xMoon = -100;//������
    while(xMoon < 500)
    {
        txBegin();
        drawFon();
        drawMoon(xMoon);
        drawRicar();

        xMoon = xMoon + 5;
        txEnd();
        txSleep(15);
    }

    xMoon = 500;//���� ���������
    while(xMoon < 600)
    {
        txBegin();
        drawFon();
        drawMoon(xMoon);
        drawRicar2();

        xMoon = xMoon + 1;
        txEnd();
        txSleep(15);

       }

    xNevidimka = 500;//���� � �������
    while (xNevidimka < 850)
    {

       txBegin();
       drawFon();
       drawNevidimka(xNevidimka);
       drawYaponec();

       xNevidimka = xNevidimka + 5;
       txEnd();
       txSleep(25);


       }

    xNevidimka2 = 500;//����� �����
    while(xNevidimka2 < 850)
    {
        txBegin();
        drawFon2();
        drawNevidimka2(xNevidimka2);
        drawHoho();

        xNevidimka2 = xNevidimka2 + 5;
        txEnd();
        txSleep(25);

      }

    xNevidimka2 = 500;
    while(xNevidimka2 < 850)
    {

         txBegin();
         drawFon2();
         drawNevidimka2(xNevidimka2);
         drawRoja();
         drawPonti();


         xNevidimka2 = xNevidimka2 + 5;
         txEnd();
         txSleep(25);
      }

    xOpasno = 1000;
    while(xOpasno > 250)
    {

         txBegin();
         drawFon2();
         drawOpasno(xOpasno);
         drawDead();
         drawSlova();


         xOpasno = xOpasno - 5;
         txEnd();
         txSleep(0.1);
      }

    xNevidimka2 = 500;
    while(xNevidimka2 < 850)
    {

         txBegin();
         drawFon2();
         drawNevidimka2(xNevidimka2);
         drawLuna();





         xNevidimka2 = xNevidimka2 + 5;
         txEnd();
         txSleep(25);



    }

    xNevidimka2 = 500;
    while(xNevidimka2 < 850)

    {

         txBegin();
         drawNevidimka2(xNevidimka2);
         drawTitri();





         xNevidimka2 = xNevidimka2 + 5;
         txEnd();
         txSleep(25);










    }










txTextCursor (false);
return 0;
}
