#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void VerileriDosyadanAl();
void ZamanKarmasikligi();
void YerKarmasikligi();
void SureninHesaplanmasi();
int sayac=0;
char hafiza;
char bigo[100];
int nsay=0;
int main()
{
    do
    {
        system("cls");// ekran temizleme yapar
        printf("\t\tMENU\n\n1-> Verileri Dosyadan Al\n2-> Zaman Karmasikligi\n3-> Yer Karmasikligi\n4-> Surenin Hesaplanmasi\n5-> Cikis\n\nLutfen islem seciniz:");//menü tablosu
        switch(getch())
        {
        case '1':
        {
            system("cls");
            VerileriDosyadanAl();
            break;
        }
        case '2':
        {
            system("cls");
            ZamanKarmasikligi();
            break;
        }
        case '3':
        {
            system("cls");
            YerKarmasikligi();
            break;
        }
        case '4':
        {
            system("cls");
            SureninHesaplanmasi();
            break;
        }
        case '5':
        {
            return 0;
            break;//cikis
        }
        default:
        {
            printf("Hatali giris");
        }
        }
    }
    while(1);
    getch();
    return 0;
}
void VerileriDosyadanAl()
{
    FILE *in=fopen("a.txt","r+");
    char c;

    while((c=fgetc(in))!=EOF)
    {
        sayac++;
    }
    if(sayac==0)
    {
        printf("Dosyada veri bulunamadi...");
        fclose(in);
        exit(0);
    }
    else
    {

        fseek(in,0,SEEK_SET);//imleci dosyanin en basina alıyoruz

        while((c=fgetc(in))!=EOF)
            putchar(c);
        fclose(in);

        puts("\nDevam etmek icin bir tusa basin ...");
        getch();

    }


}
void ZamanKarmasikligi()
{


    FILE *in=fopen("a.txt","r+");
    char c;
    int i=0;
    char data[sayac];
    while((c=fgetc(in))!=EOF)
    {
        putchar(c);
    }
    fseek(in,0,SEEK_SET);//imleci dosyanin en basina alıyoruz
    int forsay=0;
    int susac=0;
    int suskap=0;
    int icfor=0;
    int icwhile=0;
    int dowhilesay=0;
    int temp1=0;
    int temp2=0;
    int whilesay=0;
    int recsay=0;
    int noktavir=0;
    char recursive[50];
    i=0;
    int j=0;
    int gir=1;
    while((c=fgetc(in))!=EOF)
    {

        if(c=='f' && (c=fgetc(in))=='o' && (c=fgetc(in))=='r')
        {
            forsay++;
            while((c=fgetc(in))!=EOF)
            {
                if(noktavir>1)
                {
                    noktavir++;
                    if(c=='+'&& (c=fgetc(in))=='+')
                    {
                        temp1=1;
                        break;
                    }
                    else if( c=='+'&& (c=fgetc(in))=='=')
                    {
                        temp1=1;
                        break;
                    }
                    else if( c=='-'&& (c=fgetc(in))=='-')
                    {
                        temp1=1;
                        break;
                    }
                    else if(c=='-'&& (c=fgetc(in))=='=')
                    {
                        temp1=1;
                        break;
                    }
                    else if(c=='*'&& (c=fgetc(in))=='=')
                    {
                        temp1=2;
                        break;
                    }
                    else if( c=='/'&& (c=fgetc(in))=='=')
                    {
                        temp1=2;
                        break;
                    }
                    else if( c=='+')
                    {
                        temp1=1;
                        break;
                    }
                    else if( c=='-')
                    {
                        temp1=1;
                        break;
                    }

                }
                if(c==';')
                {

                    noktavir++;
                }

            }
            if(temp1==1)
            {
                bigo[nsay]='+';
                nsay++;
                bigo[nsay]='N';
                nsay++;
            }
            if(temp1==2)
            {
                bigo[nsay]='+';
                nsay++;
                bigo[nsay]='L';
                nsay++;
            }
            temp1=0;
            if((c=fgetc(in))!='{')
            {
                susac++;
                while((c=fgetc(in))!='}')
                {
                    if(c=='f' && (c=fgetc(in))=='o' && (c=fgetc(in))=='r')
                    {
                        i++;
                        icfor++;
                        while((c=fgetc(in))!=EOF)
                        {
                            if(noktavir>1)
                            {
                                noktavir++;
                                if(c=='+'&& (c=fgetc(in))=='+')
                                {
                                    temp2=1;
                                    break;
                                }
                                else if( c=='+'&& (c=fgetc(in))=='=')
                                {
                                    temp2=1;
                                    break;
                                }
                                else if( c=='-'&& (c=fgetc(in))=='-')
                                {
                                    temp2=1;
                                    break;
                                }
                                else if(c=='-'&& (c=fgetc(in))=='=')
                                {
                                    temp2=1;
                                    break;
                                }
                                else if( c=='+')
                                {
                                    temp2=1;
                                    break;
                                }
                                else if( c=='-')
                                {
                                    temp2=1;
                                    break;
                                }
                                else if(c=='*'&& (c=fgetc(in))=='=')
                                {
                                    temp2=2;
                                    break;
                                }
                                else if( c=='/'&& (c=fgetc(in))=='=')
                                {
                                    temp2=2;
                                    break;
                                }
                                else if( c=='*')
                                {
                                    temp2=2;
                                    break;
                                }
                                else if( c=='/')
                                {
                                    temp2=2;
                                    break;
                                }

                            }
                            if(c==';')
                            {

                                noktavir++;
                            }


                        }
                        if(temp2==1)
                        {
                            bigo[nsay]='*';
                            nsay++;
                            bigo[nsay]='N';
                            nsay++;
                        }
                        if(temp2==2)
                        {
                            bigo[nsay]='*';
                            nsay++;
                            bigo[nsay]='L';
                            nsay++;
                        }

                    }
                    temp2=0;
                }
            }

            temp1=0;
            icfor=0;
            bigo[nsay]='+';
            nsay++;
        }
        if(c=='w' && (c=fgetc(in))=='h' && (c=fgetc(in))=='i'&& (c=fgetc(in))=='l'&& (c=fgetc(in))=='e')
        {
            whilesay++;
            while((c=fgetc(in))!=EOF)
            {
                if(c=='{')
                {
                    susac++;

                    if(((c=fgetc(in))!='+'&&(c=fgetc(in))!='+')||((c=fgetc(in))!='-'&&(c=fgetc(in))!='-')||((c=fgetc(in))!='+'&&(c=fgetc(in))!='=')||((c=fgetc(in))!='-'&&(c=fgetc(in))!='='))
                    {
                        temp1=1;
                    }
                    else if(((c=fgetc(in))!='/'&&(c=fgetc(in))!='=')||((c=fgetc(in))!='*'&&(c=fgetc(in))!='='))
                    {
                        temp1=2;
                    }


                    if(temp1==1)
                    {
                        if(susac==1)
                        {
                            bigo[nsay]='+';
                            nsay++;
                            bigo[nsay]='N';
                            nsay++;
                        }
                        else if(susac>1)
                        {
                            bigo[nsay]='*';
                            nsay++;
                            bigo[nsay]='N';
                            nsay++;
                        }
                    }


                    if(temp1==2)
                    {
                        bigo[nsay]='*';
                        nsay++;
                        bigo[nsay]='L';
                        nsay++;
                    }

                }
                else if(c=='}')
                {
                    suskap++;
                }
                else if(susac==1 || suskap==1)
                {
                    if(susac==suskap)
                    {
                        susac=0;
                        suskap=0;

                        break;
                    }
                }
            }
            bigo[nsay]='+';
            nsay++;
        }

        if(((c=='d') && (c=fgetc(in))=='o' && (c=fgetc(in))=='{') || ((c=='d') && (c=fgetc(in))=='o' && (c=fgetc(in))=='\n' && (c=fgetc(in))=='{'))
        {
            susac=0;
            dowhilesay++;

            susac++;

            if(((c=fgetc(in))!='+')||((c=fgetc(in))!='-')||((c=fgetc(in))!='+'&&(c=fgetc(in))!='+')||((c=fgetc(in))!='-'&&(c=fgetc(in))!='-')||((c=fgetc(in))!='+'&&(c=fgetc(in))!='=')||((c=fgetc(in))!='-'&&(c=fgetc(in))!='='))
            {
                temp1=1;
            }
            else if(((c=fgetc(in))!='/')||((c=fgetc(in))!='*')||((c=fgetc(in))!='/'&&(c=fgetc(in))!='=')||((c=fgetc(in))!='*'&&(c=fgetc(in))!='='))
            {
                temp1=2;
            }



            if(temp1==1)
            {
                if(susac==1)
                {
                    bigo[nsay]='+';
                    nsay++;
                    bigo[nsay]='N';
                    nsay++;
                }
                else if(susac>1)
                {
                    bigo[nsay]='*';
                    nsay++;
                    bigo[nsay]='N';
                    nsay++;
                }
            }


            if(temp1==2)
            {
                bigo[nsay]='*';
                nsay++;
                bigo[nsay]='L';
                nsay++;
            }


            else if(c=='}')
            {
                suskap++;
            }
            else if(susac==1 || suskap==1)
            {
                if(susac==suskap)
                {
                    susac=0;
                    suskap=0;

                    continue;
                }
            }
            bigo[nsay]='+';
            nsay++;
        }


    }


    printf("\n\n");
    i=0;
    printf("\n\n\nZaman Karmasikligi Yazdiriliyor...\n\nBigO(");
    for(int k=1; k<nsay; k++)
    {

        if(bigo[k]=='+')
        {
            if(bigo[k+1]=='*')
            {

                printf("%c",bigo[k]);
                k++;
            }
            else if(bigo[k+1]=='+')
            {
                printf("%c",bigo[k]);
                k++;
            }

        }
        else
        {
            printf("%c",bigo[k]);
        }



    }
    printf(")");
    printf("\n\n");

    puts("\nDevam etmek icin bir tusa basin ...");
    getch();
}

void YerKarmasikligi()
{


    FILE *in=fopen("a.txt","r+");

    fseek(in,0,SEEK_SET);//imleci dosyanin en basina alıyoruz
    char c;

    int inttoplam=0;
    int chtoplam=0;
    int ftoplam=0;
    int dtoplam=0;
    int ltoplam=0;
    int stoplam=0;


    int count=0;

    int sayac=0;
    int vir;
    int parantez;
    int temp;
    int yedek=0;
    int yedek1=0,yedek2=0,yedek3=0,yedek4=0;
    int k=0;


    char a1[2];

    while((c=fgetc(in))!=EOF)
    {

        vir=0;
        parantez=0;

        if(c=='i' && (c=fgetc(in))=='n' && (c=fgetc(in))=='t' && (c=fgetc(in))==' ')
        {

            temp=0;

            if((c=fgetc(in))=='m' && (c=fgetc(in))=='a' && (c=fgetc(in))=='i' && (c=fgetc(in))=='n' && (c=fgetc(in))=='(' && (c=fgetc(in))==')')
            {
                k=1;
                continue;
            }


            while((c=fgetc(in))!='\n' && c!=';')
            {

                if(c==',')
                {

                    vir++;

                    temp=1;
                }
                if(c=='[')
                {
                    parantez++;
                    temp=1;
                }
            }


            if(temp==0)  // tek değişken
            {

                inttoplam+=sizeof(int);
            }
            else
            {

                temp=1;

                if(parantez==0)  // dizi yok sadece virgül
                {
                    inttoplam+=sizeof(int)*(vir+1);
                    yedek=0;
                }
                if(parantez==1)  // sadece tek boyutlu dizi
                {
                    a1[0]='N';
                    yedek1=1;
                }
                if(parantez==2)  // sadece çift boyutlu dizi
                {
                    a1[0]='N';
                    a1[1]='N';
                    yedek2=1;
                }
                if(parantez!=0 && vir!=0)  // hem dizi hem virgül
                {
                    vir--;
                    if(parantez==1)   // tek boyutlu için
                    {
                        inttoplam+=sizeof(int)*(vir+1);
                        yedek3=1;
                    }
                    if(parantez==2)   // çift boyutlu için
                    {
                        inttoplam+=sizeof(int)*(vir+1);
                        yedek4=1;
                    }
                }
            }
        }

    }

    fseek(in,0,SEEK_SET);//imleci dosyanin en basina alıyoruz

    int parantezsay=0;
    int virsay=0;

    int op;

    int value;

    int fonk=0;

    while((c=fgetc(in))!=EOF)  //  int fonksiyonlarına göre ayarlama
    {

        if(k==0)   // main fonksiyonu yoksa
        {

            if(c=='i' && (c=fgetc(in))=='n' && (c=fgetc(in))=='t' && (c=fgetc(in))==' ')
            {

                while((c=fgetc(in))!='\n' && c!=';')  // satır satır kontrol
                {

                    if(c=='(')
                    {

                        if((c=fgetc(in))==')')  //// parametresiz bir fonksiyon ise
                        {

                            fonk=1;
                            inttoplam-=sizeof(int);
                        }
                        else  // parametreli ise (yazdığım algoritma bunu otomatik hesaplıyor o yüzden birşey yazmadım)
                        {

                            fonk=1;

                        }
                    }
                }
            }
        }
        else  // main fonksiyonu varsa
        {

            value=0;
            parantezsay=0;
            virsay=0;
            op=0;

            if(c=='i' && (c=fgetc(in))=='n' && (c=fgetc(in))=='t' && (c=fgetc(in))==' ')
            {

                if((c=fgetc(in))=='m' && (c=fgetc(in))=='a' && (c=fgetc(in))=='i' && (c=fgetc(in))=='n' && (c=fgetc(in))=='(' && (c=fgetc(in))==')')  // main fonksiyonu kontrol
                {

                    continue;
                }
                while((c=fgetc(in))!='\n' && c!=';')
                {

                    if(c=='(')
                    {

                        value=1;
                        fonk=1;

                        if((c=fgetc(in))==')')  // parametresiz bir fonksiyon ise
                        {

                            op=1; // parametresiz fonksiyon olduğunu belirten değişken, 3.else if e girmesini engeller
                            inttoplam-=sizeof(int);
                        }
                        else   // parametreli bir fonksiyon ise
                        {

                            if(c=='i' && (c=fgetc(in))=='n' && (c=fgetc(in))=='t' && (c=fgetc(in))==' ')
                            {

                                while((c=fgetc(in))!=')')
                                {

                                    if(c==',')
                                    {

                                        virsay++;
                                    }
                                    if(c=='[')
                                    {

                                        parantezsay++;
                                    }
                                }
                            }
                        }

                    }

                }


                if(virsay!=0 && parantezsay==0)  // birden fazla int parametre virgül,dizi yok
                {

                    inttoplam-=sizeof(int)*(virsay+1);
                }
                else if(virsay!=0 && parantezsay!=0)  // int değişken ve dizi
                {

                    virsay--;

                    inttoplam-=sizeof(int)*(virsay+1);
                }
                else if(virsay==0 && parantezsay==0 && value==1 && op==0)  // tek int değişken
                {



                    inttoplam-=sizeof(int);
                }

            }

        }
    }

    int voidvir=0;
    int voidpar=0;

    int value2;

    fseek(in,0,SEEK_SET);//imleci dosyanin en basina alıyoruz

    while((c=fgetc(in))!=EOF)
    {

        if(k==1)  // main fonksiyonu varsa
        {

            if(c=='v' && (c=fgetc(in))=='o' && (c=fgetc(in))=='i' && (c=fgetc(in))=='d' && (c=fgetc(in))==' ')  // void fonksiyonuna göre ayarlama
            {

                while((c=fgetc(in))!='\n' && c!=';')
                {

                    if(c=='(')
                    {

                        if((c=fgetc(in))==')')  // parametre yok
                        {
                            inttoplam+=sizeof(int); // 3. else if e gireceği için bir arttırdık ki ne azalsın ne artsın çünkü parametresiz void fonksiyonu
                        }
                        else if((c=fgetc(in))!=')')  // parametre var ise
                        {

                            if(c=='i' && (c=fgetc(in))=='n' && (c=fgetc(in))=='t' && (c=fgetc(in))==' ')
                            {

                                while((c=fgetc(in))!=')')
                                {

                                    if(c==',')
                                    {

                                        voidvir++;
                                    }
                                    if(c=='[')
                                    {

                                        voidpar++;
                                    }

                                }
                            }

                        }

                    }
                }

                if(voidvir!=0 && voidpar==0)  // birden fazla int parametre virgül ile
                {

                    inttoplam-=sizeof(int)*(voidvir+1);
                }
                else if(voidvir!=0 && voidpar!=0)  // int değişken ve dizi
                {

                    voidvir--;

                    inttoplam-=sizeof(int)*(voidvir+1);
                }
                else if(voidvir==0 && voidpar==0)   // tek int değişken
                {

                    inttoplam-=sizeof(int);

                }
            }
        }
    }

    fseek(in,0,SEEK_SET);//imleci dosyanin en basina alıyoruz

    int fvir;
    int ftemp;

    while((c=fgetc(in))!=EOF)
    {

        fvir=0;

        if(c=='f' && (c=fgetc(in))=='l' && (c=fgetc(in))=='o' && (c=fgetc(in))=='a' && (c=fgetc(in))=='t' && (c=fgetc(in))==' ')
        {

            ftemp=0;

            while((c=fgetc(in))!='\n' && c!=';')
            {

                if(c==',')  // aynı satırda birden fazla float tipinde değişken
                {

                    fvir++;
                    ftemp=1;
                }
            }

            if(ftemp==0) // 1 tane değişken var ise
            {

                ftoplam+=sizeof(float);
            }
            else
            {

                ftoplam+=sizeof(float)*(fvir+1);
            }
        }
    }

    fseek(in,0,SEEK_SET);

    int dvir;
    int dtemp;

    while((c=fgetc(in))!=EOF)
    {

        dvir=0;

        if(c=='d' && (c=fgetc(in))=='o' && (c=fgetc(in))=='u' && (c=fgetc(in))=='b' && (c=fgetc(in))=='l' && (c=fgetc(in))=='e' && (c=fgetc(in))==' ')
        {

            dtemp=0;

            while((c=fgetc(in))!='\n' && c!=';')
            {

                if(c==',')
                {

                    dvir++;
                    dtemp=1;
                }
            }
            if(dtemp==0) // 1 tane değişken var ise
            {

                dtoplam+=sizeof(double);
            }
            else  // aynı satırda birden fazla double tipinde değişken
            {

                dtoplam+=sizeof(double)*(dvir+1);
            }
        }
    }

    fseek(in,0,SEEK_SET);

    int lvir;
    int ltemp;

    while((c=fgetc(in))!=EOF)
    {

        lvir=0;

        if(c=='l' && (c=fgetc(in))=='o' && (c=fgetc(in))=='n' && (c=fgetc(in))=='g' && (c=fgetc(in))==' ')
        {

            ltemp=0;

            while((c=fgetc(in))!='\n' && c!=';')
            {

                if(c==',')
                {

                    lvir++;
                    ltemp=1;
                }
            }
            if(ltemp==0) // 1 tane değişken var ise
            {

                ltoplam+=sizeof(long);
            }
            else  // aynı satırda birden fazla long tipinde değişken
            {

                ltoplam+=sizeof(long)*(lvir+1);
            }
        }
    }

    fseek(in,0,SEEK_SET);

    int chvir;
    int chtemp=0;

    while((c=fgetc(in))!=EOF)
    {

        chvir=0;

        if(c=='c' && (c=fgetc(in))=='h' && (c=fgetc(in))=='a' && (c=fgetc(in))=='r' && (c=fgetc(in))==' ')
        {

            chtemp=0;

            while((c=fgetc(in))!='\n' && c!=';')
            {

                if(c==',')
                {

                    chvir++;
                    chtemp=1;
                }
            }
            if(chtemp==0) // 1 tane değişken var ise
            {

                chtoplam+=sizeof(char);
            }
            else  // aynı satırda birden fazla char tipinde değişken
            {

                chtoplam+=sizeof(char)*(chvir+1);
            }
        }
    }

    fseek(in,0,SEEK_SET);

    int svir;
    int stemp=0;

    while((c=fgetc(in))!=EOF)
    {

        svir=0;

        if(c=='s' && (c=fgetc(in))=='h' && (c=fgetc(in))=='o' && (c=fgetc(in))=='r' && (c=fgetc(in))=='t' && (c=fgetc(in))==' ')
        {

            stemp=0;

            while((c=fgetc(in))!='\n' && c!=';')
            {

                if(c==',')
                {

                    svir++;
                    stemp=1;
                }
            }

            if(stemp==0) // 1 tane değişken var ise
            {

                stoplam+=sizeof(short);
            }
            else  // aynı satırda birden fazla short tipinde değişken
            {

                stoplam+=sizeof(short)*(svir+1);
            }
        }
    }

    fseek(in,0,SEEK_SET); //imleci dosyanin en basina alıyoruz

    int rec=0;

    while((c=fgetc(in))!=EOF)
    {

        if(fonk==1)  // int fonksiyonu varsa
        {

            if(c=='r' && (c=fgetc(in))=='e' && (c=fgetc(in))=='t' && (c=fgetc(in))=='u' && (c=fgetc(in))=='r' && (c=fgetc(in))=='n' && (c=fgetc(in))==' ')
            {

                while((c=fgetc(in))!=';')
                {

                    if(c=='(')
                    {

                        rec=1; // recursive fonksiyon

                    }
                }
            }
        }
    }

    if(fonk==1 && rec==0)  // int fonksiyonu var ama recursive değil
    {

        inttoplam+=sizeof(int); // return değeri tek bir değer döndürür
    }


    printf("YER KARMASIKLIGI-------------------------------------------------------------\n");


    printf("int veri tipindeki degiskenlerin boyutu:%d\n",inttoplam);
    printf("char veri tipindeki degiskenlerin boyutu:%d\n",chtoplam);
    printf("float veri tipindeki degiskenlerin boyutu:%d\n",ftoplam);
    printf("double veri tipindeki degiskenlerin boyutu:%d\n",dtoplam);
    printf("long veri tipindeki degiskenlerin boyutu:%d\n",ltoplam);
    printf("short veri tipindeki degiskenlerin boyutu:%d\n",stoplam);

    int toplam;

    toplam=inttoplam+chtoplam+ftoplam+dtoplam+ltoplam+stoplam;

    printf("------------------------------------------\n");

    if(rec==0)  // recursive fonksiyon yok
    {

        printf("Recursive yok\n");

        if(yedek1==0 && yedek2==0 && yedek3==0 && yedek4==0)  // eğer dizi yoksa
        {

            if(temp==0)  // sadece tek değişken
            {

                printf("%d",toplam);
            }
            else  // sadece virgül var ise
            {

                printf("%d",toplam);
            }
        }
        if(yedek1==1)  // sadece tek boyutlu dizi
        {

            printf("4(%c)+%d --- O(%c)",a1[0],toplam,a1[0]);
        }
        else if(yedek2==1)  // sadece çift boyutlu dizi
        {
            printf("4(%c*%c)+%d --- O(%c*%c)",a1[0],a1[1],toplam,a1[0],a1[1]);
        }
        else if(yedek3==1)  // tek boyutlu ve virgül var
        {

            printf("4(%c)+%d --- O(%c)",a1[0],toplam,a1[0]);
        }
        else if(yedek4==1)  // çift boyutlu ve virgül var
        {

            printf("4(%c*%c)+%d --- O(%c*%c)",a1[0],a1[1],toplam,a1[0],a1[1]);
        }
    }
    else if(rec==1)  // recursive fonksiyon varsa
    {

        printf("Recursive var\n");

        if(yedek1==0 && yedek2==0 && yedek3==0 && yedek4==0)  // eğer dizi yoksa
        {

            if(temp==0)  // sadece tek değişken
            {

                printf("N+%d",toplam);
            }
            else  // sadece virgül var ise
            {

                printf("N+%d",toplam);
            }
        }
        if(yedek1==1)  // sadece tek boyutlu dizi
        {

            printf("5(%c)+%d --- O(%c)",a1[0],toplam,a1[0]);
        }
        else if(yedek2==1)  // sadece çift boyutlu dizi
        {
            printf("4%c*%c+%c+%d --- O(%c*%c)",a1[0],a1[1],a1[0],toplam,a1[0],a1[1]);
        }
        else if(yedek3==1)  // tek boyutlu ve virgül var
        {

            printf("5(%c)+%d --- O(%c)",a1[0],toplam,a1[0]);
        }
        else if(yedek4==1)  // çift boyutlu ve virgül var
        {

            printf("4%c*%c+%c+%d --- O(%c*%c)",a1[0],a1[1],a1[0],toplam,a1[0],a1[1]);
        }

    }
    puts("\nDevam etmek icin bir tusa basin ...");
    getch();


}
void SureninHesaplanmasi()
{

    clock_t basla,bitir;
    char c;
    FILE *in3=fopen("a.c","r");

    basla = clock();
    system("gcc -o filename a.c");
    bitir = clock();
    printf("\nBaslama degeri: %ld\n", basla);
    printf("Bitis degeri: %ld\n", bitir);
    printf("Verilen Kodun CPU'daki calisma sureci (saniye): %f\n", (double)(bitir - basla) / CLOCKS_PER_SEC);

    puts("\nDevam etmek icin bir tusa basin ...");
    getch();
}
